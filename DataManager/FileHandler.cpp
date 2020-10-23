#include "FileHandler.h"
#include <iomanip>

using namespace DataManager;

void FileHandler::Read(std::ifstream& file, std::string& value)
{
	std::stringstream ss;
	char chr = file.get();

	if (chr == '"')
	{
		// ignore the quotation mark
		chr = file.get();

		while (chr != '"') {
			ss << chr;
			chr = file.get();
		}

		// skip to the next delimiter
		while (chr != ',' && chr != '\n' && chr != EOF)
			chr = file.get();
	}
	else
	{
		while (chr != ',' && chr != '\n' && chr != EOF) {
			ss << chr;
			chr = file.get();
		}
	}

	value = ss.str();
}

void FileHandler::Write(std::ofstream& file, const std::string& arg)
{
	file << "\"" << arg << "\"";
}

void FileHandler::Write(std::ofstream& file, const double& arg)
{
	file << std::fixed << std::setprecision(2) << arg;
}

void FileHandler::Write(std::ofstream& file, const float& arg)
{
	file << std::fixed << std::setprecision(2) << arg;
}