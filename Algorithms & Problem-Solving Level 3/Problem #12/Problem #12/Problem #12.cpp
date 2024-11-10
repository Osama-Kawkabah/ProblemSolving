#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int RandomNumber(int From, int To) {
	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}

void FillMatrixWithRandomNumbers1(int Array1[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array1[i][j] = RandomNumber(1, 10);

		}
	}
}

void FillMatrixWithRandomNumbers2(int Array1[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array1[i][j] = RandomNumber(1, 10);

		}
	}
}

void PrintMatrix(int Array[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Array[i][j] < 10)
			{
				cout << "0";
			}
			cout << Array[i][j] << " ";
		}
		cout << endl;
	}

}

int ArrayTheTypicl(int Array1[3][3], int Array2[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Array1[i][j] != Array2[i][j])
				return false;
		}
	}
	return true;

}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Array2[3][3];

	//Array 1 
	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrex 1 : " << endl << endl;
	PrintMatrix(Array1, 3, 3);
	cout << endl;

	//Array 2
	FillMatrixWithRandomNumbers2(Array2, 3, 3);
	cout << "Matrex 2 : " << endl << endl;
	PrintMatrix(Array2, 3, 3);
	cout << endl;

	//Cheack Array 1 || Array 2
	if (ArrayTheTypicl(Array1, Array2, 3, 3))
		cout << "\nYES: both martices are Equal." << endl;
	else
		cout << "\nNo: martices are NOT Equal." << endl;




	cout << endl;
	;	return 0;
}

