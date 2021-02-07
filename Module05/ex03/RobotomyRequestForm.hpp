#ifndef MODULE05_ROBOTOMYREQUESTFORM_HPP
#define MODULE05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "iostream"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const &name);
	RobotomyRequestForm(RobotomyRequestForm const &ref);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &ref);
	~RobotomyRequestForm();

	static RobotomyRequestForm *newForm(std::string const &target);
	virtual void action(Bureaucrat const &bureaucrat) const;
};


#endif //MODULE05_ROBOTOMYREQUESTFORM_HPP
