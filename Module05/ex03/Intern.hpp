#ifndef MODULE05_INTERN_HPP
#define MODULE05_INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Form;

class Intern
{
public:
	Intern();
	Intern(Intern const &intern);
	Intern &operator=(Intern const &intern);
	~Intern();
	static Form* makeForm(std::string const &name, std::string const &target);
};


#endif //MODULE05_INTERN_HPP
