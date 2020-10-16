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
	void Read(std::ifstream& file, T& value)
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
	void Read(std::ifstream& file, std::string& value);
	

}

