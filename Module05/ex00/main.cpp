#include <iostream>
#include <vector>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *putin = new Bureaucrat("Vova");
//		std::cout<<*putin;
//		putin->inc();
//		putin->dec();
//		std::cout<<*putin;
	}
	catch (std::exception & e)
	{
		std::cout<<e.what()<<std::endl;
	}
	return 0;
}
