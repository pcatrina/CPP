#include "Scalar.hpp"

Scalar::Scalar(char* &str) : _char(),_int(), _float(), _double()
{
	Scalar::convert(str);
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

void Scalar::convert(char *&str)
{
	const char *_tmp = static_cast<const char*>(str);
	castChar(_tmp);
	castInt(_tmp);
	castFloat(_tmp);
	castDouble();
}

void Scalar::castChar(const char* &_tmp)
{
	int i = std::atoi(_tmp);
	if (std::strlen(_tmp) == 1 && i == 0 && _tmp[0] != 48)
		this->_char = static_cast<char>(_tmp[0]);
	else if (i >= 32 && i <= 126 && !(i >= 48 && i <= 57))
		this->_char = static_cast<char>(i);
	else
		this->_char = static_cast<char>(0);
}

void Scalar::castInt(const char* &_tmp)
{
	int i = std::atoi(_tmp);
	if (std::strlen(_tmp) == 1 && i == 0 && this->_char != 48 && _tmp[0] != 48)
		this->_int = static_cast<int>((unsigned char)_tmp[0]);
	else
		this->_int = i;
}

void Scalar::castFloat(const char *&_tmp)
{
	float i = std::atof(_tmp);
	if (i == 0 && std::strlen(_tmp) == 1 && this->_char != 48 && _tmp[0] != 49)
		this->_float = static_cast<float>(this->_int);
	else
		this->_float = i;
}

void Scalar::castDouble(void)
{
	this->_double = static_cast<double>(this->_float);
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
	if (isnan(scalar.getFloat()) || isinf(scalar.getFloat()))
		os<<"char: impossible\n";
	else if (scalar.getChar() == 0)
		os<<"char: Non displayable\n";
	else
		os<<"char: \'"<<scalar.getChar()<<"\'"<<"\n";
	if (isnan(scalar.getFloat()) || isinf(scalar.getFloat()))
		os<<"int: impossible\n";
	else
		os<<"int: "<<scalar.getInt()<<"\n";
	os.setf(std::ios::fixed);
	os.precision(1);
	os<<"float: "<<scalar.getFloat()<<"f"<<"\n";
	os<<"double "<<scalar.getDouble();
	os<<std::endl;
	return os;
}