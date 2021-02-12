#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include "easyfind.hpp"


int main()
{
	try {
		std::vector<int> vector(9, 1);
		vector[5] = 5;
		std::vector<int>::iterator it = easyfind(vector, 5);
		std::cout<<*it<<std::endl;

		std::vector<char> char_vec(9, 'A');
		char_vec[5] = 'B';
		std::vector<char>::iterator char_it = easyfind(char_vec, 'B');
		std::cout<<*char_it<<std::endl;

		std::list<int> in_list(9, 48);
		in_list.push_front(777);
		std::list<int>::iterator in_it = easyfind(in_list, 777);
		std::cout<<*in_it<<std::endl;

		std::list<char> char_list(9, 'A');
		char_list.push_back('B');
		std::list<char>::iterator char_list_it = easyfind(char_list, 'B');
		std::cout<<*char_list_it<<std::endl;
	}
	catch (std::string &e) {
		std::cout<<e<<std::endl;
	}
	return 0;
}
