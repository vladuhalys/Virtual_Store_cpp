#pragma once
#include "../../Core/Library.h"

enum Colors
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

#ifndef _color_dialog_h
#define _color_dialog_h

class ColorDialog
{
private:
	static HANDLE h; 
public:
	static void success(); //Функция семны цыета на зеленный (успех)
	static void error();  //Функция семны цыета на красный (ошибка)
	static void reset(); //Функция зброса цвета (белый)
};

#endif