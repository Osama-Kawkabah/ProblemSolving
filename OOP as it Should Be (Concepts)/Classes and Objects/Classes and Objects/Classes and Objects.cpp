#include <iostream>
#include <string>
using namespace std;

class Inf {
private:
    string FullName;
    int Password;

public:
    string FirstName;
    string LastName;
    string Age;
    string Job; 
    short Salary; 
    string Skills; 

    void Informa() {
        cout << "FirstName: " << FirstName << "\n";
        cout << "LastName : " << LastName << "\n";
        cout << "Age      : " << Age << "\n";
        cout << "Job      : " << Job << "\n";
        cout << "Salary   : " << Salary << "\n";
        cout << "Skills   : " << Skills << "\n";
    }

};


int main() {
    Inf Person1; 

    Person1.FirstName = "Osama Ali";
    Person1.LastName = "Kokabah";
    Person1.Age = "25";
    Person1.Job = "Programming"; 
    Person1.Salary = 9000; 
    Person1.Skills = "Full Stack";

    Person1.Informa();

    return 0;
}
