#ifndef MODULE06_SCALAR_HPP
#define MODULE06_SCALAR_HPP

#include <iostream>
#include <cmath>

class Scalar
{
private:
	std::string	_tmp;
	char	_char;
	int		_int;
	float 	_float;
	double 	_double;
	Scalar();
public:
	Scalar(char* &str);
	Scalar(Scalar const &scalar);
	Scalar &operator=(Scalar const &scalar);
	~Scalar();

	void castChar(char* &str);
	void castInt(char* &str);
	void castFloat(char* &str);
	void castDouble(char* &str);

	char getChar() const;
	int getInt() const;
	float getFloat() const;
	double getDouble() const;
};

std::ostream &operator<<(std::ostream &os, Scalar const &scalar);

#endif //MODULE06_SCALAR_HPP
