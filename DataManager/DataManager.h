#pragma once
#include <string>

namespace DataManager {

	/// <summary>
	/// Loads all necessary data from disk into memory
	/// </summary>
	void load();

	/// <summary>
	/// Writes data back from memory to the disk
	/// </summary>
	void save();

	System::String^ ConvertString(const std::string& str);
	std::string ConvertString(System::String^ str);
}
