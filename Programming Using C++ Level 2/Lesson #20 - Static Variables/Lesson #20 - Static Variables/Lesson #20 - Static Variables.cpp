#include<iostream>
using namespace std;
void MyFunc() {
	static int Number = 1;
	cout << "Value of Number: " << Number << "\n";
	Number++;
}



int main() {
	MyFunc();
	MyFunc();
	MyFunc();


	auto x = "Osama";
	auto x1 = 12;
	auto x2 = 12.3;




	//  áÇ íÝÖá ÇÓÊÎÏÇãåÇ
	cout << x << endl;
	cout << x1 << endl;
	cout << x2 << endl;

	return 0;
}