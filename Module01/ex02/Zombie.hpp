#ifndef MODULE01_ZOMBIE_HPP
#define MODULE01_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string const &type, std::string const &name);
	void	setZombie(std::string const &type, std::string const &name);
	void 	announce();
	~Zombie();

private:
	std::string	name;
	std::string type;
};

#endif
