#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter Your string:\n";
    getline(cin, S1);
    return S1;
}

char ReadChar() {
    char C1;
    cout << "Please Enter Your char:\n";
    cin >> C1;
    cin.ignore(); // ÊÌÇåá ÇáãÍÑİ ÇáÌÏíÏ ááÊÃßÏ ãä ŞÑÇÁÉ getline() ÈÔßá ÕÍíÍ
    return C1;
}

char InvertLetterCase(char S1) {
    return isupper(S1) ? tolower(S1) : toupper(S1);
}

int CountLetter(string S1, char Letter, bool MatchCase = true) {

    int Counter = 0;

    for (int i = 0; i < S1.length(); i++) {

        if (MatchCase) {
            if (S1[i] == Letter)
                Counter++;
        }
        else {
            if (tolower(S1[i]) == tolower(Letter))
                Counter++;
        }

    }
    return Counter;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1);
    cout << "\nLetter \'" << Ch1 << "\' ";
    cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
    cout << " Count = " << CountLetter(S1, Ch1, false);

    return 0;
}