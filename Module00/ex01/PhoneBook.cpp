#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Account.h"

PhoneBook::PhoneBook()
{
	initPhoneBook();
}

void PhoneBook::addCommand(std::string &str, int i)
{
	system("clear");
	if (i < 8)
	{
		std::cout << "Lets create new account" << std::endl;
		setAccount(str, i);
	}
	else
		std::cout << "*** DATA IS FULL ***" << std::endl;
}

void PhoneBook::searchCommand()
{
	system("clear");
	getAccountNameShort();
	if (isIndex())
	{
		std::cout << "What Account do you need ? (number)" << std::endl;
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cout << "Wrong input , Try once more ..." << std::endl;
		}
		else if  (x > 0 && x <= 8)
			getAccount(x);
		else
			std::cout << "Wrong input , Try once more ..." << std::endl;
		std::cin.ignore(32767, '\n');
	}
	else
		std::cout << "No accounts yet, Create an account ..."
		<< std::endl;
}

void PhoneBook::setAccount(std::string &str, int i)
{
	if ( i >= 0 && i < 8)
	{
		account *accountPtr;
		accountPtr = new account(str);
		index[i] = accountPtr;
	}
	else
		std::cout << "More than 8 Account" << std::endl;
}

void PhoneBook::getAccountNameShort()
{
	for (int i = 0; i < 8 ; i++)
	{
		if (index[i] != nullptr)
			std::cout << "#" << std::setw(10) << std::right << i + 1 << " | "
			<< std::setw (10) << std::right << index[i]->getAnswerShort(0) << " | "
			<< std::setw (10) << std::right << index[i]->getAnswerShort(1) << " | "
			<< std::setw (10) << std::right << index[i]->getAnswerShort(2) << " | "
			<< std::setw (10) << std::right << index[i]->getAnswerShort(3) << " | "
			<<std::endl;
	}
}

void PhoneBook::getAccount(int i)
{
		if (index[i - 1] != nullptr)
		{
			std::cout << "ACCOUNT #" << std::setw(10) << std::right << i  <<
			std::endl;
			for (int j = 0; j < 10; j++)
				std::cout << std::right << index[i - 1]->getAnswer(j) <<
				std::endl;
		}
		else
			std::cout << "This account does not exist..." << std::endl;
}

void PhoneBook::displayName()
{
	std::cout << "Hi it's you PhoneBook !" << std::endl;
	std::cout << "░░░░░▄▄▀██▀▀▀▄▄" << std::endl;
	std::cout << "░░▄██░░▄░░▀░▀░░▀▄" << std::endl;
	std::cout << "░█▀░░▀░░░░░░░░░░█" << std::endl;
	std::cout << "█▀░░░░▄▄▄░░░░░░░█" << std::endl;
	std::cout << "█▀░▄█████▄░░░░░▄▀░▄▄▄░░░░░░░░░░░░▄▄▀▀▀▀▄" << std::endl;
	std::cout << "▀▄░▀█▀▀▄▄░█▄▄█▀▀██▄▄▄▀░░░░░░░░▄▀▀░░▄▄██▀" << std::endl;
	std::cout << "░░▀▄██▄▀██▀░░░▄███▀▀░░░░░░░▄▀▀░░▄▄█▀▀▀" << std::endl;
	std::cout << "░░░░░██▀░░▄▄█▀█▄░█░░░░░▄▄▄▀░░▄█▀" << std::endl;
	std::cout << "░░░▄▀░░░▄▀▀███████████████▀▀▀" << std::endl;
	std::cout << "░░░█░████░░░░░██████████▀" << std::endl;
	std::cout << "░░░█▄█████░░░░░█████▀▀" << std::endl;
	std::cout << "░░░▀███████▄▄▄██████" << std::endl;
	std::cout << "░░░░░▀░█████████████" << std::endl;
	std::cout << "░░░░░░▄█████████████▄" << std::endl;
	std::cout << "░░░░░░██▀▀▀▀▀▀▀▀▀▀▀██" << std::endl;
	std::cout << "░░░░░░█░░░░░░░░░░░░░█" << std::endl;


}

void PhoneBook::initPhoneBook()
{
	displayName();
	initAccount();
}

int PhoneBook::isIndex()
{
	return ((index[0] != nullptr) ? 1 : 0);
}

void PhoneBook::initAccount()
{
	for (int i = 0; i < 8; i++)
		this->index[i] = nullptr;
}

PhoneBook::~PhoneBook()
{
	std::cout << "**************BYE*****************" << std::endl;
	std::cout << "⠄⠄⠄⠄⠄⠄⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀⠄⠄⠄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⠄⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠄⠄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⢸⣿⣿⣿⣿⣿⣿⡿⠛⠃⢈⣁⡀⠈⠄⠄⠄⣙⡉⠙⠿⣿⡄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⢻⣿⣿⣿⣿⠟⠉⠄⠈⠠⠄⠄⠄⠄⠄⠄⢠⠄⢀⡁⠄⣿⠃⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⢸⣿⣿⣿⠃⠄⠄⠠⠂⢖⣶⣶⡢⠄⠄⠄⠄⣤⣤⣤⠁⡎⠄⠄⡀⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⠘⣿⣿⠃⠄⢀⠄⠄⠄⠐⠒⠾⠋⠄⠄⠄⠄⠙⠿⠣⠄⢱⠄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⠄⠈⠻⠄⠄⢸⠄⠄⠄⠄⠄⠄⢀⡀⠄⠄⠈⢢⠄⠄⢀⢸⠄⠄⠁⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⠄⠄⠄⡇⠄⠄⢆⠄⠁⠄⠄⠠⠘⠤⠐⠄⠠⢆⠄⠄⢠⠃⢠⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⠄⠄⠄⠄⠄⡇⠄⠄⡎⠳⣄⠄⠄⠁⠤⠤⠄⠄⢀⣄⠄⢰⠁⠄⠄⠄⠄⠄" << std::endl;
	std::cout << "⠄⠄⣠⣴⣶⣿⣿⠁⠄⠄⠁⠄⠈⠑⢄⠄⠄⠄⠄⠄⠄⠈⡠⠋⢀⠄⠄⠄⠄⠄" << std::endl;
	std::cout << "⣠⣾⣿⣿⣿⣿⠃⠄⠄⠤⠄⠄⠄⠄⠄⠑⠒⠤⠤⣤⣴⣾⣷⣤⡀⠄⠄⠄⠄⠄" << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣾⣄⠄⠄⠄⠄⠄⠄⠈⠂⠄⣙⣿⣿⣿⣿⣿⣦⣄⣀⡀⠄" << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⣷⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄⠄" << std::endl;

}