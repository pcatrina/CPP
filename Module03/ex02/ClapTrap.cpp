#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->HP = 100;
	this->MaxHP = 100;
	this->EP = 100;
	this->MaxEP = 100;
	this->Level = 100;
	this->Name = "CLAPTRAP";
	this->MeleeAttackDamage = 100;
	this->RangeAttackDamage = 100;
	this->ArmorDamageReductions = 10;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nLuke i'm your father" << COL_RES << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : Name(name)
{
	this->HP = 100;
	this->MaxHP = 100;
	this->EP = 100;
	this->MaxEP = 100;
	this->Level = 100;
	this->MeleeAttackDamage = 100;
	this->RangeAttackDamage = 100;
	this->ArmorDamageReductions = 100;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nLuke i'm your father" << COL_RES << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : Name(clapTrap.Name)
{
	this->HP = clapTrap.HP;
	this->MaxHP = clapTrap.MaxHP;
	this->EP = clapTrap.EP;
	this->MaxEP = clapTrap.MaxEP;
	this->Level = clapTrap.Level;
	this->MeleeAttackDamage = clapTrap.MeleeAttackDamage;
	this->MeleeAttackDamage = clapTrap.RangeAttackDamage;
	this->ArmorDamageReductions = clapTrap.ArmorDamageReductions;
	std::cout << COD_STY_ITL << COL_YEL
			  << "\nLuke i'm your father" << COL_RES << std::endl;
}

void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at "
																	"range, causing "
			  << this->RangeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->MeleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP > amount)
	{
		if (amount > this->ArmorDamageReductions)
			this->HP -= (amount - this->ArmorDamageReductions);
	}
	std::cout << COD_STY_UND << COL_RED
			  << "FR4G-TP " << this->Name << " was attacked and received " <<
			  amount << " damage!" << " Now HP - " << this->HP << COL_RES << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	(this->MaxHP - this->HP > amount) ? (this->HP += amount) : (this->HP =this->MaxHP);
	std::cout << COD_STY_BLD << COL_GRE
			  << "FR4G-TP " << this->Name << " be repaired at " <<
			  amount << " points!"  << " Now HP - " << this->HP << COL_RES << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout  << COD_STY_BLD << COL_CYN << "Heroes are the last to leave" << std::endl;
}