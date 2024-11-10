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

void Sum_Array(int Array_Loop[100], int Array_Loop2[100], int Array_Loop3[100], int ArrayLenght) {
	for (int i = 0; i < ArrayLenght; i++)
	{
		
		Array_Loop3[i] = Array_Loop[i] + Array_Loop2[i];
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int Array_Loop[100], ArrayLenght;

	//ArrayLenght
	ArrayLenght = Read_A_Positive_Number("Please Inter Positive Number : ");

	//Random_Array 1
	ReadArray(Array_Loop, ArrayLenght);


	//Random_Array 2
	int Array_Loop2[100];
	ReadArray(Array_Loop2, ArrayLenght);


	//Sum_Arrays =Random_Array 1 +Random_Array 2
	int Array_Loop3[100];
	Sum_Array(Array_Loop, Array_Loop2, Array_Loop3, ArrayLenght);

	//Print Array 1
	cout << "Array 1 Elements :\n";
	PrintArray(Array_Loop, ArrayLenght);

	//Print Array 2
	cout << "\nArray 2 After Element Cpoy : \n";
	PrintArray(Array_Loop2, ArrayLenght);

	//Print Sum Array
	cout << "\nSum Os Array1 And Array2 Element : \n";
	PrintArray(Array_Loop3, ArrayLenght);

	return 0;
}
