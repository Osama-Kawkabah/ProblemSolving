#include <iostream>
using namespace std;

//void PrintFibonacciUsingLoop(int num,int Numbers) {
//
//	static int NumFibonacci = 0 , Prev2 = 0, Prev1 = 1;
//
//	if (num != Numbers)
//	{
//		NumFibonacci = Prev1 + Prev2;
//
//		cout << NumFibonacci << " ";
//
//		Prev2 = Prev1;
//		Prev1 = NumFibonacci;
//
//		PrintFibonacciUsingLoop(num + 1, Numbers);
//	}
//}



void PrintFibonacciUsingLoop(int Numbers, int Prev1, int Prev2) {

	 int NumFibonacci = 0;

	if (Numbers > 0)
	{
		NumFibonacci = Prev2 + Prev1; 
		Prev2 = Prev1; 
		Prev1 = NumFibonacci;

		cout << NumFibonacci << " ";


		PrintFibonacciUsingLoop(Numbers - 1, Prev1, Prev2);
	}
}

int main() {

	//cout << "1 ";
	//PrintFibonacciUsingLoop(0,10);

	PrintFibonacciUsingLoop(10, 0, 1);

	return 0;
}