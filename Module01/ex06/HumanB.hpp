#ifndef MODULE01_HUMANB_HPP
#define MODULE01_HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
public:
	HumanB(std::string const &name);
	void attack();
	void setWeapon(Weapon &type);
private:
	std::string	name;
	Weapon *type;
};


#endif //MODULE01_HUMANB_HPP
