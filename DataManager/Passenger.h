#pragma once
#include <string>
#include <vector>

namespace DataManager::Passenger {

	class Data
	{
	public:
		Data(std::string& name, std::string Sex, std::string BirthDate, std::string ContactNumber, std::string Address, std::string Place);
		Data() = default;

		void operator=(const Passenger::Data& a);

	public:
		std::string Name;
		std::string Sex;
		std::string BirthDate;
		std::string ContactNumber;
		std::string Address;
		std::string Place;
	};

	std::vector<Passenger::Data>& List();
	void load(const std::string& filename);
	void save(const std::string& filename);

}
