#include <iostream>
using namespace std;

class claPirson
{
private:
	string _FirstName;
	short _ID;
	string _LastName;
	string _Age;

public:
	//Proprte Set _FirstName
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}
	//Property Get _FirstName
	string GetFirstName() {
		return _FirstName;
	}

	//Proprte Set_LastName
	void SetLastName(string LastName) {
		_LastName = LastName;
	}
	//Property Get _LastName
	string GetLastName() {
		return _LastName;
	}


	//Proprte Set_Age
	void SetAge(string Age) {
		_Age = Age;
	}

	//Property Get _Age
	string GetAge() {
		return _Age;
	}


};


int main()
{
	claPirson Pirson1;
	Pirson1.SetFirstName("Osama Ali");
	Pirson1.SetLastName("Kokaba");
	Pirson1.SetAge("25");

	cout << "FirstName : " << Pirson1.GetFirstName() << "\n";
	cout << "LastName  : " << Pirson1.GetLastName() << "\n";
	cout << "Age	  : " << Pirson1.GetAge() << "\n";


	return 0;
}
