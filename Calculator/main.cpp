#include <iostream>
using namespace std;
#include"Factory.h"
#include"Operation.h"

//��������
int main()
{
	int a, b;
	char op;
	cout << "��������������" << endl;
	cin >> a;
	cin >> op;
	cin >> b;
	CFactory *factory = new CFactory();
	COperation* operation = factory->init(op);
	operation->num1 = a;
	operation->num2 = b;
	cout << a << op << b << "=" << operation->operation() << endl;


	
	
}