#include <iostream>
#include <math.h>
using namespace std;

//void printNumber(int N, int M) {
//
//	if (N <= M)
//	{
//		cout << "NUmber : " << N << endl;
//		printNumber(N + 1, M);
//	}
//
//}

//void printNumber(int N, int M) {
//
//	if (N <= M)
//	{
//		cout << "NUmber : " << M << endl;
//		printNumber(N, M - 1);
//	}
//
//}


int printNumber(int N, int M) {

	if (M == 0)
		return 1;
	else
		return (N * printNumber(N, M - 1)); 
}

int main()
{
	cout << printNumber(2, 5) << endl;;
	return 0;
}

