#include "../../Models/Account/Account.h"

#ifndef _employee_h
#define _employee_h

enum class Rank {
	empty=0,
	low = 1,
	normal = 2,
	high = 2,
};

class Employee : public Account
{
protected:
	Rank rank;
public:
	Employee() : Account(), rank(Rank::empty)
	{}
	Employee(string login, string password, string first_name, string last_name, Rank rank) : Account(login, password, first_name, last_name), rank(rank)
	{}

	//Setter
	void setRank(Rank rank);

	//Getter
	Rank getRank();
};

#endif