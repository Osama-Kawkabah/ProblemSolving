//#include <iostream>
//#include <string>
//using namespace std;
//
//string ReadLetterPassword(string Text) {
//	string Password;
//
//	cout << Text << endl;
//	cin >> Password;
//	return Password;
//};
//
//void PrintLetterPassword(string Text) {
//	int Count = 1;
//
//	for (int Num1 = 65; Num1 <= 90; Num1++)
//	{
//		for (int Num2 = 65; Num2 <= 90; Num2++)
//		{
//			for (int Num3 = 65; Num3 <= 90; Num3++)
//			{
//				if (Text == (string(1, Num1) + string(1, Num2) + string(1, Num3)))
//				{
//					cout << "\nPlassword is " << Text << endl;
//					cout << "\nFound Ofter {" << Count << "} Trial(s)" << endl;
//					return;
//				}
//				cout << "Trial [ " << Count++ << " ] : "
//					 << char(Num1) << char(Num2) << char(Num3)
//					 << endl;
//			}
//		}
//	}
//};
//
//int main()
//{
//	string Password =ReadLetterPassword("Please Inter Password Litter Kabitel");
//	PrintLetterPassword(Password);
//
//	return 0;
//}

//------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

string ReadLetterPassword(string Text) {
	string Password;

	cout << Text << endl;
	cin >> Password;
	return Password;
};

void PrintLetterPassword(string Text) {
	int Count = 1;
	string Word = "";
	for (int Num1 = 65; Num1 <= 90; Num1++)
	{
		for (int Num2 = 65; Num2 <= 90; Num2++)
		{
			for (int Num3 = 65; Num3 <= 90; Num3++)
			{
				Word = Word + char(Num1);
				Word = Word + char(Num2);
				Word = Word + char(Num3);


				cout << "Trial [ " << Count++ << " ] : " << Word << endl;
				if (Text == Word)
				{
					cout << "\nPlassword is " << Text << endl;
					cout << "\nFound Ofter {" << Count << "} Trial(s)" << endl;
					return;
				}

				Word = "";
			}
		}
	}
};

int main()
{
	string Password = ReadLetterPassword("Please Inter Password Litter Kabitel");
	PrintLetterPassword(Password);

	return 0;
}