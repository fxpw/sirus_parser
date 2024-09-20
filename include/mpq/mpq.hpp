#ifndef MPQ_HPP
#define MPQ_HPP
#include <StormLib.h>
#include "dbc/dbc.hpp"

class mpq
{
private:
	static TCHAR *ConverterToTCHAR(const char *orig)
	{
		// TCHAR* tchar = 0;
		std::string str = std::string(orig);
		TCHAR *tchar = new TCHAR[str.size() + 1];
		copy(str.begin(), str.end(), tchar);
		tchar[str.size()] = 0;
		return tchar;
	};

public:
	static bool ExtractDBCFromMPQ(std::string pathToMPQ, std::string dbcName)
	{
		HANDLE _mpq;
		bool isSuccess = SFileOpenArchive(ConverterToTCHAR(pathToMPQ.c_str()), 0, STREAM_FLAG_WRITE_SHARE, &_mpq);
		if (!isSuccess)
			return false;
		if (!_mpq)
		{
			return false;
		};
		if (!SFileExtractFile(_mpq,std::string("DBFilesClient\\"+dbcName).c_str(), ConverterToTCHAR(std::string("new/dbc/" + dbcName).c_str()), SFILE_OPEN_FROM_MPQ)){
			return false;
		}
		SFileCloseArchive(_mpq);
		return true;
	};
	static bool CreateMPQWhitDBC(std::string newPatchDirAndName = "error")
	{
		// try
		// {
		// 	HANDLE mpq;
		// 	remove(newPatchDirAndName.c_str());
		// 	bool isSucsess = SFileCreateArchive(ConverterToTCHAR(newPatchDirAndName.c_str()), MPQ_CREATE_ATTRIBUTES + MPQ_CREATE_ARCHIVE_V2, 0x000000010, &mpq);
		// 	if (!isSucsess)
		// 	{
		// 		remove("./Spell.dbc");
		// 		remove("./ItemDisplayInfo.dbc");
		// 		remove("./SpellItemEnchantment.dbc");
		// 		remove("./SpellVisualKit.dbc");
		// 		remove("./SpellVisualEffectName.dbc");
		// 		return false;
		// 	};
		// 	SFileAddFileEx(mpq, ConverterToTCHAR("new/Spell.dbc"), "DBFilesClient\\Spell.dbc", MPQ_FILE_COMPRESS + MPQ_FILE_REPLACEEXISTING, MPQ_COMPRESSION_ZLIB, MPQ_COMPRESSION_NEXT_SAME);
		// 	remove("new/Spell.dbc");
		// 	SFileAddFileEx(mpq, ConverterToTCHAR("new/ItemDisplayInfo.dbc"), "DBFilesClient\\ItemDisplayInfo.dbc", MPQ_FILE_COMPRESS + MPQ_FILE_REPLACEEXISTING, MPQ_COMPRESSION_ZLIB, MPQ_COMPRESSION_NEXT_SAME);
		// 	remove("new/ItemDisplayInfo.dbc");
		// 	SFileAddFileEx(mpq, ConverterToTCHAR("new/SpellItemEnchantment.dbc"), "DBFilesClient\\SpellItemEnchantment.dbc", MPQ_FILE_COMPRESS + MPQ_FILE_REPLACEEXISTING, MPQ_COMPRESSION_ZLIB, MPQ_COMPRESSION_NEXT_SAME);
		// 	remove("new/SpellItemEnchantment.dbc");
		// 	SFileAddFileEx(mpq, ConverterToTCHAR("new/SpellVisualKit.dbc"), "DBFilesClient\\SpellVisualKit.dbc", MPQ_FILE_COMPRESS + MPQ_FILE_REPLACEEXISTING, MPQ_COMPRESSION_ZLIB, MPQ_COMPRESSION_NEXT_SAME);
		// 	remove("new/SpellVisualKit.dbc");
		// 	SFileAddFileEx(mpq, ConverterToTCHAR("new/SpellVisualEffectName.dbc"), "DBFilesClient\\SpellVisualEffectName.dbc", MPQ_FILE_COMPRESS + MPQ_FILE_REPLACEEXISTING, MPQ_COMPRESSION_ZLIB, MPQ_COMPRESSION_NEXT_SAME);
		// 	remove("new/SpellVisualEffectName.dbc");
		// 	return SFileCloseArchive(mpq);
		// }
		// catch (...)
		// {
		// };
		return false;
	};
};
#endif