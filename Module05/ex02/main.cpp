
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
		putin.executeForm(sForm);
		sForm.action(putin);
		RobotomyRequestForm rForm("RForm");
		std::cout<<rForm;
		putin.executeForm(rForm);
		rForm.action(putin);
		PresidentialPardonForm pForm("PForm");
		std::cout<<pForm;
		putin.executeForm(pForm);
		pForm.action(putin);
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}