#include <iostream>
#include <cstdlib>
using namespace std;

//-----------General Function-----------;
//-----------General Function-----------;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2); //  ÕœÌœ «·Õœ «·√ﬁ’Ï ·· ﬂ—«—

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimNotPrime::NotPrime; // ≈–« ﬂ«‰ «·⁄œœ ·Ì” √Ê·Ì«
	};

	return enPrimNotPrime::Prime; // ≈–« ﬂ«‰ «·⁄œœ √Ê·Ì«
};

int Read_A_Positive_Number(string Text) {
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
};

int Read_A_Negative_Number(string Text) {
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;

	} while (Number > 0);

	return Number;
};

void ReadArray(int Array_Loop[100] ,int& ArrayLenght) {

	cout <<"Please Inter Lenght Array" << endl;
	cin >> ArrayLenght;
	for (int i = 0; i < ArrayLenght; i++)
	{
		cout << "Element[" << i + 1 << "]:";
		cin >> Array_Loop[i];
	}
}

void PrintArray(int Array_Loop[100], int ArrayLenght) {
	cout << "\n";
	for (int i = 0; i < ArrayLenght; i++)
	{
		cout << Array_Loop[i]<<" ";
	}
	cout << "\n";
}

int RandomNumber(int From, int To) {
	
	int Number;
	return Number = (rand() % (To - From + 1)) + From;
}

void Swap_Number(int& A, int& B) {
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
	cout << "A" << A << "\n" << "B"<< B << endl;
}
//-----------General Function-----------;


int main() {

	/*Read_A_Positive_Number("Please Inter A Positive Number");
	Read_A_Negative_Number("Please Inter A Negative Number");*/

	/*int ArrayLenght;
	int Array_Loop[100];
	ReadArray(Array_Loop, ArrayLenght);
	PrintArray(Array_Loop, ArrayLenght);*/

	//int A = 130, B = 20;
	//Swap_Number(A, B);


	return 0;
}