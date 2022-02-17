#include "Employee.h"

//Setter
void Employee::setRank(string rank)
{
	this->rank = rank;
}

//Getter
string Employee::getRank()
{
	return this->rank;
}

std::ostream& operator << (std::ostream& os, const Employee& obj)
{
	return os << obj.id  << tab << obj.first_name << tab << obj.last_name 
		<< tab << obj.rank << tab << obj.login << tab << obj.password;
}
