#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be an empty string" << std::endl;
		return 1;
	}
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open file " << filename << std::endl;
		return 1;
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create output file " << filename << ".replace" << std::endl;
		inputFile.close();
		return 1;
	}

	std::string line;
	while(std::getline(inputFile, line))
	{
		std::string new_line;
		size_t pos = 0;
		size_t found_pos;

		while ((found_pos = line.find(s1, pos)) != std::string::npos)
		{
			// posからfound_posまでの文字列を追加
			new_line.append(line, pos, found_pos - pos);
			// s2を追加
			new_line.append(s2);
			// posを更新
			pos = found_pos + s1.length();
		}
		// 残りの文字列を追加
		new_line.append(line, pos, line.length() - pos);

		outputFile << new_line << std::endl;
	}

	inputFile.close();
	outputFile.close();
	return 0;
}
