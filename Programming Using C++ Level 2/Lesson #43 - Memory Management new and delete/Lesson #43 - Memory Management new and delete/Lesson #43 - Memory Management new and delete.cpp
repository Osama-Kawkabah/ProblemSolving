#include <iostream>
using namespace std;

int main()
{

	int* PtrX;
	float* PtrY;

	PtrX = new int;
	PtrY = new float;


	*PtrX = 40;
	*PtrY = 60.32f;


	cout << "*PtrX : " << *PtrX << endl;
	cout << "*PtrY : " << *PtrY << endl;
	

	delete PtrX;
	delete PtrY;
	return 0;
}