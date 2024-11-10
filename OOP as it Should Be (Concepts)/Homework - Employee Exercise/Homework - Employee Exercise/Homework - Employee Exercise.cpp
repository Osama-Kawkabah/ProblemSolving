#include <iostream>
using namespace std;

class clsEmployee
{
    int _ID;
    string  EmpInfo_FirstName;
    string  EmpInfo_LastName;
    string  EmpInfo_Title;
    string  EmpInfo_Email;
    string  EmpInfo_Phone;
    string  EmpInfo_Salary;
    string  EmpInfo_Department;
public:

    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Salary, string Department)
    {
        _ID = ID;
        EmpInfo_FirstName = FirstName;
        EmpInfo_LastName = LastName;
        EmpInfo_Email = Email;
        EmpInfo_Title = Title;
        EmpInfo_Phone = Phone;
        EmpInfo_Salary = Salary;
        EmpInfo_Department = Department;
    }

    int ID() {
        return _ID;
    }

    void SetFirstName( string& FName) {
        EmpInfo_FirstName = FName;
    }
    string FirstName()  {
        return EmpInfo_FirstName;
    }

    void SetLastName( string& LName) {
        EmpInfo_LastName = LName;
    }
    string LastName()  {
        return EmpInfo_LastName;
    }

    void SetEmail( string& newEmail) {
        EmpInfo_Email = newEmail;
    }
    string Email()  {
        return EmpInfo_Email;
    }

    void SetPhone( string& newPhone) {
        EmpInfo_Phone = newPhone;
    }
    string Phone()  {
        return EmpInfo_Phone;
    }

    void SetSalary( string& newSalary) {
        EmpInfo_Salary = newSalary;
    }
    string Salary()  {
        return EmpInfo_Salary;
    }

    void SetDepartment(string& newDepartment) {
        EmpInfo_Department = newDepartment;
    }
    string Department() {
        return EmpInfo_Department;
    }


    string FullName() {
        return EmpInfo_FirstName + EmpInfo_LastName;
    }

    void Print() {
        cout << "Info:\n";
        cout << "__________________________________\n";
        cout << "ID        : " << _ID << "\n";
        cout << "FirstName : " << EmpInfo_FirstName << "\n";
        cout << "LastName  : " << EmpInfo_LastName << "\n";
        cout << "FullName  : " << FullName() << "\n";
        cout << "Email     : " << EmpInfo_Email << "\n";
        cout << "Phone     : " << EmpInfo_Phone << "\n";
        cout << "Salary    : " << EmpInfo_Salary <<"$" << "\n";
        cout << "Department: " << EmpInfo_Department << "\n";
        cout << "__________________________________\n";
    }

    void SendEmail(string Subject, string Body) {
        cout << "\nThe Following Message Send Successfully To Email: " << EmpInfo_Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body : " << Body << endl;
    }

    void SendSMS(string Body) {
        cout << "\nThe Following Message Send Successfully To Phone: " << EmpInfo_Phone << endl;
        cout << "Body : " << Body << endl;
    }

};

int main()
{
    
    clsEmployee  Employee1(65, "Osama", "Kokabah", "qu798593@gmail.com", "778033464", "Ymene", "90000", "B13");
   
    
    Employee1.Print();
    Employee1.SendEmail("Hi", "How Are You");
    Employee1.SendSMS("PinCode Is : SDY3L2B723");

    system("pause > 0");
    return 0;
}

