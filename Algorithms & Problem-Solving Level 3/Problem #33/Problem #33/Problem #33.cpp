#include <iostream>
#include <string>
using namespace std;

enum MyLetter {
    LetterA = 'A',
    LetterO = 'O',
    LetterU = 'U',
    LetterI = 'I',
    LetterE = 'E'
};

string ReadString() {
    string C1;
    cout << "Please Enter Your char:\n";
    getline(cin, C1);
    return C1;
}

int IsVowals(char Letter) {
    Letter = toupper(Letter);

    return  (Letter == MyLetter::LetterA) ||
        (Letter == MyLetter::LetterO) ||
        (Letter == MyLetter::LetterU) ||
        (Letter == MyLetter::LetterI) ||
        (Letter == MyLetter::LetterE);
}

int CountLetterVowels(string Text) {

    int Number = 0;

    for (int i = 0; i < Text.length(); i++)
    {
        if (IsVowals(Text[i]))
        {
            Number++;
        }
    }
    return Number;
}


int main()
{

    cout << "Number Is Vowla Is : " << CountLetterVowels(ReadString()) << endl;;


    return 0;
}