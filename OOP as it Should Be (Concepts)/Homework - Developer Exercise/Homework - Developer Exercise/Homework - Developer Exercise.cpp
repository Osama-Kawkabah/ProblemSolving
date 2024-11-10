#include <iostream>
#include <vector>

using namespace std;

class clsPerson
{

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    //Read Only Property
    int ID()
    {
        return _ID;
    }

    //Property Set
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    //Property Get
    string FirstName()
    {
        return _FirstName;
    }

    //Property Set
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    //Property Get
    string LastName()
    {
        return _LastName;
    }

    //Property Set
    void setEmail(string Email)
    {
        _Email = Email;
    }

    //Property Get
    string Email()
    {
        return _Email;
    }

    //Property Set
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    //Property Get
    string Phone()
    {
        return _Phone;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << _Email;
        cout << "\nPhone    : " << _Phone;
        cout << "\n___________________\n";

    }

    void SendEmail(string Subject, string Body)
    {

        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;

    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: " << _Phone;
        cout << "\n" << TextMessage << endl;
    }


};

class clsEmployee : public clsPerson
{

private:
    string _Title;
    string _Department;
    float _Salary;

public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {

        _Title = Title;
        _Department = Department;
        _Salary = Salary;

    }

    //Property Set
    void setTitle(string Title)
    {
        _Title = Title;
    }

    //Property Get
    string Title()
    {
        return _Title;
    }

    //Property Set
    void setDepartment(string Department)
    {
        _Department = Department;
    }

    //Property Get
    string Department()
    {
        return _Department;
    }

    //Property Set
    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    //Property Get
    float Salary()
    {
        return _Salary;
    }

    void Print()
    {

        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();

        cout << "\nTitle     : " << _Title;
        cout << "\nDepartment: " << _Department;
        cout << "\nSalary    : " << _Salary;

        cout << "\n___________________\n";

    }

};

class clsProgramming :public clsEmployee {

private:
    vector <string> _MainProgrammingLanguage;

public:

    clsProgramming(int ID, string FirstName, string LastName, string Email, string Phone,
        string Title, string Department, float Salary, vector <string> MainProgrammingLanguage)

        : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(vector <string> NewMainProgrammingLanguage) {
        _MainProgrammingLanguage = NewMainProgrammingLanguage;
    }
    vector <string> MainProgrammingLanguage() {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n_________________________________________________";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();

        cout << "\nTitle     : " << Title();
        cout << "\nDepartment: " << Department();
        cout << "\nSalary    : " << Salary();
        cout << "\nMainProgrammingLanguage : ";

        int count = 0;
        for (string & i : _MainProgrammingLanguage)
        {
            cout << i;
            if (count < _MainProgrammingLanguage.size() - 1) {
                cout << " - ";
            }
            count++;
        }
        cout << "\n__________________________________________________\n";
    }

};

int main()
{

    clsProgramming Programming1(10, "Osama", "Abu-Eyad", "A@a.com", "778033464", "CEO", "ProgrammingA", 5000, 
               { "C++","C#","HTML","CSS", "JS","Bootstrap","React","NodeJs","PHP" });
    Programming1.Print();

    Programming1.SendEmail("Hi", "How Are You?");
    Programming1.SendSMS("Code Is Y2M32KJDS8");
    system("pause>0");
    return 0;
}