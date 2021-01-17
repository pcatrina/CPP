#include <iostream>
#include <string>

int main()
{
	std::string str = std::string("HI THIS IS BRAIN");
	std::string *pnt_str = &str;
	std::string &ref_str = str;

	std::cout << *pnt_str << " - This is pointer" <<std::endl;
	std::cout << ref_str << " - This is reference" <<std::endl;
}