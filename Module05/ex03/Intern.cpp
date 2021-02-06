#include "Intern.hpp"
#include <typeinfo>
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern & Intern::operator=(const Intern &intern)
{
	if(this == &intern)
		return (*this);
	*this = intern;
	return (*this);
}

Intern::~Intern()
{
}

void Intern::makeForm(const std::string &name, const std::string &target)
{
	if (atoi(typeid(PresidentialPardonForm).name()) == name.length())
		std::cout<<typeid(PresidentialPardonForm).name()<<std::endl;
}