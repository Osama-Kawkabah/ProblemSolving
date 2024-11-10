#include <iostream>
#include <iomanip>
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
			Array1[i][j] = RandomNumber(1, 100);

		}
	}
}

void PrintMatrix(int Array[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(4) << Array[i][j];
		}
		cout << endl;
	}
}

int MinNumbers(int Array[3][3], short Rows, short Cols) {

	int  MinNumbers = Array[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Array[i][j] < MinNumbers)
			{
				MinNumbers = Array[i][j];
			}

		}
	}
	return MinNumbers;

}

int MaxNumbers(int Array[3][3], short Rows, short Cols) {

	int  MaxNumbers = Array[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Array[i][j] > MaxNumbers)
			{
				MaxNumbers = Array[i][j];
			}

		}
	}
	return MaxNumbers;

}

; int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout<<setw(13) << "Matrix 1 :\n\n";

	PrintMatrix(Array1, 3, 3);
	cout << endl;
	cout << endl;

	cout << " Min Numbes : ";
	cout << MinNumbers(Array1, 3, 3) << endl;;

	cout << " Max Numbes : ";
	cout << MaxNumbers(Array1, 3, 3);




	cout << endl;
	return 0;

}


