#ifndef MODULE04_SORCERER_HPP
#define MODULE04_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string name;
	std::string title;
public:
	Sorcerer();
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &sorcerer);
	void		introduce();
	void		 polymorph(Victim const &victim) const;
	std::string getName();
	std::string getTitle();
	Sorcerer &operator=(Sorcerer const &sorcerer);
	~Sorcerer();
};

std::ostream &operator<<(std::ostream &out, Sorcerer &sorcerer);

#endif //MODULE04_SORCERER_HPP