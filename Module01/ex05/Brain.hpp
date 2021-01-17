#ifndef MODULE01_BRAIN_HPP
#define MODULE01_BRAIN_HPP

#include <iostream>
#include <strstream>

class Brain
{
public:
	Brain();
	Brain(std::string const &str);
	std::string identify();
private:
	std::string property;
};

#endif
