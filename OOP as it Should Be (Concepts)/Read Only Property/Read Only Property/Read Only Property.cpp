#include <iostream>
using namespace std;

class claPirson
{
private:
	string _FirstName;
	int _ID = 3902;
	string _LastName;
	string _Age;

public:
	//Property Get _ID
	int GetID() {
		return _ID;
	}

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

	__declspec(property(get = GetFirstName, put = SetFirstName))string FirstName;
	__declspec(property(get = GetLastName, put = SetLastName))string LastName;
	__declspec(property(get = GetAge, put = SetAge))string Age;
};


int main()
{
	claPirson Pirson1;
	Pirson1.FirstName = "Osama Ali";
	Pirson1.LastName = "Kokaba";
	Pirson1.Age = "25";

	cout << "\n ID	  : " << Pirson1.GetID() << "\n";
	cout << " FirstName : " << Pirson1.FirstName << "\n";
	cout << " LastName  : " << Pirson1.LastName << "\n";
	cout << " Age	  : " << Pirson1.Age << "\n";


	return 0;
}
