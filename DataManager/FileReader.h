#pragma once
#include <sstream>
#include <fstream>

namespace DataManager::FileReader {

	/// <summary>
	/// Reads the file until a comma or a new line is reached.
	/// The read data will be stored to the parameter value
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="file">An input file stream</param>
	/// <param name="value">Where to store the read data</param>
	template <typename T>
	inline void Read(std::ifstream& file, T& value)
	{
		std::stringstream ss;
		char chr = file.get();

		while (chr != ',' && chr != '\n' && chr != EOF) {
			ss << chr; // put character to string stream
			chr = file.get();
		}

		ss >> value;
	}

	/// <summary>
	/// Reads the file until a comma or a new line is reached.
	/// The read data will be stored to the parameter value
	/// </summary>
	/// <param name="file">An input file stream</param>
	/// <param name="value">Where to store the read data</param>
	template <>
	inline void Read<std::string>(std::ifstream& file, std::string& value)
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
	

}

