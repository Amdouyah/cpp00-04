#include "Zombie.hpp"

int main()
{
	Zombie *new_z = zombieHorde(10, "amine");
	int i = 0;
	while(i < 10)
	{
		new_z[i].announce();
		i++;
	}
	delete[] new_z;
}