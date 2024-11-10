#include <iostream>
#include <stdlib.h>
#include "ReadText.h";
#include "Swap_Num.h";
#include "Read_A_Positive_Number.h";
#include "Read_A_Negative_Number.h";
#include "RandomNumbers.h";
#include "ReadColor.h";
using namespace std;
using namespace Swap_Numbers;
using namespace MyLibrary;
using namespace Read_A_Negative_Numbers;
using namespace Color;
using namespace Random_Numbers;


void ReadArray(int Array_Loop[100], int& ArrayLenght) {

	cout << "Please Inter Lenght Array" << endl;
	cin >> ArrayLenght;
	for (int i = 0; i < ArrayLenght; i++)
	{
		cout << "Element[" << i + 1 << "]:";
		cin >> Array_Loop[i];
	}
}

void PrintArray(int Array_Loop[100], int ArrayLenght) {
	cout << "\n";
	for (int i = 0; i < ArrayLenght; i++)
	{
		cout << Array_Loop[i] << " ";
	}
	cout << "\n";
}

int RandomNumber(int From, int To) {

	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}



int main()
{
	srand((unsigned)time(NULL));

	int x = 12;
	int y = 22;
	Swap_Number(x, y);
	Read_A_Negative_Number("Please Inter A Negative Number");
	Screen("GREEN");
	cout<<Random_Number(1, 1000);


	return 0;
}
