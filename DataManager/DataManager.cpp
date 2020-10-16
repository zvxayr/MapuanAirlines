#include "DataManager.h"
#include "Destination.h"

using namespace DataManager;

void DataManager::load()
{
	Destination::load("Destinations.txt");
}

void DataManager::save()
{
	Destination::save("Destinations.txt");
}
