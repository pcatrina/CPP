#include "Replace.hpp"

//std::string Replace::getReplace()
//{
//	return ();
//}

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
		std::ifstream	fs ("in.txt");
//		fs.open("in.txt");
		if(!fs.is_open())
			throw "can't open file";
//		std::ofstream	of;
//		of.open(filename + ".replace",  std::ios::trunc);
//		if(!of.is_open())
//			throw "can't open out file";
		while (getline(fs, result))
		{
			std::cout << result << '\n';
//			of << result;
//			if (!fs.eof())
//				of << "\n";
		}
		fs.close();
//		of.close();
	}
}