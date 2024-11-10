#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {
	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}
// Random Numbers 
void FillMatrixWithRandomNumbers1(int Array1[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array1[i][j] = RandomNumber(0, 1);

		}
	}
}

void PrintMatrix(int Array[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout <<setw(3)<< Array[i][j];
		}
		cout << endl;
	}
}

int ArrayTheTypicl(int Array1[3][3], short Rows, short Cols) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i == j && Array1[i][j] != 1)
			{
				return false;
			}
			else if (i != j && Array1[i][j] != 0) {
				return false;
			}
		}
	}
	return true;

}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Array1, 3, 3);


	if (ArrayTheTypicl(Array1, 3, 3))
		cout << "\nYES: Matrix is identity."<< endl;
	else
		cout << "\nNo: Matrix is NOT identity." << endl;

	cout << endl;
	;	return 0;
}

