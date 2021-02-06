#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) :
Form(name, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &ref) : Form(ref.getName(), ref
		.getGradeToSign(), ref.getGradeToExecution())
{
	this->setSign(ref.isSign());
}

PresidentialPardonForm & PresidentialPardonForm::operator=(
		const PresidentialPardonForm &ref)
{
	if (this == &ref)
		return (*this);
	*this = ref;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::action(const Bureaucrat &bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getGradeToExecution())
	{
		std::cout<<bureaucrat.getName()
		<<"  has been pardoned by Zafod Beeblebrox!"<<std::endl;
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

