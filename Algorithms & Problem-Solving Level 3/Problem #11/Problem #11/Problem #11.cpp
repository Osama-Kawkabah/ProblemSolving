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

int SumArray(int Array[3][3], short Rows, short Cols) {

	int Numbers = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Numbers += Array[i][j];
		}
	}
	return Numbers;
}

int CheckArrayIsEqual(int Array1[3][3], int Array2[3][3], short Rows, short Cols) {
	return(SumArray(Array1, 3, 3) == SumArray(Array2, 3, 3));
}


int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Array2[3][3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrex 1 : " << endl << endl;
	PrintMatrix(Array1, 3, 3);
	cout << endl;

	FillMatrixWithRandomNumbers2(Array2, 3, 3);
	cout << "Matrex 2 : " << endl << endl;
	PrintMatrix(Array1, 3, 3);
	cout << endl;

	cout << "\nSum of Matrix 1 is: " << SumArray(Array1, 3, 3) << endl;
	cout << "\nSum of Matrix 2 is: " << SumArray(Array2, 3, 3) << endl;
	cout << endl;

	if (CheckArrayIsEqual(Array1, Array2, 3, 3))
		cout << "\nYES: both martices are equal." << endl;
	else 
		cout << "\nNo: martices are NOT equal." << endl;

	cout << endl;
	;	return 0;
}

