#include <iostream>
#include "FragTrap.hpp"

int main()
{
	FragTrap frag("Claptrap");

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
	return 0;
}
