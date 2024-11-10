#include <iostream>
#include <iostream>
using  namespace std;



//Call By Value
int Numbers1(int x) {

	return x++;
	
}

//Call By References

int Numbers2(int &x) {

	return x++;

}

int main() {

	int x = 10;
	int v = 30;

	Numbers1(x);
	Numbers2(x);
	cout << x << endl;

	cout << &x << endl;
	cout << &v << endl;



	return 0;
}