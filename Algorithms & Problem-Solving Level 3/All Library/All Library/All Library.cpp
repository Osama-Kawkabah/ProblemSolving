#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ���� ������ ����� ����� �� �� ���� �� �������
void PrintFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = (char)toupper(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    cout << S1 << endl;
}

//����� �� ��� �� ����� ������ ��� Smoll
string LowerFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = tolower(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}

//����� �� ��� �� ����� ������ ��� Smoll
void UpperFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = (char)toupper(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    cout << S1 << endl;
}

//����� ����� �� ��� ���� ����� ������
char InvertLetterCase(char S1) {
    return isupper(S1) ? tolower(S1) : toupper(S1);
}

// ��� �������� �� ����� 
string TrimLeft(string S1) {
    char delim = ' ';
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != delim) {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}

// ��� �������� �� ������ 
string TrimRight(string S1) {
    char delim = ' ';
    for (int i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != delim) {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

// ��� �������� �� ������� 
string Trim(string S1) {
    return  TrimLeft(TrimRight(S1));

}

// ��� ������� �� ������
int CountWords(string S1) {
    string delim = " ";
    int Counter = 0;
    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            Counter++;
        }

        S1.erase(0, pos + delim.length());

    }
    if (S1 != "") {
        Counter++;
    }
    return Counter;
}

// ����� �� ���� �� ������
void PrintEachWordInString(string S1) {
    string delim = " ";

    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length());

    }

    if (S1 != "") {
        cout << S1 << endl;
    }
}

// ��� �� ���� �� ���� �� ������ ������ ���
//  ��� ������� �� ����� ������� �� ����� �� [] 
vector<string> SplitString(string S1, string delim = " ") {
    vector <string> vAllWords;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vAllWords.push_back(sWord);
        }
        S1.erase(0, pos + delim.length());
    }

    if (S1 != "") {
        vAllWords.push_back(S1);
    }
    return vAllWords;
}

//����� ������ �� ��� ���� ����� ������
string InvertLetterstring(string S1) {
    for (int i = 0; i < S1.length(); i++) {
        if (isupper(S1[i])) {
            S1[i] = tolower(S1[i]);
        }
        else if (islower(S1[i])) {
            S1[i] = toupper(S1[i]);
        }
    }
    return S1;
}


//����� �� VECTOR �� ����� �� �� �� �� ���� ��������
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
string ReplaceWord(string S1, string W1, string W2, bool MatchCase = true) {
    vector<string> vString;
    string S2 = "";
    vString = SplitString(S1, " ");

    for (int i = 0; i < vString.size(); i++) {

        S2 += vString[i] + " ";
    }

    return S2;
}

int main()
{
 
    cout << "String after conversion\n" << endl;




    return;
}

