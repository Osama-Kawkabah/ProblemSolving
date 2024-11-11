#include <iostream>
#include <map>

using namespace std;

int main() {
    // ÅÚáÇä ÎÑíØÉ ÈãİÇÊíÍ ãä äæÚ string æŞíã ãä äæÚ int
    map<string, int> studentGrades;

    // ÅÏÑÇÌ ÏÑÌÇÊ áËáÇËÉ ØáÇÈ
    studentGrades["Ali"] = 77;     // ÊÚííä ÏÑÌÉ 77 ááØÇáÈ "Ali"
    studentGrades["Ahmed"] = 85;   // ÊÚííä ÏÑÌÉ 85 ááØÇáÈ "Ahmed"
    studentGrades["Fadi"] = 95;    // ÊÚííä ÏÑÌÉ 95 ááØÇáÈ "Fadi"

    // ØÈÇÚÉ ÌãíÚ Şíã ÇáÎÑíØÉ
    cout << "\nPrinting all map values..\n\n";
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    // ÅíÌÇÏ ÏÑÌÉ ØÇáÈ ãÚíä
    string studentName = "Fadi";
    if (studentGrades.find(studentName) != studentGrades.end()) {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    }
    else {
        cout << "Grade not found for " << studentName << endl;
    }

    // ÍĞİ ÏÑÌÉ ØÇáÈ ãÚíä
    string studentToDelete = "Ahmed";
    auto it = studentGrades.find(studentToDelete);
    if (it != studentGrades.end()) {
        studentGrades.erase(it);
        cout << "Deleted " << studentToDelete << "'s grade." << endl;
    }
    else {
        cout << "Grade not found for " << studentToDelete << endl;
    }

    // ØÈÇÚÉ ÌãíÚ Şíã ÇáÎÑíØÉ ÈÚÏ ÚãáíÉ ÇáÍĞİ
    cout << "\nPrinting all map values after deletion..\n\n";
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    return 0;
}
