#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &W) : wep(W) , name(name)
{	
};
HumanA::~HumanA()
{

};

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->wep.getType() << std::endl;
}