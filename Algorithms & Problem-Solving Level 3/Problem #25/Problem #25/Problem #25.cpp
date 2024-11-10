#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

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

int main()
{


    cout << "String after conversion\n" << endl;

    string S1 = PrintFirstLetterOfEachWord(ReadString());

    cout << S1 << endl;

    return 0;
}