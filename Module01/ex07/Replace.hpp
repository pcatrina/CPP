#ifndef MODULE01_REPLACE_HPP
#define MODULE01_REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

class Replace
{
public:
	void setReplace(const char *filename_in, const char *str1_in, const char
	*str2_in);
	std::string getReplace(std::string &result, std::string &str1, std::string
	&str2);

private:
	std::string filename;
	std::string str1;
	std::string str2;
};

#endif
