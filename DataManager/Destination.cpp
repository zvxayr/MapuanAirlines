#include "Destination.h"
#include "FileReader.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace DataManager;

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

		FileReader::ReadRow(file, name, basePrice);

		List().emplace_back(name, basePrice);
	}
}

void Destination::save(const std::string& filename)
{

}
