#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecution)
: name(name), sign(false), gradeToSign(gradeToSign), gradeToExecution
(gradeToExecution)
{
	if (this->gradeToExecution < 1 || this->gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeToExecution > 150 || this->gradeToSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), sign(form.sign), gradeToSign
(form.gradeToSign), gradeToExecution(form.gradeToExecution)
{
}

Form & Form::operator=(const Form &form)
{
	if (this == &form)
		return (*this);
	this->name = form.name;
	this->sign = form.sign;
	this->gradeToSign = form.gradeToSign;
	this->gradeToExecution = form.gradeToExecution;
	return (*this);
}

Form::~Form()
{
}

const std::string &Form::getName() const
{
	return name;
}

bool Form::isSign() const
{
	return sign;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExecution() const
{
	return gradeToExecution;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Too Hight");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Too Low!");
}

const char * Form::ErrorMessage::what() const throw()
{
	return ("Error!");
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->gradeToSign >= bureaucrat.getGrade())
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::setSign(bool sign)
{
	Form::sign = sign;
}

void Form::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() <= this->getGradeToExecution())
	{
		this->action(executor);
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &ost, Form const &form)
{
	ost<<form.getName()<< " to sign you need, "
	<<form.getGradeToSign()<<std::endl;
	return (ost);
}