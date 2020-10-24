#pragma once
#include <string>

namespace DataManager::Statistics {

	int& NetTicketsSold();
	double& NetProfit();

	void load(const std::string& filename);
	void save(const std::string& filename);

}
