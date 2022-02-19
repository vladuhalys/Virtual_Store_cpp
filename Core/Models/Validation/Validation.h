#include "../../Library.h"

#ifndef _validation_h
#define _validation_h


class Validation
{
private:
	static bool IsDigit(char sign);
public:
	static bool ValidatePersonalInfo(string value);
	static bool ValidatePassword(string value);

};



#endif
