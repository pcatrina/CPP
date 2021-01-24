#ifndef MODULE02_FIXED_HPP
#define MODULE02_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &fixed);
	Fixed(int const num);
	Fixed(const float &fl);
	Fixed &operator=(Fixed const &fixed);
	float	toFloat(void) const;
	int		toInt(void) const;
	int	getRawBits(void) const;
	void setRawBits(int const &raw);
	virtual ~Fixed();

private:
	int	value;
	static int const constanta = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
