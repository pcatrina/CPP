#ifndef MODULE05_FORM_HPP
#define MODULE05_FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string	name;
	bool 		sign;
	int 		gradeToSign;
	int			gradeToExecution;
	Form();
public:
	Form(const std::string &name, int gradeToSign, int gradeToExecution);
	Form(Form const &form);
	Form &operator=(Form const &form);
	virtual ~Form();

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class ErrorMessage : public std::exception
	{
		virtual const char* what() const throw();
	};
	const std::string &getName() const;
	bool isSign() const;
	int getGradeToSign() const;

	void setName(const std::string &name);
	int getGradeToExecution() const;
	void beSigned(Bureaucrat const &bureaucrat);
	void execute(Bureaucrat const & executor) const;
	void setSign(bool sign);
	virtual void action(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &ost, Form const &form);


#endif //MODULE05_FORM_HPP
