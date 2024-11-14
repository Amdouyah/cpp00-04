#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("bom");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    return 0;
}