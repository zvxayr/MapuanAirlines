#include "Destination.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;

Destination::Data::Data(std::string& name, double basePrice)
	: Name(name)
	, BasePrice(basePrice)
{
}

std::vector<Destination::Data>& Destination::List()
{
	static std::vector<Destination::Data> list;
	return list;
}

void Destination::load(const std::string& filename)
{
	std::ifstream file(filename);
	while (file.peek() != EOF)
	{
		std::string name;
		double basePrice;

		FileHandler::ReadRow(file, name, basePrice);
		List().emplace_back(name, basePrice);
	}
}

void Destination::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	for (auto& dest : List())
		FileHandler::WriteRow(file, dest.Name, dest.BasePrice);
}

void Destination::Data::operator=(const Destination::Data& other)
{
	this->Name = other.Name;
	this->BasePrice = other.BasePrice;
}
