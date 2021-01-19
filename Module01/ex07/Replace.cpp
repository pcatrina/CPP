#include "Replace.hpp"

std::string Replace::getReplace(std::string &result,std::string &str1,
								std::string &str2)
{
	if (str1 == str2)
		return (result);
	else
	{
		int i = 0;
		while (i != -1)
		{
			i = result.find(str1);
			if (i > 0)
			{
				result.erase(i, str1.length());
				result.insert(i, str2);
				i = 0;
			}
		}
		return (result);
	}
}

void Replace::setReplace(char const *filename_in, char const *str1_in,
						 const char *str2_in)
{
	this->filename = filename_in;
	this->str1 = str1_in;
	this->str2 = str2_in;
	if (filename.length() == 0)
		throw "filename is empty";
	else if (str1.length() == 0)
		throw "First argument is empty";
	else if (str2.length() == 0)
		throw "Second argument is empty";
	else
	{
		std::string		result;
		std::ifstream	fs (filename);
		if(!fs.is_open())
			throw "can't open file";
		std::ofstream	of;
		of.open(filename + ".replace",  std::ios::trunc);
		if(!of.is_open())
			throw "can't open out file";
		while (getline(fs, result))
		{
			of << getReplace(result, str1, str2);
			if (!fs.eof())
				of << "\n";
		}
		of << std::endl;
		fs.close();
		of.close();
	}
}