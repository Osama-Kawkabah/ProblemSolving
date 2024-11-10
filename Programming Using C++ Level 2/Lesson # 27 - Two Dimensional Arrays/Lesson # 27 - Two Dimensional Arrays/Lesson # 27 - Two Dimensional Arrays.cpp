#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//int x[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int k = 0; k < 4; k++) {
	//		if (x[i][k] > 9)
	//			cout << x[i][k] << "  ";
	//		else
	//			cout << x[i][k] << "   ";
	//	}
	//	cout << endl;
	//}


	//HomeWork

	/*int HomeWork[10][10] = { 
							{1,2,3,4,5,6,7,8,9,10},
							{11,12,13,14,15,16,17,18,19,20},
							{21,22,23,24,25,26,27,28,29,30},
							{31,32,33,34,35,36,37,38,39,40},
							{41,42,43,44,45,46,47,48,49,50},
							{51,52,53,54,55,56,57,58,59,60},
							{61,62,63,64,65,66,67,68,69,70},
							{71,72,73,74,75,76,77,78,79,80},
							{81,82,83,84,85,86,87,88,89,90},
							{91,92,93,94,95,96,97,98,99,100}
	
	
	};

	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 10; k++) {

			if (HomeWork[i][k] > 9)
				cout << HomeWork[i][k] << " ";
			else
				cout << HomeWork[i][k] << "  ";

		}
		cout << endl;
	}*/

	const int Size = 10;
	int HomeWork[Size][Size];
	int Count = Size;
	cout << "\n";
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i <= Count; i++)
	{
		cout << "|";
		for (int k = 0; k <= Count; k++) {
			int result = (i + 1) * (k + 1);
			if (result < 10)
			{
				cout << "0" << result << " ";
			}
			else if (result >= 100) {
				cout << result << "";
			}
			else {
				cout << result << " ";
			}
			cout << "|";
		}
		cout << endl;
	}
	cout << "-----------------------------------------" << endl;

	int x[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			x[i][j] = (i + 1) * (j + 1);
		}
	} for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%0*d ", 2, x[i][j]);
		}
		cout << endl;
	}

	return 0;
}
