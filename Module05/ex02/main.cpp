
#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	try
	{
		Bureaucrat	putin("vova");
		std::cout<<putin;
		ShrubberyCreationForm sForm("SForm");
		std::cout<<sForm;
		sForm.action(putin);
		RobotomyRequestForm rForm("RForm");
		rForm.action(putin);
		std::cout<<rForm;
		PresidentialPardonForm pForm("PForm");
		pForm.action(putin);
		std::cout<<pForm;
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}