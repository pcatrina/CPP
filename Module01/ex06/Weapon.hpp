#ifndef MODULE01_WEAPON_HPP
#define MODULE01_WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string const &type);
	void		setType(std::string const &name);
	std::string getType();

private:
	std::string	type;
};


#endif //MODULE01_WEAPON_HPP
