#include <iostream>
#include <cmath>
using namespace std;

float Read_Number(string Text) {
	int Number;
	cout << Text << endl;
	cin >> Number;
	return Number;
};

float MyABC(int Number) {

	if (Number < 0)
		Number *= -1;

	return Number;
};

int main() {

	float Number = Read_Number("Plesea Inter Number : ");
	cout << "mY abc Result : " << MyABC(Number) << endl;
	cout <<"C++ Result  : " << abs(Number) << endl;

	return 0;
}