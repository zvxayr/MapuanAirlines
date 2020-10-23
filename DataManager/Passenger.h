#pragma once
#include <string>
#include <vector>

namespace DataManager::Passenger {

	class Data
	{
	public:
		Data(int id,
			std::string surName,
			std::string givenName,
			std::string middleName,
			std::string sex,
			std::string birthDate,
			std::string contactNumber,
			std::string address);
		Data() = default;

		void operator=(const Passenger::Data& a);

	public:
		int Id;
		std::string SurName;
		std::string GivenName;
		std::string MiddleName;
		std::string Sex;
		std::string BirthDate;
		std::string ContactNumber;
		std::string Address;
	};

	std::vector<Passenger::Data>& List();
	void Erase(int loc);
	void load(const std::string& filename);
	void save(const std::string& filename);
	void create(
		std::string SurName,
		std::string GivenName,
		std::string MiddleName,
		std::string Sex,
		std::string BirthDate,
		std::string ContactNumber,
		std::string Address);
}
