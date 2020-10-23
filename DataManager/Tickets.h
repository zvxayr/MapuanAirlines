#pragma once
#include <string>
#include <vector>

namespace DataManager::Tickets {

	std::vector<int>& List();
	void use(const std::string& directory);
	void load(const std::string& date, bool isGoingToPlace, const std::string& place);
	void save();

}