#include <iostream>
#include <string>
using namespace std;

class clsPerson {
private:
    string _FirstName;
    string _LastName;
    int _ID = 3902;
    short _Age;
    int _Salary;

public:
    // Getter � Setter ����� ��������
    int GetID() { return _ID; }

    // Getter � Setter ������
    void SetSalary(int Salary) { _Salary = Salary; }
    int GetSalary() { return _Salary; }

    // Getter � Setter ����� �����
    void SetFirstName(string FirstName) { _FirstName = FirstName; }
    string GetFirstName() { return _FirstName; }

    // Getter � Setter ���� �������
    void SetLastName(string LastName) { _LastName = LastName; }
    string GetLastName() { return _LastName; }

    // Getter � Setter �����
    void SetAge(short Age) { _Age = Age; }
    short GetAge() { return _Age; }

    // �������
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;
    __declspec(property(get = GetAge, put = SetAge)) short Age;
    __declspec(property(get = GetSalary, put = SetSalary)) int Salary;
};

int main() {
    // ����� ���� �� ������ clsPerson
    clsPerson Person1;

    // ����� ����� �������
    Person1.FirstName = "Osama Ali";
    Person1.LastName = "Kokaba";
    Person1.Age = 25;
    Person1.Salary = 90000;

    // ����� �����
    cout << "ID        : " << Person1.GetID() << endl;
    cout << "FirstName : " << Person1.FirstName << endl;
    cout << "LastName  : " << Person1.LastName << endl;
    cout << "Age       : " << Person1.Age << endl;
    cout << "Salary    : " << Person1.Salary << endl;

    return 0;
}
