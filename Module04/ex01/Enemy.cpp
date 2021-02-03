#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : HP(hp), type(type)
{
}

Enemy::~Enemy()
{
}

Enemy & Enemy::operator=(const Enemy &aWeapon)
{
	this->HP = aWeapon.HP;
	this->type = aWeapon.type;
	return (*this);
}

Enemy::Enemy(const Enemy &enemy) : HP(enemy.HP), type(enemy.type)
{
}

const std::string Enemy::getType() const
{
	return (type);
}

int Enemy::getHp() const
{
	return HP;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0 && this->HP >= damage)
		this->HP -= damage;
	else
		this->HP = 0;
}
