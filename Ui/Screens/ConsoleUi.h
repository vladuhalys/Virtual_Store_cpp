#include "../ColorDialog/ColorDialog.h"
#include "../../Core/Provider/EmployeeProvider/EmployeeProvider.h"

#ifndef _screen_h
#define _screen_h
class ConsoleUi
{
public:
	EmployeeProvider employeeProvider;
	
	//>--------------------------<Screens>---------------------------------

	void Screen_1_login();    //Ёкран главного входа
	void Screen_2_sign_in(); //Ёкран входа в учетную запись
	void Screen_3_sign_up();//Ёкран регистрации в учетную запись
};
#endif
