#include <iostream>
using namespace std;
#include"Factory.h"
#include"Operation.h"

//程序的入口
int main()
{
	int a, b;
	char op;
	cin >> a;
	cin >> op;
	cin >> b;
	CFactory *factory = new CFactory();
	COperation* operation = factory->init(op);
	operation->num1 = a;
	operation->num2 = b;
	cout << a << op << b << "=" << operation->operation() << endl;


	
	
}