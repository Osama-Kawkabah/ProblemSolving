#include <iostream>
#include <vector>
using namespace std;

void ReadNumbers(vector <int>& vNumbers) {
	char RaedMor = 'Y';
	int Number;

	while (RaedMor == 'Y' || RaedMor == 'y')
	{
		cout << "\nPlese Inter Number : ";
		cin >> Number;
		// ÇáãÓÊÎÏã áã íÏÎá ÚÏÏğÇ ÕÍíÍğÇ
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid Number, Plese Inter Number : ";
			cin >> Number;
		}

		vNumbers.push_back(Number);
		cout << "\nDo You Want Read More From Numbers : Y/N ";
		cin >> RaedMor;
	}
	
}

void PrintNumbers(vector <int>& vNumbers) {
	cout << "\nvector Numbers IS " << endl;

	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
}

int main()
{

	/*vector <int> vNumber;
	vNumber.push_back(10);
	vNumber.push_back(20);
	vNumber.push_back(30);
	vNumber.push_back(40);
	vNumber.push_back(50);
	vNumber.push_back(60);
	vNumber.push_back(70);
	vNumber.push_back(80);
	vNumber.push_back(90);
	vNumber.push_back(100);
	for (auto& Number : vNumber)
	{
		cout << Number << " ";
	}*/

	//HomeWork

	vector <int> vNumbers;
	ReadNumbers(vNumbers);
	PrintNumbers(vNumbers);

	return 0;
}
