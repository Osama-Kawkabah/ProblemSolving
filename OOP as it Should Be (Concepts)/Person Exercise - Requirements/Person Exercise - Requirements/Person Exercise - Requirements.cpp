#include <iostream>
using namespace std;

class clsPerson {
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string FullName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FullName;
        _Email = Email;
        _Phone = Phone;
    }

    int ID() const {
        return _ID;
    }

    void SetFirstName(const string& FName) {
        _FirstName = FName;
    }
    string FirstName() const {
        return _FirstName;
    }

    void SetLastName(const string& LName) {
        _LastName = LName;
    }
    string LastName() const {
        return _LastName;
    }

    void SetFullName(const string& FullN) {
        _FullName = FullN;
    }
    string FullName() const {
        return _FullName;
    }

    void SetEmail(const string& newEmail) {
        _Email = newEmail;
    }
    string Email() const {
        return _Email;
    }

    void SetPhone(const string& newPhone) {
        _Phone = newPhone;
    }
    string Phone() const {
        return _Phone;
    }

    void Print() {
        cout << "Info:\n";
        cout << "__________________________________\n";
        cout << "ID       :" << _ID << "\n";
        cout << "FirstName:" << _FirstName << "\n";
        cout << "LastName :" << _LastName << "\n";
        cout << "FullName :" << _FullName << "\n";
        cout << "Email    :" << _Email << "\n";
        cout << "Phone    :" << _Phone << "\n";
        cout << "__________________________________\n";
    }

    void SendEmail(string Subject, string Body) {
        cout << "\nThe Following Message Send Successfully To Email: " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body : " << Body << endl;
    }

    void SendSMS(string Body) {
        cout << "\nThe Following Message Send Successfully To Phone: " << _Phone << endl;
        cout << "Body : " << Body << endl;
    }
};


int main()
{
	clsPerson Person1(10, "Osama", "Kokabah", "Osama Ali Kokabah", "qu798593@gmail.com", "778033464");
	Person1.Print();

	Person1.SendEmail("Hi", "How Are You");
	Person1.SendSMS("How Are You");

    system("pause>0");
	return 0;
}
