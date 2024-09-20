#ifndef DOWNLOAD_HPP
#define DOWNLOAD_HPP

#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>
#include <fstream>
#include <filesystem>

namespace download
{
	static nlohmann::json patchesData = NULL;

	static size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *userp)
	{
		size_t totalSize = size * nmemb;
		userp->append(static_cast<char *>(contents), totalSize);
		return totalSize;
	}

	static size_t WriteFileCallback(void *contents, size_t size, size_t nmemb, std::ofstream *out)
	{
		size_t totalSize = size * nmemb;
		out->write(static_cast<const char *>(contents), totalSize);
		return totalSize;
	}

	nlohmann::json GetJson(const std::string &url)
	{
		CURL *curl;
		CURLcode res;
		std::string readBuffer;

		curl_global_init(CURL_GLOBAL_DEFAULT);
		curl = curl_easy_init();
		if (curl)
		{
			curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
			res = curl_easy_perform(curl);
			if (res != CURLE_OK)
			{
				std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
			}
			curl_easy_cleanup(curl);
		}
		curl_global_cleanup();

		nlohmann::json jsonData = nlohmann::json::parse(readBuffer);
		download::patchesData = jsonData;
		return jsonData;
	}

	static bool _downloadFile(const std::string &url, const std::string &outputPath)
	{
		CURL *curl;
		CURLcode res;

		std::filesystem::path dir = std::filesystem::path(outputPath).parent_path();
		if (!std::filesystem::exists(dir))
		{
			std::filesystem::create_directories(dir);
		}

		curl_global_init(CURL_GLOBAL_DEFAULT);
		curl = curl_easy_init();
		if (curl)
		{
			std::ofstream outFile(outputPath, std::ios::binary);
			if (!outFile)
			{
				std::cerr << "Failed to create output file: " << outputPath << std::endl;
				return false;
			}
			curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteFileCallback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &outFile);
			curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
			res = curl_easy_perform(curl);
			if (res != CURLE_OK)
			{
				std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
			}
			outFile.close();
			curl_easy_cleanup(curl);
			curl_global_cleanup();
			return true;
		}
		curl_global_cleanup();
		return false;
	}

	bool GetFile(const std::string &fileName)
	{
		// Check if the necessary keys exist
		if (download::patchesData.contains("patches"))
		{
			for (const auto &patch : download::patchesData["patches"])
			{
				std::string iterateFileName = patch["filename"];
				if (iterateFileName == fileName)
				{
					std::string fileUrl = std::string(patch["host"]) + std::string(patch["filename"]);
					std::cout << "Downloading " << iterateFileName << " from " << fileUrl << std::endl;
					_downloadFile(fileUrl, "download/mpq/" + iterateFileName); // Download the file
					return true;									   // Exit after downloading the first match
				}
			}
		}
		std::cerr << "File not found in JSON data." << std::endl;
		return false;
	}
}

#endif // DOWNLOAD_HPP
