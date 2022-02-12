#include "ConsoleUi.h"

void ConsoleUi::Screen_1_login()
{
	do
	{
		cls;
		end_line;
		print_tab_ln("1 - �������� ����� ������� ������");
		print_tab_ln("2 - ������� � ������������ ������� ������");
		print_tab_ln("3 - �����" << end);
		print_tab("�������: ");
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
			print_tab_ln("�����...");
			exit(0);
		}break;
		default:
		{
			cls;
			ColorDialog::error();
			print_tab_ln("������ �����! �������� ������ �����.");
			ColorDialog::reset();
			pause;
		}break;
		}
	} while (true);
}
