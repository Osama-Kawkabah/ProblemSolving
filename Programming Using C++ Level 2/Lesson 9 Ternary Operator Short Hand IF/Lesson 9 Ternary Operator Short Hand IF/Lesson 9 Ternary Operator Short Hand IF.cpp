#include <iostream>
using namespace std;
int main()
{

	int NUmber = -6;
	string IS_NEGATIVE_OR_POSITIVE;

	if (NUmber > 0)
	{
		IS_NEGATIVE_OR_POSITIVE = "POSITIVE";
		cout << IS_NEGATIVE_OR_POSITIVE << endl;
	}
	else
	{
		IS_NEGATIVE_OR_POSITIVE = "NEGATIVE";
		cout << IS_NEGATIVE_OR_POSITIVE << endl;
	}


	NUmber > 0 ? cout << "POSITIVE" : NUmber == 0 ? cout << "0" : cout << "NEGATIVE" << endl;;

	//cout << (NUmber > 0 ? "POSITIVE" : (NUmber == 0 ? "0" : "NEGATIVE"));

	return 0;
}

