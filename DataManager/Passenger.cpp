#include "Passenger.h"
#include "FileHandler.h"
#include <vector>

using namespace DataManager;

static bool didChange = false;
static int lastId = 0;

Passenger::Data::Data(
	int id,
	std::string surName,
	std::string givenName,
	std::string middleName,
	std::string sex,
	std::string birthDate,
	std::string contactNumber,
	std::string address
)
	: Id(id)
	, SurName(surName)
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
	didChange = true;
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
		int id;
		std::string surName;
		std::string givenName;
		std::string middleName;
		std::string sex;
		std::string birthDate;
		std::string contactNumber;
		std::string address;

		FileHandler::ReadRow(file, id, surName, givenName, middleName, sex, birthDate, contactNumber, address);
		List().emplace_back(id, surName, givenName, middleName, sex, birthDate, contactNumber, address);
	}

	lastId = List().back().Id;
}

void Passenger::save(const std::string& filename)
{
	if (!didChange) return;

	std::ofstream file(filename);
	FileHandler::WriteRow(file, List().size());
	for (const auto& [Id, SurName, GivenName, MiddleName, Sex, BirthDate, ContactNumber, Address] : List())
		FileHandler::WriteRow(file, Id, SurName, GivenName, MiddleName, Sex, BirthDate, ContactNumber, Address);
}

Passenger::Data& Passenger::create(
	std::string surName,
	std::string givenName,
	std::string middleName,
	std::string sex,
	std::string birthDate,
	std::string contactNumber,
	std::string address)
{
	didChange = true;
	List().emplace_back(++lastId, surName, givenName, middleName, sex, birthDate, contactNumber, address);
	return List().back();
}
