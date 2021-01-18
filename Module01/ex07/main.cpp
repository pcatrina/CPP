#include <iostream>
#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "error : wrong number of arguments" << std::endl;
		return (-1);
	}
	try
	{
		Replace replace;
		replace.setReplace(av[1], av[2], av[3]);
	}
	catch (const char* error_msg)
	{
		std::cerr << "error : " << error_msg << std::endl;
		return (-1);
	}
	return (0);
}