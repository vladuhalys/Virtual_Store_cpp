#include "../../Models/Account/Account.h"

#ifndef _employee_h
#define _employee_h

class Employee : public Account
{
protected:
	string rank;
public:
	Employee() : Account()
	{}
	Employee(string login, string password, string first_name, string last_name, string rank) : Account(login, password, first_name, last_name), rank(rank)
	{}

	//Setter
	void setRank(string rank);

	//Getter
	string getRank();

	friend std::ostream& operator << (std::ostream& os, const Employee& obj);
};

#endif