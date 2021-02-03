#ifndef MODULE04_CHARACTER_HPP
#define MODULE04_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

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

class Character
{
private:
	std::string name;
	AWeapon *weapon;
	int AP;
public:
	Character(std::string const &name);
	Character(Character const &character);
	Character &operator=(Character const &character);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName() const;
	AWeapon *getWeapon() const;
	int getAp() const;
};

std::ostream  &operator<<(std::ostream &os, Character &character);

#endif //MODULE04_CHARACTER_HPP
