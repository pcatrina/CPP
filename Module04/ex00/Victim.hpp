#ifndef MODULE04_VICTIM_HPP
#define MODULE04_VICTIM_HPP

#include <iostream>

class Victim
{
private:
	std::string	name;
public:
	Victim();
	Victim(std::string const &name);
	void 		introduce();
	std::string	getName() const;
	virtual void getPolymorphed() const;
	Victim &operator=(Victim const &victim);
	virtual ~Victim();
};

std::ostream &operator<<(std::ostream &out, Victim &victim);

#endif //MODULE04_VICTIM_HPP
