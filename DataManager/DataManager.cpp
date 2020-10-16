#include "DataManager.h"
#include "Destination.h"
#include "FlightClass.h"

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
