#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int RandomNumber(int From, int To) {

	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}

void FillMatrixWithRandomNumbers(int Array[4][4] ,  short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Array[i][j] = RandomNumber(1, 99);
		}
	}
}

void PrintMatrix(int Array[4][4], short Rows, short Cols) {

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
	
	int Array[4][4];
	FillMatrixWithRandomNumbers(Array, 4, 4);
	PrintMatrix(Array, 4, 4);

    return 0;
}

