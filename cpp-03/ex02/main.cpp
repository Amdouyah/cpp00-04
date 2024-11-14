#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("CLaP");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    ScavTrap scavtrap("SCAv");
    scavtrap.guardGate();
    scavtrap.attack("target2");
    scavtrap.takeDamage(30);

    FragTrap fragtrap("Frag");
    fragtrap.highFivesGuys();
    fragtrap.attack("target3");
    fragtrap.takeDamage(20);

    return 0;
}