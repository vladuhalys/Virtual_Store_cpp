#include "EmployeeProvider.h"

//Constructor
EmployeeProvider::EmployeeProvider(vector<Employee*> employees)
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
		for (auto obj: employees)
		{
			if (obj->getLogin() == value)
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

string EmployeeProvider::InputRank()
{
	string value;
	char switch_on;
	bool flag;
	do
	{
		cls;
		end_line;
		print_tab("Выберите ваш ранг: ");
		print_tab(tab << "[1] : Обычный сотрудник");
		print_tab(tab << "[2] : Менеджер");
		print_tab(tab << "[3] : Сотрудник управления");
		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
		{
			value = "Обычный сотрудник";
			break;
		}break;
		case '2':
		{
			value = "Менеджер";
			break;
		}break;
		case '3':
		{
			value = "Сотрудник управления";
			break;
		}break;
		default:
		{
			cls;
			ColorDialog::error();
			print_tab_ln("Ошибка ввода! Неверный ввод.");
			ColorDialog::reset();
			pause;
		}break;	
		}
	} while (true);
	return value;
}

//CRAD override
void EmployeeProvider::Create()
{
	string firstName = CreatePersonalInfo("Введите ваше Имя: ", InfoType::personalInfo);
	string lastName = CreatePersonalInfo("Введите ваше Фамилию: ", InfoType::personalInfo);
	string login = CheckInputLogin("Введите ваш login: ");
	string password = CreatePersonalInfo("Придумайте пароль: ", InfoType::password);
	string rank = InputRank();
	employees.push_back(new Employee(login, password, firstName, lastName, rank));
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

void EmployeeProvider::ShowAllEmployees()
{
	cls;
	end_line;
	for (size_t i = 0; i < employees.size(); i++)
	{
		print_tab_ln(employees[i]);
	}
	pause;
}

//Destructor
EmployeeProvider::~EmployeeProvider()
{
	if (employees.size() == 0)
	{
		this->employees.clear();
	}
}

