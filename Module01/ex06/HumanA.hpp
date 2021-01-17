#ifndef MODULE01_HUMANA_HPP
#define MODULE01_HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
public:
	HumanA(std::string const &name, Weapon &type);
	void attack();
private:
	std::string	name;
	Weapon &type;
};


#endif //MODULE01_HUMANA_HPP
