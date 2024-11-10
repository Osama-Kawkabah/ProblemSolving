#include <iostream>
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
			Array1[i][j] = RandomNumber(1, 9);

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

int NumberIsExsit(int Array1[3][3], short Rows, short Cols, int Number) {

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Array1[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
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


	if (NumberIsExsit(Array1, 3, 3, Numbers))
		cout << "Yes It Is Thir";
	else
		cout << "No It Is Not Thir";


	cout << endl;
	;	return 0;
}

