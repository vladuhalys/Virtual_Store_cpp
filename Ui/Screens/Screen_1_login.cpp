#include "ConsoleUi.h"

void ConsoleUi::Screen_1_login()
{
	do
	{
		cls;
		end_line;
		print_tab_ln("1 - Создайте новую учетную запись");
		print_tab_ln("2 - Войдите в существующую учетную запись");
		print_tab_ln("3 - Выход" << end);
		print_tab("Введите: ");
		char switch_on;
		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
		{
			Screen_3_sign_up();
		}break;
		case '2':
		{
			Screen_2_sign_in();
		}break;
		case '3':
		{
			cls;
			end_line;
			print_tab_ln("Выход...");
			exit(0);
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
