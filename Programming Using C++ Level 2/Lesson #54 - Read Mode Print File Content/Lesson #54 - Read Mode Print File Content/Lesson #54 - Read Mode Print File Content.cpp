#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// «·œ—” «·”«»ﬁ 

void WrightFile(string Text) {


	fstream MyCode;
	MyCode.open("My_Code.text", ios::out | ios::app);


	if (MyCode.is_open())
	{
		MyCode << Text << "\n";

		MyCode.close();
	}
}


//«·„Â„ «·œ—” «·ÌÊ„ 
void ReadModePrintFileContent(string Text){
	fstream Myfile;

	Myfile.open(Text, ios::in);
	if (Myfile.is_open())
	{
		string Letter;
		while(getline(Myfile, Letter))
		{
			cout << Letter << endl;;
		}
		Myfile.close();
	}
	else
	{
		cout << "Not File" << endl;
		Myfile.close();
	}

}

void ReadFile(string NameFile) {

	fstream File;

	File.open(NameFile, ios::in);

	if (File.is_open())
	{
		string MyText;
		while (getline(File, MyText))
		{
			cout << MyText << endl;
		}
		File.close();
	}
	else
	{
		cout << "Not File" << endl;
		File.close();
	}
}


int main()
{

	//ReadModePrintFileContent("MyFile.text");

	//WrightFile("Osama");

	//ReadFile("My_Code.text");

	return 0;
}