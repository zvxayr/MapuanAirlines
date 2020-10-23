#include "DataManager.h"
#include "Destination.h"
#include "FlightClass.h"
#include "Passenger.h"

using namespace DataManager;

void DataManager::load()
{
	Destination::load("Destinations.txt");
	FlightClass::load("FlightClasses.txt");
	Passenger::load("Passenger.txt");
}

void DataManager::save()
{
	Destination::save("Destinations.txt");
	FlightClass::save("FlightClasses.txt");
	Passenger::save("Passenger.txt");
}
