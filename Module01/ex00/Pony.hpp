#ifndef MODULE01_PONY_HPP
#define MODULE01_PONY_HPP
#include <iostream>

class Pony
{
public:
	void		setName(std::string &str);
	std::string	getName();

private:
	std::string	name;
};

#endif
