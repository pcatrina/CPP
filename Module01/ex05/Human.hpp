#ifndef MODULE01_HUMAN_HPP
#define MODULE01_HUMAN_HPP

#include "Brain.hpp"

class Human
{
public:
	std::string	identify();
	Brain		getBrains();

private:
	Brain brain;
};


#endif
