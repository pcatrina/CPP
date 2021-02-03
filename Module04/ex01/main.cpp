#include <iostream>

#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	me->recoverAP();
	std::cout << *me;
	Enemy *a = new SuperMutant();
	me->attack(a);
	me->equip(pf);
	while (me->getAp() != 40)
		me->recoverAP();
	std::cout << *me;
	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	delete pr;
	delete pf;
	delete me;
	return 0;
}