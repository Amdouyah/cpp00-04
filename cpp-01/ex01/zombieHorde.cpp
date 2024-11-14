#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie *new_z = new Zombie[N];
	int i = 0;
	while(i < N)
	{
		new_z[i].set(name);
		i++;
	}
	return new_z;
}
