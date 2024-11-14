#include "replace.hpp"

void	replace_f(std::string &filename, std::string &s1, std::string &s2)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
        std::cerr << "Error opening file: " << filename << std::endl;
        exit(2);
    }
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
	{
        std::cerr << "Error can't create : " << filename + ".replace" << std::endl;
		inputFile.close();
        exit(2);
    }
	std::string line;
	size_t		pos = 0;
	while (std::getline(inputFile, line, '\0'))
	{
		while (1)
		{
			pos = line.find(s1, pos);
			if (pos != std::string::npos)
			{
				line.erase(pos,s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			}
			else
				break;
		}
        outFile << line << std::endl;
    }
}

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (s1.empty() || s2.empty()){
			std::cerr << "empty string" << std::endl;
			exit(0);
		}
		replace_f(filename, s1, s2);
	}
	else
		std::cout << "incorrect number" << std::endl ;
	return 0;
}

