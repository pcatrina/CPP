#include <iostream>
#include "Scalar.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Scalar scalar(av[1]);
		std::cout<<scalar;
	}
	return 0;
}