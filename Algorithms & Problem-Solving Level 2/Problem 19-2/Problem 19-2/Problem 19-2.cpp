#include <iostream>
#include <cstdlib>
using namespace std;


int ReadNumberRandom(int From, int To) {

	int Random = rand() % (To - From + 1) + From;
	return Random;
}

int main() {

	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));
	cout << ReadNumberRandom(5, 11) << endl;
	cout << ReadNumberRandom(1, 22) << endl;
	cout << ReadNumberRandom(3, 33) << endl;
	cout << ReadNumberRandom(4, 44) << endl;

	return 0;
}
