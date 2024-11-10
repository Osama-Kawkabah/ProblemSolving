#include<iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number 
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
};

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
	/*This function will search for a number in array and return its index, or return -1 if it does not exists*/
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number) return i;
		// and return the index   
	}
	//if you reached here, this means the number is not found 
	return -1;
};

void Print_Array_Is_found_Or_NotFound(int Number, int arr[100], int arrLength) {
	if (FindNumberPositionInArray(Number, arr, arrLength) == -1)
		cout << "The number is not found :-(\n";
	else
	{
	cout << "The number is found :-)\n";
	}

}

int ReadNumber() {
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}

int main() {
	//Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL)); int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength); int Number = ReadNumber();
	cout << "\nNumber you are looking for is: " << Number << endl;
	Print_Array_Is_found_Or_NotFound(Number, arr, arrLength);

	return 0;
}