#pragma once
#include <string>
#include <vector>

namespace DataManager::FlightClass {

	class Data
	{
	public:
		Data(std::string& name, int from, int to, double basePrice);
		Data() = default;

		void operator=(const FlightClass::Data& a);

	public:
		std::string Name;
		int From;
		int To;
		double Multiplier;
	};

	std::vector<FlightClass::Data>& List();
	void load(const std::string& filename);
	void save(const std::string& filename);

}

