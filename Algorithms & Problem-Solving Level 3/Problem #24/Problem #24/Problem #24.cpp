#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//  ﬁÊ„ »ﬁ—«¡… ”·”·… „‰ «·„” Œœ„
string ReadString() {
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

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

int main()
{

    cout << "String after conversion\n" << endl;
    PrintFirstLetterOfEachWord(ReadString());

    return 0;
}