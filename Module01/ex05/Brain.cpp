#include "Brain.hpp"

Brain::Brain()
{
	this->property = "";
}

Brain::Brain(std::string const &str)
{
	this->property = str;
}

std::string Brain::identify()
{
	long adr = (long) this;
	std::string		str;
	std::strstream	ss;
	ss << "0x" << std::uppercase << std::hex << adr;
	str = ss.str();
	return str.substr(0, 10);
}