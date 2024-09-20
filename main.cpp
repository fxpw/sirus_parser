#include <iostream>
#include <curl/curl.h>
#include "./include/download.hpp"
#include "./include/mpq/mpq.hpp"

int main() {
	download::GetJson("http://51.15.228.31:8080/api/client/patches");
    // std::cout << download::patchesData << std::endl;
	// download::GetFile("patch-ruRU-4.mpq");
	mpq::ExtractDBCFromMPQ("download/mpq/patch-ruRU-4.mpq","Spell.dbc");
    return 0;
}