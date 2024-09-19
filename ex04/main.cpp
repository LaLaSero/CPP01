#include "main.hpp"

typedef std::string string;

int main(int argc, char **argv)
{
	if (argc != 4) {
	std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
	return 1;
	}

	string filename = argv[1];
	string s1 = argv[2];
	string s2 = argv[3];

	std::ifstream inputFile(filename.c_str());
	std::ofstream outputFile(filename + ".replace");

	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open file " << filename << std::endl;
		return 1;
	}
	else
	{
		
	}
	
}