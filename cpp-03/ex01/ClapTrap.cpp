#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout <<" ClapTrap Default constructor called"<< std::endl;
	this->name = "";
	this->HItPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDammage = 0;
}
ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->HItPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDammage = 0;
	std::cout << "Constructor called for ClapTrap named " << name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &new_one){
	*this = new_one;
	std::cout <<"copy constructor called"<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->HItPoints = copy.HItPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDammage = copy.AttackDammage;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap named " << name << std::endl;
}
void ClapTrap::attack(const std::string& target){
	if(HItPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << AttackDammage << " points of damage!"<< std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't attack. No hit points or energy points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(EnergyPoints > 0 && HItPoints > 0)
	{
		HItPoints += amount;
		EnergyPoints--;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " points. Hit points remaining: " << HItPoints << std::endl;
	}
	else
        std::cout << "ClapTrap " << name << " can't be repaired. No energy points or no Hitpoints left." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
	if (HItPoints > 0){
		if (HItPoints <= amount)
			HItPoints = 0;
		else
			HItPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage. Hit points remaining: " << HItPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already out of hit points and can't take any more damage." << std::endl;
}

