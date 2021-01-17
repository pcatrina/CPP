#include "Human.hpp"

std::string Human::identify()
{
	return this->brain.identify();
}

Brain Human::getBrains()
{
	return this->brain;
}