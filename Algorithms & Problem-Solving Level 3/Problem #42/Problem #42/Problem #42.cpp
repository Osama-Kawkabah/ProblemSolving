#include <iostream>
#include <vector>
using namespace std;

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

string ReverseWords(string S1, string  W1, string  W2) {
    vector<string> vString;
    string S2 = "";

    vString = SplitString(S1, " ");

    for (int i = 0; i < vString.size(); i++)
    {
        if (vString[i] == W1) {

            vString[i] = W2;
        }
        cout << vString[i] << " ";
    }



    return S2;
}

// ����� �� �������
string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo) {
    short pos = S1.find(StringToReplace);
    while (pos != std::string::npos) {
        S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
        pos = S1.find(StringToReplace);//find next  
    }
    return S1;
}


int main()
{
    string S1,S2,S3;
    S1 = "OSMA ALI YAHYA HASEEN KOKABAH KOKABAH";
    cout << "\n" << S1 << "\n" << endl;
    cout << " Please Inter The Words :";
    cin >> S2;
    cout << " Please Inter The alternative :";
    cin >> S3;

    cout << endl;
    cout << ReverseWords(S1, S2, S3);
    //cout << ReplaceWordInStringUsingBuiltInFunction(S1, S2, S3);


    return 0;
}
