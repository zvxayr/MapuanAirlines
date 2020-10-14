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

		// end when a comma, a new line, or end of file is reached
		while (chr != ',' && chr != '\n' && chr > -1) {
			ss << chr; // put character to string stream
			chr = file.get();
		}

		// pass the read string to value
		// functions just like std::cin
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

			// skip to the next delimitter
			while (chr != ',' && chr != '\n' && chr > -1) {
				chr = file.get();
			}
		}
		else
		{
			// end when a comma, a new line, or end of file is reached
			while (chr != ',' && chr != '\n' && chr > -1) {
				ss << chr; // put character to string stream
				chr = file.get();
			}
		}

		// pass the read string to value
		// ss >> value does not play well with strings with spaces
		value = ss.str();
	}
	

}

