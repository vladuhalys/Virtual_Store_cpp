#include "../../Users/Employee/Employee.h"
#include "../../Models/CRAD/CRAD.h"
#include "../../Models/Validation/Validation.h"
#include "../../../Ui/ColorDialog/ColorDialog.h"

#ifndef _employee_provider_h
#define _employee_provider_h


enum InfoType {
	personalInfo,
	password
};

class EmployeeProvider : public CRAD
{
private:
	set<Employee> employees;
	set<Employee> ::iterator iter;

	//private Function
	string CreatePersonalInfo(string text, InfoType info);
public:
	//Constructor
	EmployeeProvider();
	EmployeeProvider(set<Employee> employees);

	//CRAD override
	void Create() override;
	void Remove() override;
	void Add() override;
	void Delete() override;

	//Destructor
	~EmployeeProvider();


};


#endif
