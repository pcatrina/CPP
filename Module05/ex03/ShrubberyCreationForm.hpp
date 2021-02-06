#ifndef MODULE05_SHRUBBERYCREATIONFORM_HPP
#define MODULE05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string const &name);
	ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const&shrubberyCreationForm);
	virtual ~ShrubberyCreationForm();

	virtual void action(Bureaucrat const &bureaucrat) const;
};


#endif //MODULE05_SHRUBBERYCREATIONFORM_HPP
