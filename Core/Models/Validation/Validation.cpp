#include "Validation.h"

bool Validation::IsDigit(char sign)
{
	string digits = "0123456789";
	for (size_t i = 0; i < digits.size(); i++)
	{
		if (digits[i] == sign)
		{
			return true;
		}
	}
	return false;
}

bool Validation::ValidatePersonalInfo(string value)
{
	
	try
	{
		for (char symbol : value)
		{
			if (IsDigit(symbol))
			{
				throw (symbol);
			}
		}
		return true;
	}
	catch (char symbol)
	{
		return false;
	}
}

bool Validation::ValidatePassword(string password)
{
	try
	{
		USHORT size = password.size();
		if (size < 6)
		{
			throw (size);
		}
		return true;
	}
	catch (USHORT size)
	{
		return false;
	}
}

