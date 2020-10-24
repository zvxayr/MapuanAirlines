#include "FlightClass.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;

FlightClass::Data::Data(std::string& name, double multiplier)
	: Name(name)
	, Multiplier(multiplier)
{
}

std::vector<FlightClass::Data>& FlightClass::List()
{
	static std::vector<FlightClass::Data> list;
	return list;
}

void FlightClass::load(const std::string& filename)
{
	std::ifstream file(filename);

	int count;
	FileHandler::ReadRow(file, count);
	List().reserve(count);

	while (file.peek() != EOF)
	{
		std::string name;
		double multiplier;

		FileHandler::ReadRow(file, name, multiplier);
		List().emplace_back(name, multiplier);
	}
}

void FlightClass::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	FileHandler::WriteRow(file, List().size());
	for (auto& fclass : List())
		FileHandler::WriteRow(file, fclass.Name, fclass.Multiplier);
}

void FlightClass::Data::operator=(const FlightClass::Data& other)
{
	this->Name = other.Name;
	this->Multiplier = other.Multiplier;
}
