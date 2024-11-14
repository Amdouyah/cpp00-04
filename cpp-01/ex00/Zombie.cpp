#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
void Zombie::set(std::string name)
{
	this->name = name;
}
std::string Zombie::get()
{
	return(this->name);
}
Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name << "has been destroyed !" << std::endl;
}