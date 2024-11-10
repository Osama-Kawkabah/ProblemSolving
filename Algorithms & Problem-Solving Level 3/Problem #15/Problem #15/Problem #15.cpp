#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>

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
			Array1[i][j] = RandomNumber(1,9);

		}
	}
}

void PrintMatrix(int Array[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << Array[i][j];
		}
		cout << endl;
	}
}

int ArrayTheTypicl(int Array1[3][3], short Rows, short Cols, int Number) {
	int NumbersRepet = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Array1[i][j] == Number)
			{
				++NumbersRepet;
			}

		}
	}

	return NumbersRepet;

}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Numbers;

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Array1, 3, 3);

	cout << "Please Inter Number To Conut Metrix : ";
	cin >> Numbers;


	int RebetNumber = ArrayTheTypicl(Array1, 3, 3, Numbers);

	cout << "Number" << Numbers << "Count In Metrix Is : " << RebetNumber;
	

	cout << endl;
	;	return 0;
}

