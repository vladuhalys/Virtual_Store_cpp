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
string EmployeeProvider::CreatePersonalInfo(string text)
{
	string value;
	do
	{
		cls;
		end_line;
		print_tab(text);
		cin >> value;
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
		
	} while (true);
	return value;
}


//CRAD override
void EmployeeProvider::Create()
{

	
	print_tab("������� ���� ���: ");
	print_tab("������� ���� �������: ");
	print_tab("���������� �����: ");
	print_tab("���������� ������: ");
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

