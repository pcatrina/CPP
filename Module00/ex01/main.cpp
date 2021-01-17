#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int		main()
{
	std::string str;
	int 		i;

	i = 0;
	PhoneBook myPhoneBook;
	while (true)
	{
		std::cout << "Give me command ...\n";
		if (!(std::getline(std::cin, str))) break;
		if (str == "ADD")
		{
			myPhoneBook.addCommand(str, i);
			i++;
		}
		else if (str == "SEARCH")
		{
			myPhoneBook.searchCommand();
		}
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "Wrong command ..." << std::endl;
	}
}