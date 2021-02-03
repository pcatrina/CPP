#ifndef MODULE04_AWEAPON_HPP
#define MODULE04_AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
	std::string name;
	int 		apcost;
	int			damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &aWeapon);
	AWeapon &operator=(AWeapon const &aWeapon);
	std::string const getName() const;
	int getApcost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	virtual ~AWeapon();
};

#endif //MODULE04_AWEAPON_HPP
