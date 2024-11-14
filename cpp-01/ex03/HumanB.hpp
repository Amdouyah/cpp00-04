#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *wep;
		std::string name;
	public :
		void attack();
		void setWeapon(Weapon &wep);
		HumanB(std::string name);
		~HumanB();
};

#endif