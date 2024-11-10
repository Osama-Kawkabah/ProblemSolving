#include <iostream>
using namespace std;

struct MyStruct
{
	string FirstName;
	string LastName;
	int Salyre;
};

int main()
{
	MyStruct BB, *PP;

	BB.FirstName = "OsamaAli";
	BB.LastName = "Kokabah";
	BB.Salyre = 32500;

	cout << "FirstName : " << BB.FirstName << endl;
	cout << "LastName  : " << BB.LastName << endl;
	cout <<"Salyre     : " << BB.Salyre << endl;

	PP = &BB;

	PP->FirstName = "Osama";
	PP->LastName = "Kokabah";
	PP->Salyre = 234230;

	cout << "Pointers  : " << endl;
	cout << "FirstName : " << PP->FirstName << endl;
	cout << "LastName  : " << PP->LastName << endl;
	cout << "Salyre    : " << PP->Salyre << endl;
	return 0;
}