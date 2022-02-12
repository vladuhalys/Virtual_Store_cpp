#include "../ColorDialog/ColorDialog.h"

#ifndef _screen_h
#define _screen_h
class ConsoleUi
{
public:
	//>--------------------------<Basic Foo>---------------------------------

	/*static void LoadingProcess(char sign, USHORT length)
	{
		string line;
		for (size_t i = 0; i < length; i++)
		{

		}
	}*/

	//>--------------------------<Screens>---------------------------------

	static void Screen_1_login();    //Ёкран главного входа
	static void Screen_2_sign_in(); //Ёкран входа в учетную запись
	static void Screen_3_sign_up();//Ёкран регистрации в учетную запись
};
#endif
