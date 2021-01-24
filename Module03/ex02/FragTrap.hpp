#ifndef MODULE03_FRAGTRAP_HPP
#define MODULE03_FRAGTRAP_HPP

#include <iostream>
#include <sys/time.h>

#define COD_STY_ITL "\x1B[3m"
#define COD_STY_BLD "\x1B[1m"
#define COD_STY_UND "\x1B[4m"

#define COL_RED "\x1b[31m"
#define COL_GRE "\x1b[32m"
#define COL_YEL "\x1b[33m"
#define COL_BLU "\x1b[34m"
#define COL_MAG "\x1b[34m"
#define COL_CYN "\x1b[36m"

#define COL_RES	"\x1b[0m"

class FragTrap
{
private:
	unsigned int	HP;
	unsigned int	MaxHP;
	unsigned int 	EP;
	unsigned int	MaxEP;
	unsigned int	Level;
	std::string 	Name;
	unsigned int	MeleeAttackDamage;
	unsigned int	RangeAttackDamage;
	unsigned int 	ArmorDamageReductions;
public:
	FragTrap(std::string const &name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	~FragTrap();
};


#endif //MODULE03_FRAGTRAP_HPP
