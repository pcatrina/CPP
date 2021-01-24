#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (num << Fixed::constanta);
}

Fixed::Fixed(float const &fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(fl * (1 << Fixed::constanta));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::constanta));
}

int	Fixed::toInt() const
{
	return (this->value >> Fixed::constanta);
}

void Fixed::setRawBits(int const &raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}