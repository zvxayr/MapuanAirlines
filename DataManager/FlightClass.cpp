#include "FlightClass.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;

FlightClass::Data::Data(std::string& name, int from, int to, double multiplier)
	: Name(name)
	, From(from)
	, To(to)
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
		int from;
		int to;
		double multiplier;

		FileHandler::ReadRow(file, name, from, to, multiplier);
		List().emplace_back(name, from, to, multiplier);
	}
}

void FlightClass::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	FileHandler::WriteRow(file, List().size());
	for (auto& [Name, From, To, Multiplier] : List())
		FileHandler::WriteRow(file, Name, From, To, Multiplier);
}

void FlightClass::Data::operator=(const FlightClass::Data& other)
{
	this->Name = other.Name;
	this->From = other.From;
	this->To = other.To;
	this->Multiplier = other.Multiplier;
}
