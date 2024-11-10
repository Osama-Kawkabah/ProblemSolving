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
    // Getter Ê Setter ··—ﬁ„ «· ”·”·Ì
    int GetID() { return _ID; }

    // Getter Ê Setter ··—« »
    void SetSalary(int Salary) { _Salary = Salary; }
    int GetSalary() { return _Salary; }

    // Getter Ê Setter ··«”„ «·√Ê·
    void SetFirstName(string FirstName) { _FirstName = FirstName; }
    string GetFirstName() { return _FirstName; }

    // Getter Ê Setter ·«”„ «·⁄«∆·…
    void SetLastName(string LastName) { _LastName = LastName; }
    string GetLastName() { return _LastName; }

    // Getter Ê Setter ··⁄„—
    void SetAge(short Age) { _Age = Age; }
    short GetAge() { return _Age; }

    // «·Œ’«∆’
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;
    __declspec(property(get = GetAge, put = SetAge)) short Age;
    __declspec(property(get = GetSalary, put = SetSalary)) int Salary;
};

int main() {
    // ≈‰‘«¡ ﬂ«∆‰ „‰ «·ﬂ·«” clsPerson
    clsPerson Person1;

    //  ⁄ÌÌ‰ «·ﬁÌ„ ··Œ’«∆’
    Person1.FirstName = "Osama Ali";
    Person1.LastName = "Kokaba";
    Person1.Age = 25;
    Person1.Salary = 90000;

    // ÿ»«⁄… «·ﬁÌ„
    cout << "ID        : " << Person1.GetID() << endl;
    cout << "FirstName : " << Person1.FirstName << endl;
    cout << "LastName  : " << Person1.LastName << endl;
    cout << "Age       : " << Person1.Age << endl;
    cout << "Salary    : " << Person1.Salary << endl;

    return 0;
}
