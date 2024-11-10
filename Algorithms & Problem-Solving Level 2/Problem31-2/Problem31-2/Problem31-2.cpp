#include <iostream>
#include <cstdlib>
using namespace std;

//--------------------0----------------------------
//--------------------0----------------------------

int ReadPositiveNumber(string Text) {
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
};

void Swap_Number(int& A, int& B) {
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

int RandomNumber(int Form, int To) {
	int randomNum = rand() % (To - Form + 1) + Form;
	return randomNum;
}

void Read_Array(int Array_Elements[100], int& Arry_Lenght) {
	for (int i = 0; i < Arry_Lenght; i++)
	{
		Array_Elements[i] = RandomNumber(1, 100);
	}
}

void Print_Array(int Array_Elements[100], int Arry_Lenght) {
	for (int i = 0; i < Arry_Lenght; i++)
	{
		cout << Array_Elements[i] << " ";
	}
}

void Order_Array(int Array_Elements[100], int Array_Length) {
	for (int i = 0; i < Array_Length; i++)
		Array_Elements[i] =i +1;
}

void Swap_Array(int Array_Elements[100], int Array_Length) {
	int randomIndex1 = RandomNumber(1, Array_Length) - 1;
	int randomIndex2 = RandomNumber(1, Array_Length) - 1;
	for (int i = 0; i < Array_Length; i++) {
		Swap_Number(Array_Elements[randomIndex1], Array_Elements[randomIndex2]);
	}
}

void ShuffleArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++) {
		Swap_Number(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

//-------------------0-----------------------------
//-------------------0-----------------------------

int main() {

	srand((unsigned)time(NULL));
	int Array_Elements[100], Arry_Lenght;
	Arry_Lenght = ReadPositiveNumber("Please Inter Lenght Number :");

	//-------------------0-----------------------------
	Order_Array(Array_Elements, Arry_Lenght);
	cout << "\nArray elements before shuffle:\n";
	Print_Array(Array_Elements, Arry_Lenght);

	cout << endl;

	//-------------------0-----------------------------
	ShuffleArray(Array_Elements, Arry_Lenght);
	cout << "\nArray elements after shuffle:\n"; 
	Print_Array(Array_Elements, Arry_Lenght);


	return 0;
}




