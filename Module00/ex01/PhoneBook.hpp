#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Account.h"

class PhoneBook
{
public:
	PhoneBook ();
	void		addCommand(std::string &str, int i);
	void		searchCommand();
	int			isIndex();
	void		setAccount(std::string &str, int i);
	void		getAccountNameShort();
	void 		getAccount(int i);
	void		displayName();
	void 		initPhoneBook();
	void 		initAccount();
	~PhoneBook();
private:
	account*	index[8];
	int			x;
};
# endif
