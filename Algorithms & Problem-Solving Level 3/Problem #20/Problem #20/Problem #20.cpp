#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void PrintMatrix(int Array[5][5], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(4) << Array[i][j];
		}
		cout << endl;
	}
}

int PalindromeArray(int Array[5][5], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (char j = 0; j < Cols / 2; j++)
		{
			if (Array[i][j] != Array[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}

	return true;
}

; int main()
{
	srand((unsigned)time(NULL));

	const int Row =5, Cols=5;

	int Array1[Row][Cols]{
					 {1,1,6,1,1},
					 {2,2,6,2,2},
					 {4,4,6,4,4},
					 {4,4,6,4,4},
					 {4,4,6,4,4},
	};

	//FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << setw(13) << "Matrix 1 :\n\n";

	PrintMatrix(Array1, Row, Cols);
	cout << endl;
	cout << endl;

	if (PalindromeArray(Array1, Row, Cols))
		cout << "\nYes: Matrix is Palindrome\n";
	else
	cout << "\nNo: Matrix is NOT Palindrome\n";


	cout << endl;
	return 0;

}


