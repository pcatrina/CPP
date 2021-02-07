#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : Form
(name, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) :
Form(ref.getName(), ref.getGradeToSign(), ref.getGradeToExecution())
{
	this->setSign(ref.isSign());
}
 RobotomyRequestForm & RobotomyRequestForm::operator=(
		 const RobotomyRequestForm &ref)
 {
	if (this == &ref)
		return (*this);
	*this = ref;
	 return (*this);
 }

 RobotomyRequestForm::~RobotomyRequestForm()
 {
 }

 void RobotomyRequestForm::action(const Bureaucrat &bureaucrat) const
 {
	if (bureaucrat.getGrade() <= this->getGradeToExecution())
	{
		std::cout<<"* BZZZ BZZZ BZZZ BZZZ *"<<std::endl;
		std::cout<<bureaucrat.getName()
		<<" robotomized successfully 50% of the time!"<<std::endl;
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
 }

 RobotomyRequestForm * RobotomyRequestForm::newForm(const std::string &target)
 {
	RobotomyRequestForm *newForm = new RobotomyRequestForm(target);
	 return (newForm);
 }