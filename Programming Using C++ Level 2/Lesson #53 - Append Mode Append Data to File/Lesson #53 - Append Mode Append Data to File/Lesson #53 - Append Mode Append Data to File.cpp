#include <iostream>
#include <fstream>
using namespace std;
int main()
{

	fstream Myfile;

	Myfile.open("My file.text", ios::out | ios::app);

	if (Myfile.is_open())
	{
		Myfile << ".\nThe sky is clear and the sun is shining.\n";
		Myfile << ".\nI love to walk along the beach at sunset.\n";
		Myfile << ".\nLife is like a rollercoaster with ups and downs.\n";
		Myfile << ".\nThe smell of freshly baked cookies is irresistible.\n";
		Myfile << ".\nThe sky is clear and the sun is shining.\n";
		Myfile << ".\nLearning is a lifelong journey of discovery.\n";
		Myfile << ".\nChallenges make us stronger and more resilient.\n";
		Myfile << ".\nBooks can take you on amazing adventures.\n";

		cout << "A file has been created" << endl;;

		Myfile.close();
	}



	return 0;


}