#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int RandomNumber(int From, int To) {

	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}

void FillMatrixWithRandomNumbers(int Array[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array[i][j] = RandomNumber(1, 99);

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

void PrintSumMatrix(int Array[3][3], short Rows, short Cols) {

	vector <int> vNumbers;
	int Numbers = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Numbers += Array[i][j];
		}
		vNumbers.push_back(Numbers);
		cout << "Row " << i +1<< " Sun : " << Numbers << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int size = 3;

	int Array[3][3];
	FillMatrixWithRandomNumbers(Array, size, size);
	PrintMatrix(Array, size, size);
	cout << "\n";
	PrintSumMatrix(Array, size, size);

	return 0;
}

