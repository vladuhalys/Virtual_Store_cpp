#include "Validation.h"

bool Validation::ValidatePersonalInfo(string value)
{
	try
	{
		for (char symbol : value)
		{
			if (isdigit(symbol))
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

