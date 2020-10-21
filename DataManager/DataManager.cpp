#include "DataManager.h"
#include "Destination.h"
#include "FlightClass.h"
#include <msclr\marshal_cppstd.h>

using namespace DataManager;

void DataManager::load()
{
	Destination::load("Destinations.txt");
	FlightClass::load("FlightClasses.txt");
}

void DataManager::save()
{
	Destination::save("Destinations.txt");
	FlightClass::save("FlightClasses.txt");
}

System::String^ DataManager::ConvertString(const std::string& str)
{
	return gcnew System::String(str.c_str());
}

std::string DataManager::ConvertString(System::String^ str)
{
	return msclr::interop::marshal_as<std::string>(str);
}
