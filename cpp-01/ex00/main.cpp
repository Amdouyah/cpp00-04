#include "Zombie.hpp"

int main()
{
	Zombie *new_z = newZombie("amine");
	new_z->announce();
	randomChump("douyahia");
	delete new_z;
	return 0;
}