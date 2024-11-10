#include <iostream>
using namespace std;


void swapNumber(int* A, int* B) {

	/*int Temp;

	Temp = A;
	A = B;
	B = Temp;*/


	int Temp = *A;
	*A = *B;
	*B = Temp;
};


int main()
{


	int A = 10;
	int B = 20;

	cout << "A : " << A << endl;
	cout << "B : " << B << endl;
	cout  << endl;


	swapNumber(&A, &B);

	cout <<"After swap Number" << endl;
	cout << "A : " << A << endl;
	cout << "B : " << B << endl;
	return 0;
}
