#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	FragTrap frag("Fragtrap");

	frag.beRepaired(40);
	frag.takeDamage(40);
	frag.beRepaired(10);
	frag.meleeAttack("Ruslan");
	frag.rangedAttack("Ruslan");

	frag.vaulthunter_dot_exe("Ruslan");
	frag.vaulthunter_dot_exe("Ruslan");
	frag.vaulthunter_dot_exe("Ruslan");
	frag.vaulthunter_dot_exe("Ruslan");
	frag.vaulthunter_dot_exe("Ruslan");

	ScavTrap scrav("Scavtrap");

	scrav.beRepaired(40);
	scrav.takeDamage(40);
	scrav.beRepaired(10);
	scrav.meleeAttack("Andrew");
	scrav.rangedAttack("Andrew");

	scrav.challengeNewcomer("Andrew");
	scrav.challengeNewcomer("Andrew");
	scrav.challengeNewcomer("Andrew");
	scrav.challengeNewcomer("Andrew");
	scrav.challengeNewcomer("Andrew");
	return 0;
}
