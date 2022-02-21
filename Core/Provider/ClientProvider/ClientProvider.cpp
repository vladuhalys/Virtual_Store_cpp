#include "ClientProvider.h"

//Constructor
ClientProvider::ClientProvider(vector<Client*> clients)
{
	this->clients = clients;
}


//private Function
string ClientProvider::CreatePersonalInfo(string text, InfoType info)
{
	string value;
	do
	{
		cls;
		end_line;
		print_tab(text);
		cin >> value;
		if (info == InfoType::personalInfo)
		{
			if (Validation::ValidatePersonalInfo(value) == false)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("������ �����! ��������� ����� �� ������ ��������� �����.");
				ColorDialog::reset();
				pause;
			}
			else
			{
				break;
			}
		}
		else
		{
			if (Validation::ValidatePassword(value) == false)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("������ �����! ����� ������ �� ������ ���� ������ 6 ��������.");
				ColorDialog::reset();
				pause;
			}
			else
			{
				break;
			}
		}


	} while (true);
	return value;
}

string ClientProvider::CheckInputLogin(string text)
{
	string value;
	bool flag;
	do
	{
		flag = false;
		cls;
		end_line;
		print_tab(text);
		cin >> value;
		for (auto obj : clients)
		{
			if (obj->getLogin() == value)
			{
				cls;
				ColorDialog::error();
				print_tab_ln("��������� login �����! ������� ������...");
				ColorDialog::reset();
				pause;
				flag = true;
				break;
			}
		}
	} while (flag);
	return value;
}

bool ClientProvider::InputStatus()
{
	bool value;
	int switch_on;
	bool flag;
	do
	{
		flag = false;
		cls;
		end_line;
		print_tab_ln("�� ���� �����?");
		print_tab(tab << "������� [�� - 1 / ��� - 0]> ");
		cin >> switch_on;
		switch (switch_on)
		{
		case 0:
		{
			value = false;
		}break;
		case 1:
		{
			value = true;
		}break;
		default:
		{
			cls;
			ColorDialog::error();
			print_tab_ln("������ �����! �������� ����.");
			ColorDialog::reset();
			pause;
			flag = true;
		}break;
		}
	} while (flag);
	return value;
}

//CRAD override
void ClientProvider::Create()
{
	string firstName = CreatePersonalInfo("������� ���� ���: ", InfoType::personalInfo);
	string lastName = CreatePersonalInfo("������� ���� �������: ", InfoType::personalInfo);
	string login = CheckInputLogin("������� ��� login: ");
	string password = CreatePersonalInfo("���������� ������: ", InfoType::password);
	bool vip = InputStatus();
	clients.push_back(new Client(login, password, firstName, lastName, vip));
	cls;
	ColorDialog::success();
	print_tab_ln("������� ������ �������! ��������� ����...");
	ColorDialog::reset();
	pause;
}




//Destructor
ClientProvider::~ClientProvider()
{
	if (clients.size() == 0)
	{
		for (size_t i = 0; i < clients.size(); i++)
		{
			delete[] clients[i];
		}
		clients.clear();
	}
}

