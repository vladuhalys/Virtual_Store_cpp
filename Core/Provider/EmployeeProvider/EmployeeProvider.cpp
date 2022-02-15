#include "EmployeeProvider.h"

//Constructor
EmployeeProvider::EmployeeProvider()
{
	this->iter = employees.begin();
}
EmployeeProvider::EmployeeProvider(set<Employee> employees) : EmployeeProvider()
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

//CRAD override
void EmployeeProvider::Create()
{
	string firstName = CreatePersonalInfo("Введите ваше Имя: ");
	string secondName = CreatePersonalInfo("Введите ваше Фамилию: ");
	string login = CreatePersonalInfo("Введите ваше Имя: ");
	string password = CreatePassword("Придумайте пароль: ");
	print_tab("Введите ваше Имя: ");
	print_tab("Введите ваше Фамилию: ");
	print_tab("Придумайте логин: ");
	print_tab("Придумайте пароль: ");
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

