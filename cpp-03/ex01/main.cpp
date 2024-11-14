#include "ScavTrap.hpp"


int main()
{
	ClapTrap claptrap("Clap");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    ScavTrap scavtrap("Scav");
    scavtrap.guardGate();
    scavtrap.attack("target2");
    scavtrap.takeDamage(30);

    return 0;
}