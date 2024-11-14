#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harlo;
		int index = -1;
		std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for(int i = 0; i < 4; i++)
		{
			if (str[i] == av[1])
			{
				index = i;
				break;
			}

		}
		switch(index)
		{
			case 0:
				harlo.complain("DEBUG");
				harlo.complain("INFO");
				harlo.complain("WARNING");
				harlo.complain("ERROR");
				break;
			case 1:
				harlo.complain("INFO");
				harlo.complain("WARNING");
				harlo.complain("ERROR");
				break;
			case 2:
				harlo.complain("WARNING");
				harlo.complain("ERROR");
				break;
			case 3:
				harlo.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
		return(0);
	}
	else
		std::cout << "wrong arguments" << std::endl;
}