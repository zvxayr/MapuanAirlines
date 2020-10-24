#include "Statistics.h"
#include "FileHandler.h"
#include <string>

using namespace DataManager;

namespace DataManager::Statistics {

	int& NetTicketsSold()
	{
		static int value = 0;
		return value;
	}

	double& NetProfit()
	{
		static double value = 0;
		return value;
	}

	void load(const std::string& filename)
	{
		std::ifstream file(filename);
		FileHandler::ReadRow(file, NetTicketsSold(), NetProfit());

	}

	void save(const std::string& filename)
	{
		std::ofstream file(filename);
		FileHandler::WriteRow(file, NetTicketsSold(), NetProfit());
	}

}
