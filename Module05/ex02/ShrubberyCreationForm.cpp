#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : Form
(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &shrubberyCreationForm) : Form
		(shrubberyCreationForm.getName(), shrubberyCreationForm
		.getGradeToSign(), shrubberyCreationForm.getGradeToExecution())
{
	this->setSign(shrubberyCreationForm.isSign());
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &shrubberyCreationForm)
{
	if (this == &shrubberyCreationForm)
		return (*this);
	*this = shrubberyCreationForm;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() <= this->getGradeToExecution())
	{
		const char *arr[13] = {
				"    _\\/_",
				"     /\\",
				"     /\\",
				"    /  \\",
				"    /~~\\o",
				"   /o   \\",
				"  /~~*~~~\\",
				" o/    o \\",
				" /~~~~~~~~\\~`",
				"/__*_______\\",
				"     ||",
				"   \\====/",
				"    \\__/"
		};
		std::ofstream	of;
		of.open(bureaucrat.getName() + "_shrubbery", std::ios::trunc);
		if (!of.is_open())
			throw ShrubberyCreationForm::ErrorMessage();
		else
		for (int i = 0; i < 13; i++)
			of << arr[i] << "\n";
		of << std::endl;
		of.close();
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}