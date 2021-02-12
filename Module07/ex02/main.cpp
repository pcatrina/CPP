#include <iostream>
#include "Array.hpp"

int main( void ) {

	try {
		Array<int> *arr_1 = new Array<int>(10);
		Array<int> arr_2(*arr_1);
		std::cout<<arr_1->size()<<std::endl;
		delete arr_1;
		std::cout<<arr_2.size()<<std::endl;
		for (unsigned int i = 0; i < arr_2.size(); i++)
		{
			arr_2[i] = i;
			std::cout<<arr_2[i]<<std::endl;
		}
		arr_2[5] = 777;
		std::cout<<arr_2[5]<<std::endl;
	}
	catch (std::exception &e) {
		std::cerr<<e.what()<<std::endl;
	}
	return 0;
}