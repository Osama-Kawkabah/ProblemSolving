#include<iostream>
using namespace std;

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int ArryaIsEven(int arr[100], int arrLength) {
	int Count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 == 0) {
			Count++;
		}
	}
	return Count;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arr2Length = 0;
	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);
	cout << "Even Number Count Is : " << ArryaIsEven(arr, arrLength);

	return 0;
}