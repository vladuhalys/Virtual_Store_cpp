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

//CRAD override
void EmployeeProvider::Create()
{

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

