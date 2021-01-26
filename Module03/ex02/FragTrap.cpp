#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nDirective one: Protect humanity! Directive two: Obey Jack "
				 "at all costs. Directive three: Dance!"<< COL_RES << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	ClapTrap::Level = 1;
	ClapTrap::MeleeAttackDamage = 30;
	ClapTrap::RangeAttackDamage = 20;
	ClapTrap::ArmorDamageReductions = 5;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nDirective one: Protect humanity! Directive two: Obey Jack "
				 "at all costs. Directive three: Dance!"<< COL_RES << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	std::string attack[5] = {
			"Piu", "Shoot", "Skidshhhhh", "one body more", "Chumba"
	};
	struct timeval tv;
	gettimeofday(&tv, NULL);
	int index;
	srand(tv.tv_usec);
	index = rand() %5;
	if (this->EP < 25)
		std::cout << COD_STY_BLD << COL_BLU
		<< "**NOT ENOUGH MANA**" << COL_RES << std::endl;
	else
	{
		std::cout << attack[index] << " to " << target << std::endl;
		this->EP -= 25;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}