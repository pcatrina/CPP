#ifndef MODULE05_BUREAUCRAT_HPP
#define MODULE05_BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"
#define COD_STY_ITL "\x1B[3m"
#define COD_STY_BLD "\x1B[1m"
#define COD_STY_UND "\x1B[4m"

#define COL_RED "\x1b[31m"
#define COL_GRE "\x1b[32m"
#define COL_YEL "\x1b[33m"
#define COL_BLU "\x1b[34m"
#define COL_MAG "\x1b[34m"
#define COL_CYN "\x1b[36m"

#define COL_RES	"\x1b[0m"

class Form;

class Bureaucrat
{
private:
	std::string	name;
	int			grade;
public:
	Bureaucrat(std::string const &name);
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;
	void inc();
	void dec();
	void signForm(Form const &form);
	void executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream &ost, Bureaucrat &bureaucrat);

#endif //MODULE05_BUREAUCRAT_HPP
