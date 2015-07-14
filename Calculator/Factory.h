#pragma once
#include "Operation.h"
class CFactory
{
public:
	CFactory();
	~CFactory();
	COperation op;
    COperation*  init(char ch);
	
};

