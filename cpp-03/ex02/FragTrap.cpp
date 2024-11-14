#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout <<"Default Constructor Called"<< std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
	std::cout << "FragTrap Constructor called "<< std::endl; 
	this->HItPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDammage = 30;
}
FragTrap::FragTrap(const FragTrap &new_one){
	*this = new_one;
	std::cout <<"copy constructor called"<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	this->name = copy.name;
	this->HItPoints = copy.HItPoints;
	this->EnergyPoints = copy.EnergyPoints;
	this->AttackDammage = copy.AttackDammage;
	std::cout <<"Copy assignment operator called"<<std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}
FragTrap::~FragTrap(){
	std::cout <<"Default Destructor Called"<< std::endl;
}