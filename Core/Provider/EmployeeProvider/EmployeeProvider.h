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
	vector<Employee> employees;

	//private Function
	string CreatePersonalInfo(string text, InfoType info);
	string CheckInputLogin(string text);
public:
	//Constructor
	EmployeeProvider(vector<Employee> employees);

	//CRAD override
	void Create() override;
	void Remove() override;
	void Add() override;
	void Delete() override;

	void ShowAllEmployees();


	//Destructor
	~EmployeeProvider();


};


#endif
