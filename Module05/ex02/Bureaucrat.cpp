#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name) : name(name), grade(0)
{
	while (1)
	{
		std::cout<<COD_STY_BLD<<COL_RED<<"Enter rating!!!"<<COL_RES<<std::endl;
		int i;
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Wrong input , Try once more ..." << std::endl;
		}
		else if  (i > 0 && i <= 150)
		{
			this->grade = i;
			break;
		}
		else
		{
			if (i < 1)
				throw Bureaucrat::GradeTooHighException();
			else if (i > 150)
				throw Bureaucrat::GradeTooLowException();
		}
		std::cin.ignore(32767, '\n');
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : name(bureaucrat.name),
grade(bureaucrat.grade)
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	if (this == &bureaucrat)
		return (*this);
	*this = bureaucrat;
	return (*this);
}
Bureaucrat::~Bureaucrat()
{
}

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::inc()
{
	if (this->grade > 1 && this->grade <= 150)
		this->grade--;
	else
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::dec()
{
	if (this->grade >= 1 && this->grade < 150)
		this->grade++;
	else
		throw Bureaucrat::GradeTooHighException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too Hight!");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too Low!");
}

void Bureaucrat::signForm(const Form &form)
{
	if (form.isSign() == 1)
		std::cout<<COD_STY_BLD<<COL_GRE<<this->getName()
		<<" signs "<<form.getName()<<COL_RES<<std::endl;
	else
	{
		std::cerr << this->getName() << " cannot sign " << form.getName()
				  << " because ";
		throw GradeTooLowException();
	}
}

void Bureaucrat::executeForm(const Form &form)
{
	if (this->getGrade() <= form.getGradeToExecution())
		std::cout<<COD_STY_ITL<<COL_GRE
		<<this->getName()<<" execute "<<form.getName()<<COL_RES<<std::endl;
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat &bureaucrat)
{
	ost << bureaucrat.getName() <<", bureaucrat grade "
	<<bureaucrat.getGrade()<<std::endl;
	return (ost);
}