#include "ConsoleUi.h"







void ConsoleUi::Screen_3_sign_up()
{
	do
	{
		cls;
		end_line;
		print_tab_ln("����� ������� ������ �� ������ �������?");
		print_tab_ln("1 - ����������");
		print_tab_ln("2 - �������" << end);
		print_tab("�������: ");
		char switch_on;
		cin >> switch_on;
		switch (switch_on)
		{
		case '1':
		{
			do
			{
				cls;
				end_line;
				print_tab("������� ���� ���: ");
				print_tab("������� ���� �������: ");
				print_tab("���������� �����: ");
				print_tab("���������� ������: ");
				
			} while (true);
		}break;
		case '2':
		{
			
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
