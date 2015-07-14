#pragma once
class COperation
{
public:
	COperation();
	~COperation();
	int num1; //第一个运算数
	int num2; //第二个运算数
	virtual int operation();
};

