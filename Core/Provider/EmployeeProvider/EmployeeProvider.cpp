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

//CRAD override
void EmployeeProvider::Create()
{
	string firstName = CreatePersonalInfo("������� ���� ���: ", InfoType::personalInfo);
	string lastName = CreatePersonalInfo("������� ���� �������: ", InfoType::personalInfo);
	string login = CreatePersonalInfo("������� ���� ���: ", InfoType::personalInfo);
	string password = CreatePersonalInfo("���������� ������: ", InfoType::password);
	Employee emp(login, password, firstName, lastName, Rank::normal);
	employees.insert(emp);
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

