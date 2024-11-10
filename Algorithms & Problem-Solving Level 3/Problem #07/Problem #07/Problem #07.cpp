#include <iostream>
#include <iostream>
using namespace std;

void OrderArray(int arry[3][3], short Rows, short col) {

	int Number = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arry[i][j] = ++Number;
		}
	}
}

void CopyAray(int arry[3][3], int arry2[3][3], short Rows, short col) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arry2[i][j] = arry[j][i];

		}
	}
}

void PrintArray(int arry[3][3], short Rows, short col) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arry[i][j] << "   ";
		}
		cout << endl;
	}
}


int main() {

	int arry[3][3];
	int arry2[3][3];



	cout << "Array 1" << endl ;
	OrderArray(arry, 3, 3);
	PrintArray(arry, 3, 3);

	cout<< endl;

	cout << "Copy Array 1  ->  Reverns Col " << endl;
	CopyAray(arry, arry2, 3, 3);
	PrintArray(arry2, 3, 3);

	return 0;
}