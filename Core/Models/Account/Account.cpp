#include "Account.h"


Account::Account()
{
	setId();
}

Account::Account(string login, string password, string first_name, string last_name) : Account()
{
	setLogin(login);
	setPassword(password);
	setFirstName(first_name);
	setLastName(last_name);
}

//Setter
void Account::setLogin(string login)
{
	this->login = login;
}
void Account::setPassword(string password)
{
	this->password = password;
}
void Account::setFirstName(string first_name)
{
	this->first_name = first_name;
}
void Account::setLastName(string last_name)
{
	this->last_name = last_name;
}

//Getter
uint32_t Account::getAccountId()
{
	return this->id;
}
string Account::getLogin()
{
	return this->login;
}
string Account::getPassword()
{
	return this->password;
}
string Account::getFirstName()
{
	return this->first_name;
}
string Account::getLastName()
{
	return this->last_name;
}
Account Account::getCurrentInstance()
{
	return *this;
}