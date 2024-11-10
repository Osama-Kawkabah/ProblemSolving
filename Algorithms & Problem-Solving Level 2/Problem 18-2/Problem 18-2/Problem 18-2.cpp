#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string ReadTextEncryption(string Text) {
	string Password;
	cout << Text << endl;
	getline(cin , Password);
	return Password;
};


string PrintTextEncryption(string Text , short  Kay) {
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + Kay);
	}
	return Text;
}

string PrintAfterEncryption(string Text, short Kay) {
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char(((int)Text[i] + Kay) - Kay);
	}
	return Text;
}

int main()
{
	short Kay = 5;
	string Text = ReadTextEncryption("Please Enter Any Text");
	cout << "Text Before Encryption :  " << Text << endl;
	cout << "Text After Encryption : " << PrintTextEncryption(Text, Kay) << endl;;
	cout << "Text After Encryption : " << PrintAfterEncryption(Text, Kay);
	return 0;
}

