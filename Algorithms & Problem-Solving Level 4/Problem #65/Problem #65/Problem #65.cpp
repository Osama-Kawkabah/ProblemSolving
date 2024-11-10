#include<iostream> // ����� ����� ������ ������ �������� �� ���� ������
#include<string> // ����� ����� ���� ������
#include<vector> // ����� ����� ���� ��������� �����������

using namespace std; // ������� ������ ������� ������ C++

// ����� ���� �������� ������ ��������
struct stDate {
    short Year; // ������ �����
    short Month; // ������ �����
    short Day; // ������ �����
};

// ���� ���� ������ ���� ��� ����� �������� ���� ���� ������ ������� �� ������
vector<string> SplitString(string S1, string Delim) {
    vector<string> vString; // ����� ������ ������ �������
    short pos = 0; // ����� ����� ������ ���� ������
    string sWord; // ����� ����� ������ ����� ��������

    // ���� ���� �� ������� ����� ������ ����
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // ������� ����� �� ����� ���� ��� ������
        if (sWord != "") {
            vString.push_back(sWord); // ����� ����� ��� �������� ��� �� ��� ������
        }
        S1.erase(0, pos + Delim.length()); // ��� ����� �������� ������� �� ���� ��������� ����� ������
    }

    if (S1 != "") {
        vString.push_back(S1); // ����� ����� ������ �� ���� ��� �������� ��� ��� ��� ����
    }

    return vString; // ����� �������� ���� ����� ��� ������� ��������� �� ����
}

// ���� ���� ������ ���� ����� ����� ���� �� ����
string ReplaceWordInString(string S1, string StringToReplace, string sRepalceTo) {
    short pos = S1.find(StringToReplace); // ����� �� ���� ������ ������ �������
    while (pos != std::string::npos) { // ���� ����� ��� ��� ������ ��� �� �������
        S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo); // ����� ������ ������� �������
        pos = S1.find(StringToReplace); // ����� �� ������ ������ ������� �������
    }
    return S1; // ����� ���� ��� �������
}

// ���� ���� ������ ������� �� ��� stDate ��� ��
string DateToString(stDate Date) {
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

// ���� ���� ������ ������� �� �� ��� ���� stDate
stDate StringToDate(string DateString) {
    stDate Date; // ����� ����� �� ��� stDate ������ �������
    vector<string> vDate; // ����� ������ ������ ������� �������� �� �������
    vDate = SplitString(DateString, "/"); // ������� ���� ����� ���� ������� ��� �����
    Date.Day = stoi(vDate[0]); // ����� ����� ��� ��� ���� ������� �� ���� ��������
    Date.Month = stoi(vDate[1]); // ����� ����� ��� ��� ���� ������� �� ���� ��������
    Date.Year = stoi(vDate[2]); // ����� ����� ��� ��� ���� ������� �� ���� ��������
    return Date; // ����� ������� ����� stDate
}

// ���� ������ ������� ���� ����� ������
string FormateDate(stDate Date, string DateFormat = "dd/mm/yyyy") {
    string FormattedDateString = ""; // ����� ����� ������ ������� �������� �������
    FormattedDateString = ReplaceWordInString(DateFormat, "dd", to_string(Date.Day)); // ����� ����� �� ������
    FormattedDateString = ReplaceWordInString(FormattedDateString, "mm", to_string(Date.Month)); // ����� ����� �� ������
    FormattedDateString = ReplaceWordInString(FormattedDateString, "yyyy", to_string(Date.Year)); // ����� ����� �� ������
    return FormattedDateString; // ����� ������� �������� �������
}

// ���� ������ ������� ��� �� ��������
string ReadStringDate(string Message) {
    string DateString; // ����� ����� ������ �������
    cout << Message; // ����� ����� ��������
    getline(cin >> ws, DateString); // ����� ������� ��� �� ��������
    return DateString; // ����� ������� ���� ����� ��������
}

// ������ �������� ��������
int main() {
    // ����� ������� �� ��������
    string DateString = ReadStringDate("\nPlease Inter Date dd/mm/yyyy: ");
    // ����� ���� ��� ���� stDate
    stDate Date = StringToDate(DateString);

    // ����� ������� �������� ������
    cout << FormateDate(Date) << "\n";
    cout << FormateDate(Date, "yyyy/dd/mm") << "\n";
    cout << FormateDate(Date, "mm/dd/yyyy") << "\n";
    cout << FormateDate(Date, "mm-dd-yyyy") << "\n";
    cout << FormateDate(Date, "dd-mm-yyyy") << "\n";
    cout << FormateDate(Date, "Day:dd, Month:mm, Year:yyyy") << "\n";

    system("pause>0");
    return 0;
}