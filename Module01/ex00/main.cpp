#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack(std::string str)
{
	Pony ponyOnStack;
	ponyOnStack.setName(str);
	std::cout << "Make " << ponyOnStack.getName() << " on the STACK"
	<< std::endl;
}

void	ponyOnTheHeap(std::string str)
{
	Pony *ponyOnHeap = new Pony;
	ponyOnHeap->setName(str);
	std::cout << "Make " << ponyOnHeap->getName() << " on the HEAP"
	<< std::endl;
	delete ponyOnHeap;
}

int		main()
{
	ponyOnTheHeap("Bella");
	ponyOnTheStack("Sam");
    return 0;
}
