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
			Array1[i][j] = RandomNumber(0, 1);

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

int ArrayTheRepit(int Array1[3][3], short Rows, short Cols, int Number) {
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


int ArrayTheSparsel(int Array1[3][3], short Rows, short Cols) {

	int Sparsel = Rows * Cols;

	return ArrayTheRepit(Array1, 3, 3, 0) > Sparsel / 2;
}

int main()
{
	srand((unsigned)time(NULL));

	int Array1[3][3];

	FillMatrixWithRandomNumbers1(Array1, 3, 3);
	cout << "Matrix1:\n";
	PrintMatrix(Array1, 3, 3);




	if (ArrayTheSparsel(Array1, 3, 3))
		cout << "Yes : It is Sparse" << endl;
	else
		cout << "No : It is Not Sparse\n";
		

	cout << endl;
	;	return 0;
}


//Íá ÇÎÑ 

//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <iomanip>
//
//using namespace std;
//
//int RandomNumber(int From, int To) {
//	int Number;
//	return Number = (rand() % (To - From + 1)) + From;
//}
//
//void FillMatrixWithRandomNumbers1(int Array1[3][3], short Rows, short Cols) {
//
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < Cols; j++)
//		{
//			Array1[i][j] = RandomNumber(0, 9);
//
//		}
//	}
//}
//
//void PrintMatrix(int Array[3][3], short Rows, short Cols) {
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < Cols; j++)
//		{
//			cout << setw(3) << Array[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int ArrayTheSparsel(int Array1[3][3], short Rows, short Cols) {
//	int Sparse = 0;
//	int NumbersRepet = 0;
//
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			if (Array1[i][j] == 0)
//			{
//				++Sparse;
//			}
//			else
//			{
//				++NumbersRepet;
//			}
//
//		}
//	}
//
//	return Sparse > NumbersRepet;
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//
//	int Array1[3][3];
//
//	FillMatrixWithRandomNumbers1(Array1, 3, 3);
//	cout << "Matrix1:\n";
//	PrintMatrix(Array1, 3, 3);
//
//	int Sparse = ArrayTheSparsel(Array1, 3, 3);
//
//	if (Sparse)
//		cout << "Yes : It is Sparse" << endl;
//	else
//		cout << "No : It is Not Sparse\n";
//
//
//
//
//	cout << endl;
//	;	return 0;
//}
