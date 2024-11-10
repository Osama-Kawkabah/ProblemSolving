#include <iostream>;
using namespace std;



int ReadNumber(string Text) {
	int Number;
	do
{
		cout << Text << endl;
		cin >> Number;;

	} while (Number < 0);

	return Number;
};

void CheckNumber(int Number) {

	int SumNumber = 0, Num;

	for ( Num = 1; Num < Number; Num++)
	{
		if (Number % Num == 0){
			cout << Num << "+";
			SumNumber += Num;
		}
	}

	if (SumNumber == Number)
	{
		cout << "\nNumber IS Prefect " << endl;
	}
	else
	{
		cout << "\nNumber IS Not Prefect " << endl;
	}
}



int main() {

	int Number =ReadNumber("Please Inter Number : ");

	CheckNumber(Number);
	return 0;
};