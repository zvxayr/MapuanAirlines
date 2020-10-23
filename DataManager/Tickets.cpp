#include "Tickets.h"
#include "FileHandler.h"
#include <filesystem>
#include <vector>
#include <sstream>

using namespace DataManager;
namespace fs = std::filesystem;

static const int SEATS = 120;

static std::string path = "";
static std::string filename = "";

std::vector<int>& Tickets::List()
{
	static std::vector<int> list;
	return list;
}


void Tickets::use(const std::string& directory)
{
	path = directory;
}

void Tickets::load(const std::string& date, bool isGoingToPlace, const std::string& place)
{
	std::string filepath;
	{
		std::stringstream ss;
		ss << fs::current_path().string() << "/" << path << "/" << (isGoingToPlace ? "To" : "From") << " " << place << "/";
		filepath = ss.str();
	}
	fs::create_directories(filepath);

	{
		std::stringstream ss;
		ss << filepath << date << ".txt";
		if (filename == ss.str()) return; // no need to reload
		filename = ss.str();
	}

	List().resize(SEATS);
	std::fill(List().begin(), List().end(), -1);

	std::ifstream file(filename);
	while (file.peek() != EOF)
	{
		int seatIndex;
		int passengerId;

		FileHandler::ReadRow(file, seatIndex, passengerId);
		List()[seatIndex] = passengerId;
	}
}

void Tickets::save()
{
	std::ofstream file(filename);
	for (int i = 0; i < SEATS; i++)
	{
		int& passengerId = List()[i];

		if (passengerId > -1)
			FileHandler::WriteRow(file, i, passengerId);
	}
}
