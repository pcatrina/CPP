#include "Account.h"
#include <string>
#include <iostream>

account::account(std::string &str)
{
	initAccount(str);
}

void account::setAnswer(std::string &str, int i)
{
	answer[i] = str;
}

std::string account::getAnswerShort(int i)
{
	if (answer->length() > 10)
		return answer[i].substr(0, 9).append(".");
	else
		return answer[i];
}

std::string account::getAnswer(int i)
{
	return answer[i];
}

void account::displaySuccess()
{
	std::cout << "Account - " << getAnswer(0) << " is create!"
	<<std::endl;
}

void account::initAccount(std::string str)
{
	questions[0] = "Add a new contact name";
	questions[1] = "Add a Last Name";
	questions[2] = "Add a Nickname";
	questions[3] = "Add a Login";
	questions[4] = "Add a Postal Address";
	questions[5] = "Add a Phone Number";
	questions[6] = "Add a Birth Date";
	questions[7] = "Add a Favorite Meal";
	questions[8] = "Add a Underwear Color";
	questions[9] = "Add a Darkest Secret";
	for (int i = 0; i < 10; i++)
	{
		std::cout << questions[i] << std::endl;
		if (!(std::getline(std::cin, str))) break;
		setAnswer(str, i);
		system("clear");
	}
	displaySuccess();
}