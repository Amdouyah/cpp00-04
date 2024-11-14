#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int	HItPoints;
		int EnergyPoints;
		int	AttackDammage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &new_one);
		ClapTrap &operator=(const ClapTrap &copy);
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();


};

#endif