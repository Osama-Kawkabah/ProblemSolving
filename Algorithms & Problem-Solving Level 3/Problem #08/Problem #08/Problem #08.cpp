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

void FillMatrixWithRandomNumbers2(int Array2[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array2[i][j] = RandomNumber(1, 10);

		}
	}
}

void MulMatrixOneINMatrixTow(int Array1[3][3], int Array2[3][3], int Array3[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array3[i][j] = Array1[i][j] * Array2[i][j];
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

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Array2[3][3];
	int Array3[3][3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	FillMatrixWithRandomNumbers2(Array2,3,3);
	MulMatrixOneINMatrixTow(Array1, Array2, Array3, 3, 3);

	cout << "Matrex 1 " << endl;
	PrintMatrix(Array1, 3, 3);
	cout << "\nMatrex 2" << endl;
	PrintMatrix(Array2, 3, 3);
	cout << "\nResulte" << endl;
	PrintMatrix(Array3, 3, 3);

	return 0;
}

