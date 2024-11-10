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
			Array1[i][j] = RandomNumber(11, 60);

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

void PrintMiddeColllArray(int Array1[3][3], int Array2[3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (j == 1)
			{
				Array2[i] = Array1[i][j];
			}
		}
	}


}

void PrintMiddeRowslArray(int Array1[3][3], int Array3[3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (j == 1)
			{
				Array3[i] = Array1[j][i];
			}
		}
	}

}

void PrintMiddeMatrix(int Array[3], short Rows) {
	for (int i = 0; i < Rows; i++)
	{
		cout << Array[i] << " " ;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Array2[3];
	int Array3[3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);

	cout << "Matrex 1 " << endl << endl;
	PrintMatrix(Array1, 3, 3);
	cout << endl;

	cout << "Midde Col Array  " << endl;
	PrintMiddeColllArray(Array1, Array3, 3, 3);
	PrintMiddeMatrix(Array3, 3);
	cout << endl;

	cout << "Midde Rows Array  " << endl;
	PrintMiddeRowslArray(Array1, Array2, 3, 3);
	PrintMiddeMatrix(Array2, 3);

	cout << endl;
;	return 0;
}

