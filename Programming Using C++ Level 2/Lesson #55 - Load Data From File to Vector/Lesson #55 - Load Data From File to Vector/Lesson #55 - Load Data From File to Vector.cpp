#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void WrightFile(string Text) {


	fstream MyCode;
	MyCode.open("My_Code.text", ios::out | ios::app);


	if (MyCode.is_open())
	{
		MyCode << Text << "\n";

		MyCode.close();
	}
}

void InterFileInVector(string NameFile) {

	vector <string> vMyText;

	fstream File;
	File.open(NameFile, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			vMyText.push_back(Line);
		}
		int x =0;
		for (string& i : vMyText)
		{
			cout << i <<" -> " << ++x << endl;
		}

		File.close();
	}
	else
	{
		cout << "no connection?" << endl;
		File.close();
	}
}




int main() {

	//WrightFile("Osama Ali Yahya Haseen Kokabah");

	InterFileInVector("My_Code.text");


	return 0;
}