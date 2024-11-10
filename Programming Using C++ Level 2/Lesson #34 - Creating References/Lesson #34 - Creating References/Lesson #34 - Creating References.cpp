#include <iostream>
using namespace std;
int main()
{
	int a = 10;

	int& x = a;

	cout << &x << endl;
	cout << &a << endl;

	x = 40;
	a = 50;

	cout << a << endl;
	cout << x << endl;

	return 0;
}
