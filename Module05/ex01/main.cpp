
#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	putin("vova");
		Form		form("Pasport", 10, 10);
		std::cout<<putin;
		std::cout<<form;
		putin.dec();
		putin.dec();
		form.beSigned(putin);
		putin.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}