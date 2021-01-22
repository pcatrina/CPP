#ifndef MODULE02_FIXED_HPP
#define MODULE02_FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const int &num);
	Fixed(const Fixed &fixed);
	Fixed &operator=(Fixed const &fixed);
	int	getRawBits(void) const;
	void setRawBits(int const &raw);
	virtual ~Fixed();

private:
	int	value;
	static int const constanta = 8;
};


#endif
