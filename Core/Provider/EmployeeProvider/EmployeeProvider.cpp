#include "EmployeeProvider.h"

//Constructor
EmployeeProvider::EmployeeProvider(vector<Employee> employees) : EmployeeProvider()
{
	this->employees = employees;
}



//private Function
string EmployeeProvider::CreatePersonalInfo(string text, InfoType info)
{
	string value;
	do
	{
		cls;
		end_line;
		print_tab(text);
		cin >> value;
		if (info == InfoType::personalInfo)
		{
			if (Validation::ValidatePersonalInfo(value) == false)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("Ошибка ввода! Введенный текст не должен содержать цифер.");
				ColorDialog::reset();
				pause;
			}
			else
			{
				break;
			}
		}
		else
		{
			if (Validation::ValidatePassword(value) == false)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("Ошибка ввода! Длина пароля не должна быть меньше 6 символов.");
				ColorDialog::reset();
				pause;
			}
			else
			{
				break;
			}
		}
		
		
	} while (true);
	return value;
}

string EmployeeProvider::CheckInputLogin(string text)
{
	string value;
	bool flag;
	do
	{
		flag = false;
		cls;
		end_line;
		print_tab(text);
		cin >> value;
		for (Employee obj: employees)
		{
			if (obj.getLogin() == value)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("Введенный login занят! Введите другой...");
				ColorDialog::reset();
				pause;
				flag = true;
				break;
			}
		}
	} while (flag);
	return value;
}



//CRAD override
void EmployeeProvider::Create()
{
	string firstName = CreatePersonalInfo("Введите ваше Имя: ", InfoType::personalInfo);
	string lastName = CreatePersonalInfo("Введите ваше Фамилию: ", InfoType::personalInfo);
	string login = CheckInputLogin("Введите ваш login: ");
	string password = CreatePersonalInfo("Придумайте пароль: ", InfoType::password);
	Employee emp(login, password, firstName, lastName, Rank::normal);
	employees.push_back(emp);
}
void EmployeeProvider::Remove()
{

}
void EmployeeProvider::Add()
{

}
void EmployeeProvider::Delete()
{

}



//Destructor
EmployeeProvider::~EmployeeProvider()
{
	if (employees.size() == 0)
	{
		this->employees.clear();
	}
}

