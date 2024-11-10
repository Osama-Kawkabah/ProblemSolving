#include <iostream>
#include <vector>
using namespace std;

// ���� ������ ���� ��� ����� ������� ������� �������
vector<string> SplitString(string S1, string delim = " ") {
    vector<string> vAllWords; // ������ ������ ������� �������
    short pos = 0;
    string sWord;

    // ����� ��� ����� ����
    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // ������� ������ �� ����� ���� ��� �������
        if (sWord != "") {
            vAllWords.push_back(sWord); // ����� ������ ��� �������� ��� ���� ��� �����
        }
        S1.erase(0, pos + delim.length()); // ��� ������ ��������� �� ����
    }

    if (S1 != "") {
        vAllWords.push_back(S1); // ����� ������ ������� ��� ���� ��� �����
    }
    return vAllWords; // ����� �������� �������
}

// ���� ���� ����� ������� �� ����
string ReverseWords(string S1) {
    vector<string> vString;
    string S2 = "";

    vString = SplitString(S1, " "); // ����� ���� ��� ����� �������� ������� �������

    vector<string>::iterator iter = vString.end();

    // ����� �� ������� ��� ������� ������ ����� �������
    while (iter != vString.begin()) {
        --iter;
        S2 += *iter + " "; // ����� ������ ��� ���� ������� �� ����� ����� �����
    }
    S2 = S2.substr(0, S2.length() - 1); // ����� ������� ������� �������.

    return S2; // ����� ���� �������
}

int main() {
    //cout << ReverseWords("Osama ALAI yAGY jhxvl");

    vector <string>Words{ "Osama", "Ali", "Yahya","Haseen", "Kokabah" };


    vector <string>::iterator item = Words.end();


    while (item != Words.begin())
    {
        item--;
        cout << *item << " ";
    }

    return 0;
}