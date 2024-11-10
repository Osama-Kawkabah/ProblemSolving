#include <iostream>
#include <iostream>
using namespace std;

void OrderArray(int arry[3][3], short Rows, short col) {

	int Number = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arry[i][j] = ++Number;
		}
	}
}

void PrintArray(int arry[3][3], short Rows, short col) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arry[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	int arry[3][3];



	OrderArray(arry, 3, 3);
	PrintArray(arry, 3, 3);

	return 0;
}