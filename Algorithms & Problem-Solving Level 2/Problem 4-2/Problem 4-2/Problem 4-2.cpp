#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string Text) {
	int Number;
	do
	{
		cout << Text << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
};
bool CheckNumber(int Number) {
	int sum = 0;

	for (int Num = 1; Num < Number; Num++)
	{
		if (Number % Num == 0)
			sum += Num;
	}
	return Number == sum;
}
void IsNumber(int Number) {
	for (int i = 1; i < Number; i++)
	{
		if (CheckNumber(i))
		{
			cout << i << endl;
		}
	}
};
int main() {
	IsNumber(ReadNumber("Please Inter Number"));
	return 0;
}