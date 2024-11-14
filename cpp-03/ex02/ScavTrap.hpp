#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &new_one);
		ScavTrap &operator=(const ScavTrap &copy);
		void guardGate();
		void attack(const std::string& target);
		~ScavTrap();
};

#endif