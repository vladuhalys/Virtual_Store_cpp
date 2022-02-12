#include "../../Models/Account/Account.h"

#ifndef _client_h
#define _client_h

class Client : public Account
{
protected:
	bool vip;
public:
	Client() : Account(), vip(false)
	{}
	Client(string login, string password, string first_name, string last_name, bool vip) : Account(login,password,first_name,last_name), vip(vip)
	{}

	//Setter
	void setVip(bool vip);

	//Getter
	bool getVip();
};

#endif