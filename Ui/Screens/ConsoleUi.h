#include "../ColorDialog/ColorDialog.h"
#include "../../Core/Provider/EmployeeProvider/EmployeeProvider.h"

#ifndef _screen_h
#define _screen_h
class ConsoleUi
{
public:
	EmployeeProvider employeeProvider;
	
	//>--------------------------<Screens>---------------------------------

	void Screen_1_login();    //����� �������� �����
	void Screen_2_sign_in(); //����� ����� � ������� ������
	void Screen_3_sign_up();//����� ����������� � ������� ������
};
#endif
