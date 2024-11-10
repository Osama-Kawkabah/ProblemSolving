#include <iostream>
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

void ReadArray(int Array_Loop[100], int& ArrayLenght) {

	for (int i = 0; i < ArrayLenght; i++)
	{
		Array_Loop[i] = RandomNumber(ArrayLenght, 100);
	}
}

void PrintArray(int Array_Loop[100], int ArrayLenght) {
	for (int i = 0; i < ArrayLenght; i++)
	{
		cout << Array_Loop[i] << " ";
	}
	cout << "\n";
}

void Copy_Array(int Array_Loop[100], int Array_Loop2[100], int ArrayLenght) {

	for (int i = 0; i < ArrayLenght; i++)
	{
		Array_Loop2[i] = Array_Loop[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Array_Loop[100], ArrayLenght;

	//ArrayLenght
	ArrayLenght = Read_A_Positive_Number("Please Inter Positive Number : ");

	//Random_Array
	ReadArray(Array_Loop, ArrayLenght);
	

	//Copy_Array
	int Array_Loop2[100];
	Copy_Array(Array_Loop,Array_Loop2, ArrayLenght);
	
	//Print Array 1
	cout << "Array 1 Elements :\n";
	PrintArray(Array_Loop, ArrayLenght);

	//Print Array 2
	cout << "\nArray 2 After Element Cpoy : \n";
	PrintArray( Array_Loop2, ArrayLenght);

	return 0;
}
