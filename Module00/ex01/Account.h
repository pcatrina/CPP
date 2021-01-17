#ifndef MODULE00_ACCOUNT_H
#define MODULE00_ACCOUNT_H

#include <iostream>
#include <string>

class account
{
public:
	account		(std::string &str);
	void 		setAnswer(std::string &str, int i);
	std::string	getAnswer(int i);
	std::string getAnswerShort(int i);
	void		initAccount(std::string str);
	void		displaySuccess();
private:
	std::string	answer [10];
	std::string	questions[10];
};
#endif
