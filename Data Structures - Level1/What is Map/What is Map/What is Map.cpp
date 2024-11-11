#include <iostream>
#include <map>

using namespace std;

int main() {
    // ����� ����� ������� �� ��� string ���� �� ��� int
    map<string, int> studentGrades;

    // ����� ����� ������ ����
    studentGrades["Ali"] = 77;     // ����� ���� 77 ������ "Ali"
    studentGrades["Ahmed"] = 85;   // ����� ���� 85 ������ "Ahmed"
    studentGrades["Fadi"] = 95;    // ����� ���� 95 ������ "Fadi"

    // ����� ���� ��� �������
    cout << "\nPrinting all map values..\n\n";
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    // ����� ���� ���� ����
    string studentName = "Fadi";
    if (studentGrades.find(studentName) != studentGrades.end()) {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    }
    else {
        cout << "Grade not found for " << studentName << endl;
    }

    // ��� ���� ���� ����
    string studentToDelete = "Ahmed";
    auto it = studentGrades.find(studentToDelete);
    if (it != studentGrades.end()) {
        studentGrades.erase(it);
        cout << "Deleted " << studentToDelete << "'s grade." << endl;
    }
    else {
        cout << "Grade not found for " << studentToDelete << endl;
    }

    // ����� ���� ��� ������� ��� ����� �����
    cout << "\nPrinting all map values after deletion..\n\n";
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    return 0;
}
