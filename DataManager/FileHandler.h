#pragma once
#include <sstream>
#include <fstream>

namespace DataManager::FileHandler {

	/// <summary>
	/// Reads the file until a comma or a new line is reached.
	/// The read data will be stored to the parameter value
	/// </summary>
	/// <typeparam name="T">Datatype of the data</typeparam>
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
	
	/// <summary>
	/// Reads multiple comma separated data from a file stream
	/// </summary>
	/// <typeparam name="...Args">Datatypes of the data</typeparam>
	/// <param name="file">An input file stream</param>
	/// <param name="...args">Where to store the read data</param>
	template <typename... Args>
	void ReadRow(std::ifstream& file, Args&... args)
	{
		(Read(file, args), ...);
	}

	template <typename T>
	void Write(std::ofstream& file, const T& arg)
	{
		file << arg;
	}

	void Write(std::ofstream& file, const std::string& arg);
	void Write(std::ofstream& file, const double& arg);
	void Write(std::ofstream& file, const float& arg);

	template <typename T, typename... Args>
	void WriteRow(std::ofstream& file, T& arg, const Args&... args)
	{
		Write(file, arg);

		((file << ',', Write(file, args)), ...);

		file << std::endl;
	}
}

