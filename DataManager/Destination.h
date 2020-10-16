#pragma once
#include <string>
#include <vector>

namespace DataManager::Destination {

	class Data
	{
	public:
		Data(std::string& name, double basePrice);

	public:
		std::string Name;
		double BasePrice;
	};

	std::vector<Destination::Data>& List();
	void load(const std::string& filename);
	void save(const std::string& filename);

}

