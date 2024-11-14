#include "Weapon.hpp"

void Weapon::setType(std::string name)
{
	type = name;
}
const std::string & Weapon::getType()
{
	return(type);
}
Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}