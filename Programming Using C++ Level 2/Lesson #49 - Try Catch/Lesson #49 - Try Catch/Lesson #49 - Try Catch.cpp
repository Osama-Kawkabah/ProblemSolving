#include <iostream>
#include <vector>
using namespace std;
int main()
{

	vector <int> vArray{ 1,2,34,45 };




	for (int i = 0; i < vArray.size(); i++)
	{


		try
		{
			cout << vArray.at(1) << endl;
			cout << vArray.at(2) << endl;
			cout << vArray.at(3) << endl;
			cout << vArray.at(11) << endl;
		}
		catch (...)
		{
			cout << "Error:(" << endl;;
			system("color 40");
			break;
		}
	}

	return 0;
}