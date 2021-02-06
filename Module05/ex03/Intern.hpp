#ifndef MODULE05_INTERN_HPP
#define MODULE05_INTERN_HPP

#include <iostream>

class Intern
{
public:
	Intern();
	Intern(Intern const &intern);
	Intern &operator=(Intern const &intern);
	~Intern();
	void makeForm(std::string const &name, std::string const &target);
};


#endif //MODULE05_INTERN_HPP
