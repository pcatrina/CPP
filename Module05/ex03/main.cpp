#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define SC_FORM "shrubbery creation"
#define RR_FORM "robotomy request"
#define PP_FORM "presidential pardon"

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
		Form *newForm = Intern::makeForm(SC_FORM, "newSform");
		putin.executeForm(*newForm);
		newForm->action(putin);
		delete newForm;
	}
	catch (std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}