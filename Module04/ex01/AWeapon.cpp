#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const &aWeapon) : name(aWeapon.name), apcost(aWeapon
.apcost), damage(aWeapon.damage)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name),
apcost(apcost),damage(damage)
{
}

AWeapon & AWeapon::operator=(AWeapon const &aWeapon)
{
	this->name = aWeapon.name;
	this->damage = aWeapon.damage;
	this->apcost = aWeapon.apcost;
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string const AWeapon::getName() const
{
	return (name);
}

int AWeapon::getApcost() const
{
	return (apcost);
}

int AWeapon::getDamage() const
{
	return (damage);
}
