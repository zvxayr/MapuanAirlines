#include "FileReader.h"

using namespace DataManager;

void FileReader::Read(std::ifstream& file, std::string& value)
{
	std::stringstream ss;
	char chr = file.get();

	if (chr == '"')
	{
		// ignore the quotation mark
		chr = file.get();

		// read until the closing quotations
		while (chr != '"') {
			ss << chr; // put character to string stream
			chr = file.get();
		}

		while (chr != ',' && chr != '\n' && chr != EOF) {
			chr = file.get();
		}
	}
	else
	{
		while (chr != ',' && chr != '\n' && chr != EOF) {
			ss << chr; // put character to string stream
			chr = file.get();
		}
	}

	value = ss.str();
}

