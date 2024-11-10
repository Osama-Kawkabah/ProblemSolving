#include <iostream>
#include <string>
using namespace std;

//  ﬁÊ„ »ﬁ—«¡… ”·”·… „‰ «·„” Œœ„
string ReadString() {
    string S1;
    cout << "Please Enter Your char?\n";
    getline(cin, S1);
    return S1;
}

int LengthArray(string S1) {
    int Length = 0;
    return S1.length();
}

int CountSmallLetters(string S1) {
    int Lower = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i])) {
            Lower++;
        }
    }

    return Lower;
}

int CountCapitalLetters(string S1) {
    int Upper = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i])) {
            Upper++;
        }
    }

    return Upper;
}


int main()
{

    //string S1 = "Osama Ali Yahaya Haseen  Kokabah";
    string S1 = ReadString();

    cout << "Length           : " << LengthArray(S1) << endl;;
    cout << "Small Letters    : " << CountSmallLetters(S1) << endl;;
    cout << "Capital Letters  : " << CountCapitalLetters(S1) << endl;;

    return 0;
}

