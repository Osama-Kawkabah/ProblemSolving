#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadNumberKay(string Text) {
	int Number;
	do
	{
		cout << Text << " : ";
		cin >> Number;
	} while (Number < 0);
	return Number;
};

int ReadNumberRandom(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

char One() {
	return char(ReadNumberRandom(65, 90));
};

string Tow() {

	string All_Letters[4];
	for (int i = 0; i < 4; i++)
	{
		All_Letters[i] += One();
		return All_Letters[i];
	};
};

string Three(string Letters) {

	string All_Letters[4];
	for (int i = 0; i < 4; i++)
	{
		All_Letters[i] += Tow();
		return All_Letters[i];
	};
};

void Four(string Letters) {
	for (int i = 0; i < 4; i++)
	{
		for (int c = 0; c < 4; c++)
		{
			cout << Three(Tow());
		}
		if (i == 3)
		{
			break;
		}
		cout << "_";
	}
};

void PrintAllKay(int Number) {
	for (int i = 1; i <= Number; i++)
	{
		string All_Letters = Tow();
		cout << "Kay :  [" << i << "] ";
		Four(All_Letters);
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));


	int Number = ReadNumberKay("Please Inter Number To Print It Kay");
	PrintAllKay(Number);

	return 0;
};