#include "Factory.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"

CFactory::CFactory()
{
}


CFactory::~CFactory()
{
}


COperation* CFactory::init(char ch)
{
	COperation* op = new COperation();
	switch (ch)
	{
	case '+':
			op = new CAdd();
			break;
	case '-':
		op = new CSub();
		break;
	case '*':
		op = new CMul();
		break;
	case '/':
		op = new CDiv();
		break;
	
	}
	return 0;
	

}
