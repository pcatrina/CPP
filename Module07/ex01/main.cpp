#include <iostream>
#include "iter.hpp"

int main( void ) {

	char str[6] = "12345";
	::iter(str, 5, &display);
	std::cout<<std::endl;
	int arr[5] = {1, 2, 3, 4, 5};
	::iter(arr, 5, &display);
	std::cout<<std::endl;
	std::string str_arr[5] = {
			"A","B","C","D","E"
	};
	::iter(str_arr, 5, &display);
	std::cout<<std::endl;
	return 0;
}