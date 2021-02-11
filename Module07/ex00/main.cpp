#include <iostream>
#include <iostream>
#include "whatever.hpp"

class Awesome
{
public:
	Awesome(int n): _n(n){}
	bool operator==(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator!=(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator>(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator<(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator<=(Awesome const & rhs) const {return (this->_n == rhs._n);}
	bool operator>=(Awesome const & rhs) const {return (this->_n == rhs._n);}

	int getN() const
	{
		return _n;
	}

private:
	int _n;
};

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Awesome aw_a = 3;
	Awesome aw_b = 4;
	::swap(aw_a, aw_b);
	Awesome res_min = ::min(aw_a, aw_b);
	std::cout<<res_min.getN()<<std::endl;
	Awesome res_max = ::max(aw_a, aw_b);
	std::cout<<res_max.getN()<<std::endl;
	return 0;
}