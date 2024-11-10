#include<iostream>
#include<iomanip>
// this library stored the std::setw
using namespace std;
int main() {
    cout << "---------|--------------------------------|---------|" << endl;
    cout << "  Code   |               Name             |  Mark   |" << endl;
    cout << "---------|--------------------------------|---------|" << endl;
    cout << setw(9) << "C101" << "|" << setw(32) << "introduction to Programming 1" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
    cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
    cout << "---------|--------------------------------|---------|" << endl;



    cout << "\n\n\n";
    //---------------------------------------------------------------------------------
    string names[] = { "Ahmed", "Mohammed", "Ali", "Fatima", "Nour", "Yasmine", "Omar", "Sara", "Mahmoud", "Layla",
                      "Khaled", "Reem", "Abdullah", "Zainab", "Nadia", "Ziad", "Salman", "Maryam", "Asmaa", "Hossam" };
    float grades[] = { 85.5, 92.0, 78.5, 88.0, 76.0, 90.5, 81.5, 79.0, 87.5, 95.0,
                      83.5, 89.0, 91.5, 77.0, 84.5, 93.0, 80.0, 88.5, 94.5, 82.0 };

    cout << setw(15) << "First Name" << " | " << setw(15) << "Middle Name" << " | " << setw(15) << "Last Name" << " | " << setw(10) << "Grade" << endl;
    cout << "------------------------------------------------------------" << endl;

    int Count = 20;
    for (int i = 0; i < 20; i++) {
        string firstName = names[i].substr(0, names[i].find(' '));
        string middleName = names[i].substr(names[i].find(' ') + 1, names[i].rfind(' ') - names[i].find(' ') - 1);
        string lastName = names[i].substr(names[i].rfind(' ') + 1);

        cout << setw(15) << firstName << " | " << setw(15) << middleName << " | " << setw(15) << lastName << " | " << setw(10) << grades[i] << endl;
    }


    return 0;
}
