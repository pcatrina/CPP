#ifndef MODULE04_ENEMY_HPP
#define MODULE04_ENEMY_HPP

#include <iostream>

class Enemy
{
private:
	int HP;
	std::string type;
public:
	Enemy(int hp, const std::string &type);
	Enemy(const Enemy &enemy);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &aWeapon);
	std::string const getType() const;
	int getHp() const;
	virtual void takeDamage(int);
};


#endif //MODULE04_ENEMY_HPP
