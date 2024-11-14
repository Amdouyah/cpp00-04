#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name= name;
};
HumanB::~HumanB()
{

};

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->wep->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wep)
{
	this->wep = &wep;
}