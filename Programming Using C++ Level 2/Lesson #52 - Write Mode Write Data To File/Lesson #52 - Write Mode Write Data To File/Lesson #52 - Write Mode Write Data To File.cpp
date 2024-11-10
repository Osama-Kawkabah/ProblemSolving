#include <iostream>
#include <fstream>
using namespace std;
int main()
{

	fstream Myfile;

	Myfile.open("My file.text", ios::out);

	if (Myfile.is_open())
	{
		Myfile << "Osama \n";
		Myfile << "Osama Ali \n";
		Myfile << "Osama Ali Kokabah \n";


		Myfile.close();
	}


	//fstream Myfile1;

	//Myfile1.open("My file.text", ios::out);

	//if (Myfile1.is_open())
	//{
	//	Myfile1 << "Myfile1 \n";
	//	Myfile1 << "Myfile1 Myfile1 \n";
	//	Myfile1 << "Myfile1 Myfile1 Myfile1 \n";


	//	Myfile1.close();
	//}


	/*fstream Osama;
	Osama.open("OsamaAli.docx", ios::out);

	if (Osama.is_open())
	{
		Osama << "Osama \n";
		Osama << "Osama Osama  \n";
		Osama << "Osama Osama Osama\n";
		Osama << "Osama Osama Osama Osama\n"; \
		cout << "\nA file has been created \n";

		Osama.close();
	}*/
	return 0;
}