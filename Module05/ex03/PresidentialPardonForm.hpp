#ifndef MODULE05_PRESIDENTIALPARDONFORM_HPP
#define MODULE05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string const &name);
	PresidentialPardonForm(PresidentialPardonForm const &ref);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);
	virtual ~PresidentialPardonForm();

	static PresidentialPardonForm *newForm(std::string const &target);
	virtual void action(Bureaucrat const &bureaucrat) const;
};


#endif //MODULE05_PRESIDENTIALPARDONFORM_HPP
