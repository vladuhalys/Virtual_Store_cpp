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
				print_tab_ln("������ �����! ��������� ����� �� ������ ��������� �����.");
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
				print_tab_ln("������ �����! ����� ������ �� ������ ���� ������ 6 ��������.");
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
				print_tab_ln("��������� login �����! ������� ������...");
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
	int switch_on;
	bool flag;
	do
	{
		flag = false;
		cls;
		end_line;
		print_tab_ln("�������� ��� ����: ");
		print_tab_ln(tab << "[1] : ������� ���������");
		print_tab_ln(tab << "[2] : ��������");
		print_tab_ln(tab << "[3] : ��������� ����������");
		print_tab(tab << "> ");
		cin >> switch_on;
		switch (switch_on)
		{
		case 1:
		{
			value = "������� ���������";
		}break;
		case 2:
		{
			value = "��������";
		}break;
		case 3:
		{
			value = "��������� ����������";
		}break;
		default:
		{
			cls;
			ColorDialog::error();
			print_tab_ln("������ �����! �������� ����.");
			ColorDialog::reset();
			pause;
			flag = true;
		}break;	
		}
	} while (flag);
	return value;
}

//CRAD override
void EmployeeProvider::Create()
{
	string firstName = CreatePersonalInfo("������� ���� ���: ", InfoType::personalInfo);
	string lastName = CreatePersonalInfo("������� ���� �������: ", InfoType::personalInfo);
	string login = CheckInputLogin("������� ��� login: ");
	string password = CreatePersonalInfo("���������� ������: ", InfoType::password);
	string rank = InputRank();
	employees.push_back(new Employee(login, password, firstName, lastName, rank));
	cls;
	ColorDialog::success();
	print_tab_ln("������� ������ �������! ��������� ����...");
	ColorDialog::reset();
	pause;
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
		print_tab_ln(*employees[i]);
	}
	pause;
}

//Destructor
EmployeeProvider::~EmployeeProvider()
{
	if (employees.size() == 0)
	{
		for (size_t i = 0; i < employees.size(); i++)
		{
			delete[] employees[i];
		}
		employees.clear();
	}
}

