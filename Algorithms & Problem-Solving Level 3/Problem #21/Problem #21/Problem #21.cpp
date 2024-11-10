#include <iostream>
using namespace std;


void PrintFibonacciUsingLoop(int Numbers) {

	int NumFibonacci = 0;

	int Prev2 = 0, Prev1 = 1;
	cout << "1" <<" ";
	for (int i = 2; i <= Numbers; i++)
	{
		NumFibonacci = Prev1 + Prev2;
		cout << NumFibonacci<<" ";

		Prev2 = Prev1;
		Prev1 = NumFibonacci;
	}


}
int main() {

	PrintFibonacciUsingLoop(15);

	return 0;
}