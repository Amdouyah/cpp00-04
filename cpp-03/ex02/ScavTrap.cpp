#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Constructor called "<< std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
	std::cout << "ScavTrap Constructor called "<< std::endl; 
	this->HItPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDammage = 20;
}
void ScavTrap::guardGate()
{
	std::cout <<"ScavTrap " << name  <<" is now in Gate keeper mode "<<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &new_one){
	*this = new_one;
	std::cout <<"copy constructor called"<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->HItPoints = copy.HItPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDammage = copy.AttackDammage;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called "<< std::endl; 
}

void ScavTrap::attack(const std::string& target){
	if(HItPoints > 0 && EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << AttackDammage << " points of damage!"<< std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " can't attack. No hit points or energy points left." << std::endl;
}

