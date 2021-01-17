#include "Brain.hpp"
#include "Human.hpp"

int	main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrains().identify() << std::endl;
}