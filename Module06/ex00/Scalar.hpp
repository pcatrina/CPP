#ifndef MODULE06_SCALAR_HPP
#define MODULE06_SCALAR_HPP

#include <iostream>
#include <cmath>
#include <iomanip>

class Scalar
{
private:
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

	void convert(char* &str);
	void castChar(const char* &_tmp);
	void castInt(const char* &_tmp);
	void castFloat(const char* &_tmp);
	void castDouble(void);

	char getChar() const;
	int getInt() const;
	float getFloat() const;
	double getDouble() const;
};

std::ostream &operator<<(std::ostream &os, Scalar const &scalar);

#endif //MODULE06_SCALAR_HPP
