#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat putin("Vova");
		putin.inc();
		std::cout<<putin;
	}
	catch (std::exception & e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	try
	{
		Bureaucrat putin("Vova");
		putin.dec();
		std::cout<<putin;
	}
	catch (std::exception & e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	try
	{
		Bureaucrat Chinush("Sechin");
		Chinush.inc();
		std::cout<<Chinush;
	}
	catch (std::exception & e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}
