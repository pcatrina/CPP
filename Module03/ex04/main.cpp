#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{

	FragTrap frag ("Fragtrap");

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

	NinjaTrap ninja("Naruto");

	ninja.beRepaired(40);
	ninja.takeDamage(40);
	ninja.beRepaired(10);
	ninja.meleeAttack("Andrew");
	ninja.rangedAttack("Andrew");

	ninja.ninjaShoebox(scrav);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(ninja);
	ninja.challengeNewcomer("Kakashi");
	ninja.vaulthunter_dot_exe("Lee");

	SuperTrap super("Superman");
	return 0;
}
