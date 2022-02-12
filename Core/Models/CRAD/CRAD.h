#include "../../Library.h"

#ifndef _crad_h
#define _crad_h

class CRAD
{
public:
	virtual void Create() = 0;
	virtual void Remove() = 0;
	virtual void Add() = 0;
	virtual void Delete() = 0;
};

#endif
