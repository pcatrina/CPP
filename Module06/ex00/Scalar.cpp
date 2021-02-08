#include "Scalar.hpp"

Scalar::Scalar(char* &str) : _tmp() ,_char(),_int(), _float(), _double()
{
	castChar(str);
}

Scalar::Scalar(const Scalar &scalar):_char(scalar._char), _int(scalar._int),
_float(scalar._float), _double(scalar._double)
{
}

Scalar & Scalar::operator=(const Scalar &scalar)
{
	if (this == &scalar)
		return (*this);
	this->_char = scalar._char;
	this->_int = scalar._int;
	this->_float = scalar._float;
	this->_double = scalar._double;
	return (*this);
}

Scalar::~Scalar()
{
}

void Scalar::castChar(char *&str)
{
	if (std::strlen(str) == 1)
		this->_char = static_cast<char>(str[0]);
	else
	{
		int i = std::atoi(str);
		if (i >= 21 && i <=126)
			this->_char = static_cast<char>(i);
		else
			this->_char = static_cast<char>(0);
	}
}

char Scalar::getChar() const
{
	return _char;
}

int Scalar::getInt() const
{
	return _int;
}

float Scalar::getFloat() const
{
	return _float;
}

double Scalar::getDouble() const
{
	return _double;
}

std::ostream &operator<<(std::ostream &os, Scalar const &scalar)
{
	os	<<"char: \'"<<scalar.getChar()<<"\'"<<"\n"
		<<"int: "<<scalar.getInt()<<"\n"
		<<"float: "<<scalar.getFloat()<<"\n"
		<<"double "<<scalar.getDouble()<<std::endl;
	return os;
}