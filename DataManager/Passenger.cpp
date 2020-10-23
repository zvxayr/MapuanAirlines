#include "Passenger.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;

Passenger::Data::Data(std::string& name, std::string Sex, std::string BirthDate, std::string ContactNumber, std::string Address, std::string Place)
	: Name(name)
	, Sex(Sex)
	, BirthDate(BirthDate)
	, ContactNumber(ContactNumber)
	, Address(Address)
	, Place(Place)
{
}

std::vector<Passenger::Data>& Passenger::List()
{
	static std::vector<Passenger::Data> list;
	return list;
}

void Passenger::load(const std::string& filename)
{
	std::ifstream file(filename);
	while (file.peek() != EOF)
	{
		std::string name;
		std::string Sex;
		std::string BirthDate;
		std::string ContactNumber;
		std::string Address;
		std::string Place;

		FileHandler::ReadRow(file, name, Sex, BirthDate, ContactNumber, Address, Place);
		List().emplace_back(name, Sex, BirthDate, ContactNumber, Address, Place);
	}
}

void Passenger::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	for (auto& fclass : List())
		FileHandler::WriteRow(file, fclass.Name, fclass.Sex, fclass.BirthDate, fclass.ContactNumber, fclass.Address, fclass.Place);
}


void Passenger::Data::operator=(const Passenger::Data& other)
{
	this->Name = other.Name;
	this->Sex = other.Sex;
	this->BirthDate = other.BirthDate;
	this->ContactNumber = other.ContactNumber;
	this->Address = other.Address;
	this->Place = other.Place;
}
