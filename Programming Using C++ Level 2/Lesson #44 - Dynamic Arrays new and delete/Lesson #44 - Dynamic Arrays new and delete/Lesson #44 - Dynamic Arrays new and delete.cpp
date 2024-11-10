#include <iostream>
using namespace std;


int main()
{
	int Many_Student;
	cout << "Plseae Inter How Many Student Do You Want : ";
	cin >> Many_Student;

	float* Primter;

	Primter = new float[Many_Student];

	for (int i = 0; i < Many_Student; i++)
	{
		cout << "Plese Inter Mark The Student : " << i + 1 << endl;
		cin >> *(Primter + i);
	}

	for (int i = 0; i < Many_Student; i++)
	{
		cout << "Student : " << i + 1 << " The Mark Is : " << *Primter + i << endl;
	}


	delete Primter;
	return 0;
}
