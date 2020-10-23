#include "Passenger.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;

Passenger::Data::Data(
	std::string surName,
	std::string givenName,
	std::string middleName,
	std::string sex,
	std::string birthDate,
	std::string contactNumber,
	std::string address
)
	: SurName(surName)
	, GivenName(givenName)
	, MiddleName(middleName)
	, Sex(sex)
	, BirthDate(birthDate)
	, ContactNumber(contactNumber)
	, Address(address)
{
}

void Passenger::Erase(int loc)
{
	List().erase(List().begin() + loc);
}

std::vector<Passenger::Data>& Passenger::List()
{
	static std::vector<Passenger::Data> list;
	return list;
}

void Passenger::Data::operator=(const Passenger::Data& other)
{
	this->SurName = other.SurName;
	this->GivenName = other.GivenName;
	this->MiddleName = other.MiddleName;
	this->Sex = other.Sex;
	this->BirthDate = other.BirthDate;
	this->ContactNumber = other.ContactNumber;
	this->Address = other.Address;
}

void Passenger::load(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open()) return;

	int count;
	FileHandler::ReadRow(file, count);
	List().reserve(count + 100); // arbitrary expected number of new passengers

	while (file.peek() != EOF)
	{
		std::string surName;
		std::string givenName;
		std::string middleName;
		std::string sex;
		std::string birthDate;
		std::string contactNumber;
		std::string address;

		FileHandler::ReadRow(file, surName, givenName, middleName, sex, birthDate, contactNumber, address);
		List().emplace_back(surName, givenName, middleName, sex, birthDate, contactNumber, address);
	}
}

void Passenger::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	FileHandler::WriteRow(file, List().size());
	for (const auto& [SurName, GivenName, MiddleName, Sex, BirthDate, ContactNumber, Address] : List())
		FileHandler::WriteRow(file, SurName, GivenName, MiddleName, Sex, BirthDate, ContactNumber, Address);
}

void Passenger::create(
	std::string surName,
	std::string givenName,
	std::string middleName,
	std::string sex,
	std::string birthDate,
	std::string contactNumber,
	std::string address)
{
	didChange = true;
	List().emplace_back(surName, givenName, middleName, sex, birthDate, contactNumber, address);
}