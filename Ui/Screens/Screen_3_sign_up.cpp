#include "ConsoleUi.h"

void ConsoleUi::Screen_3_sign_up()
{
	do
	{
		cls;
		end_line;
		print_tab_ln("Какую учетную запись Вы хотите создать?");
		print_tab_ln("1 - Сотрудника");
		print_tab_ln("2 - Клиента" << ends);
		print_tab("Введите: ");
		char switch_on;
		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
		{
			employeeProvider.Create();
			employeeProvider.ShowAllEmployees();
			Screen_1_login();
		}break;
		case '2':
		{
			
		}break;
		default:
		{
			cls;
			ColorDialog::error();
			print_tab_ln("Ошибка ввода! Неверный символ ввода.");
			ColorDialog::reset();
			pause;
		}break;
		}
	} while (true);
}
