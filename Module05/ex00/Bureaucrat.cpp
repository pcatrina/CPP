#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name) : name(name), grade(0)
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
		this->grade = i;
	else
	{
		if (i > 150)
			throw Bureaucrat::GradeTooHighException();
	}
	std::cin.ignore(32767, '\n');
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : name(bureaucrat.name),
grade
(bureaucrat.grade)
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
	if (this->grade > 0 && this->grade <= 150)
		this->grade++;
}

void Bureaucrat::dec()
{
	if (this->grade > 0 && this->grade <= 150)
		this->grade--;
}

const char * Bureaucrat::GradeTooHighException() const throw()
{
	return ("Too Hight!");
}

std::ostream &operator<<(std::ostream &ost, Bureaucrat &bureaucrat)
{
	ost << bureaucrat.getName() <<", bureaucrat grade "<<bureaucrat.getGrade();
	return (ost);
}