#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void SaveVectortoFile(string NameFile, string Text) {

	fstream MyCode;
	MyCode.open(NameFile, ios::out | ios::app);


	if (MyCode.is_open())
	{
		MyCode << Text << "\n";

		MyCode.close();
	}
}


int main() {

	
	vector <string> My_Text{ "Osama","Ali","Yahay","Haseen","Ahmed","Mohammed" };



	for (int i = 0; i < My_Text.size(); i++)
	{
		SaveVectortoFile( "MyFiles22.text", My_Text[i]);
	}

	return 0;
}