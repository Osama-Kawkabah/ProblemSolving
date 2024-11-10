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

int Check_Max_Number(int Array_Loop[100], int ArrayLenght) {
	int Max_Number = 0;
	for (int i = 0; i < ArrayLenght; i++)
	{
		if (Array_Loop[i] > Max_Number) {
			Max_Number = Array_Loop[i];
		}
	}
	return Max_Number;
}
int main()
{
	srand((unsigned)time(NULL));
	int Array_Loop[100], ArrayLenght;

	ArrayLenght = Read_A_Positive_Number("Please Inter Positive Number : ");

	ReadArray(Array_Loop, ArrayLenght);
	cout << "Array Elements :";
	PrintArray(Array_Loop, ArrayLenght);
	cout <<"Max Number Is : " << Check_Max_Number(Array_Loop, ArrayLenght);

	return 0;
}
