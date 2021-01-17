
#include <iostream>
#include <cctype>
#include <string>

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; j < (int)strlen((const char*)av[i]); j++)
				std::cout << (char)toupper(av[i][j]);
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}