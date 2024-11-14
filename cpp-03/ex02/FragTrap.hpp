#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
		public:
			FragTrap();
			FragTrap(const FragTrap &new_one);
			FragTrap &operator=(const FragTrap &copy);
			FragTrap(const std::string n);
			void highFivesGuys();
			~FragTrap();
};

#endif