#include "Intern.hpp"
#include <typeinfo>
#include <iostream>


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

Form* Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string const _name[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};
	Form *_pool[3];
	_pool[0] = ShrubberyCreationForm::newForm(target);
	_pool[1] = RobotomyRequestForm::newForm(target);
	_pool[2] = PresidentialPardonForm::newForm(target);
	for (int i = 0; _name[i] == name && i < 3; i++)
	{
		int j = 0;
		while (j < 3)
		{
			if (j != i)
				delete _pool[j];
			j++;
		}
		return (_pool[i]);
	}
	return (nullptr);
}