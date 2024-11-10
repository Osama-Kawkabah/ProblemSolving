#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string Text){
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void CheckNumberAndPrint(int Number){
	int Raond = 0;
	while (Number > 0)
	{
		Raond = Number % 10;
		Number= Number / 10;
		cout << Raond << endl;
	}
}
int main()
{
	CheckNumberAndPrint(ReadNumber("Please Inter Number"));
	return 0;
}