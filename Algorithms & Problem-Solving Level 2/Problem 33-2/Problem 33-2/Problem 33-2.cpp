#include <iostream>
#include <cstdlib>
using namespace std;

int Read_A_Positive_Number(string Text) {
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
};

int RandomNumber(int From, int To) {
	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}

void ReadArray(string Array_Loop[100]) {
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			 Array_Loop[k]= char(RandomNumber(65, 90));
			 cout << Array_Loop[k];
		}
		if (i != 3)
		{
			cout << "-";
		}
	}
	cout << endl;
}

void All_Array(string Array_Tow[100], int ArrayLenght) {
	for (int i = 0; i < ArrayLenght; i++) {
		cout << "Array [" << i << "] ";
		ReadArray(Array_Tow);
	}
}


int main() {

	string Array_Tow[100];
	string Array_Three[100];

	int ArrayLenght = Read_A_Positive_Number("Please Inter Length Array");

	All_Array(Array_Tow, ArrayLenght);

	return 0;
}
