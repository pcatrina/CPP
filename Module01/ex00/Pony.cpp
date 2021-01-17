#include <iostream>
#include "Pony.hpp"

void Pony::setName(std::string &str)
{
	name = str;
}

std::string Pony::getName()
{
	return name;
}