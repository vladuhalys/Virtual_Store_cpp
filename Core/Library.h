#pragma once

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;


#define RusLang {SetConsoleCP(1251); SetConsoleOutputCP(1251);}
#define tab '\t'
#define ends '\n'
#define end_line cout << endl

#define cls system("cls")
#define pause _getch()


#define print(value) cout << value
#define print_tab(value) cout <<'\t' << value
#define println(value) cout << value << endl
#define print_tab_ln(value) cout<<'\t' << value << endl



