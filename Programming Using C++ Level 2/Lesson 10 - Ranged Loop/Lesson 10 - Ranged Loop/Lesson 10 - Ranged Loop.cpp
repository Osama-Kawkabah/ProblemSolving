#include <iostream>
using namespace std;

int main()
{
	int arr1[5] = { 1,2,3,4,5 };

	for (int i : arr1)
	{
		cout << i << endl;;
	}


	/*for (int i : { 1, 2, 3, 4, 5 })
	{
		cout << i << endl;;
	}*/

	return 0;
}
