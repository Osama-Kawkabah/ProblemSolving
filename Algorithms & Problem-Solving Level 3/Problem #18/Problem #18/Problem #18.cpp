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

bool NumberIsExist(int Array[3][3],int Number, short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Number==Array[i][j])
			{
				return true;
			}
		}
	}
	return false;
}


void TheNumberIsRepit(int Array1[3][3], int Array2[3][3], vector <int>& Array3, short Rows, short Cols) {
	int Numbers;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Numbers = Array1[i][j];
			if (NumberIsExist(Array2, Numbers, 3, 3))
			{
				Array3.push_back(Array1[i][j]);
			}
		}
	}
}
; int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];
	int Array2[3][3];

	vector <int>vArray3;


	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Array1, 3, 3);

	FillMatrixWithRandomNumbers1(Array2, 3, 3);
	cout << "Matrix2:\n";
	PrintMatrix(Array2, 3, 3);


	TheNumberIsRepit(Array1, Array2, vArray3, 3, 3);
	cout << endl;



	cout << "\nIntersected Numbers are : \n";

	for (int& i : vArray3)
	{
			cout << i << " ";
	}



	cout << endl;
	return 0;

}


