#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct sTem
{
	string FirstName;
	string lastName;
	string Solry;
};

sTem ReadInf() {
	char ReadMor = 'Y';
	sTem sInformation;

	while (ReadMor == 'y' || ReadMor == 'y')
	{
		cout << "Plese Inter First Name :";
		cin >> sInformation.FirstName;
		cout << "Plese Inter last Name  :";
		cin >> sInformation.lastName;
		cout << "Plese Inter Solry      :";
		cin >> sInformation.Solry;
		cout << "Do You Want Read More Informtion :Y/N";
		cin >> ReadMor;
	}
	return sInformation;
}

void PrintInf(vector < sTem> vInfPerson) {
	cout << "\n";
	for (auto& Inf : vInfPerson)
	{
		cout << "First Name : " << Inf.FirstName;
		cout << "last Name  : " << Inf.lastName;
		cout << "Solry      : " << Inf.Solry;
	}
}


int main()
{
	/*vector < sTem> vInfPerson;

	sTem InfP;
	InfP.FirstName = "Osama";
	InfP.lastName = "Kokabah";
	InfP.Solry = "35000";
	vInfPerson.push_back(InfP);

	InfP.FirstName = "Ali";
	InfP.lastName = "Mahmod";
	InfP.Solry = "45150";
	vInfPerson.push_back(InfP);

	InfP.FirstName = "Haseen";
	InfP.lastName = "Mostafa";
	InfP.Solry = "76330";
	vInfPerson.push_back(InfP);

	InfP.FirstName = "Yahya";
	InfP.lastName = "Alaue";
	InfP.Solry = "36330";
	vInfPerson.push_back(InfP);


	for (sTem& InfPerson : vInfPerson)
	{
		cout << "FirstName : " << InfPerson.FirstName << endl;
		cout << "lastName  : " << InfPerson.lastName << endl;
		cout << "Solry     : " << InfPerson.Solry << endl;
		cout << "\n";
	}
		cout << "\n";*/

	vector < sTem> vInfPerson;
	ReadInf();
	PrintInf(vInfPerson);
	return 0;
}
