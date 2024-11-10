#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string S1;
    cout << "Please Enter Your string?\n";
    getline(cin, S1);
    return S1;
}

char ReadChar() {
    char C1;
    cout << "Please Enter Your char?\n";
    cin>> C1;
    return C1;
}

int CountLetter(string S1 , char Litter) {
    int Upper = 0;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] == Litter) {
            Upper++;
        }
    }
    return Upper;
}


int main()
{
    string S1 = ReadString();
    char Litter = ReadChar();

    cout << "Litter " << Litter <<" Count : " << CountLetter(S1, Litter) << endl;

    return 0;
}

