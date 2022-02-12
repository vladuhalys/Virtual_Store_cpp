#include "../Id/Id.h"


#ifndef _account_h
#define _account_h

class Account
{
protected:
	uint32_t id {0};
	string login;
	string password;
	string first_name;
	string last_name;

	void setId()
	{
		if (!id)
		{
			id = Id::getId();
		}
	}
public:
	Account();
	Account(string login, string password, string first_name, string last_name);

	//Setter
	void setLogin(string login);
	void setPassword(string password);
	void setFirstName(string first_name);
	void setLastName(string last_name);

	//Getter
	uint32_t getAccountId();
	string getLogin();
	string getPassword();
	string getFirstName();
	string getLastName();
	Account getCurrentInstance();
};

#endif
