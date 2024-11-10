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

char ReadChar() {
    char C1;
    cout << "Please Enter Your char:\n";
    cin >> C1;
    cin.ignore(); // ÊÌÇåá ÇáãÍÑİ ÇáÌÏíÏ ááÊÃßÏ ãä ŞÑÇÁÉ getline() ÈÔßá ÕÍíÍ
    return C1;
}

//int CountLetter(char Letter) {
//   
//    if (Letter == MyLetter::LetterA || Letter == tolower(MyLetter::LetterA))
//    {
//        return true;
//    }
//    else  if (Letter == MyLetter::LetterO || Letter == tolower(MyLetter::LetterO))
//    {
//        return true;
//    }
//    else  if (Letter == MyLetter::LetterU || Letter == tolower(MyLetter::LetterU))
//    {
//        return true;
//    }
//    else  if (Letter == MyLetter::LetterI || Letter == tolower(MyLetter::LetterI))
//    {
//        return true;
//    }
//    else  if (Letter == MyLetter::LetterE || Letter == tolower(MyLetter::LetterE))
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}

int CountLetter2(char Letter) {
    Letter = toupper(Letter);

    return  (Letter == MyLetter::LetterA) ||
            (Letter == MyLetter::LetterO) ||
            (Letter == MyLetter::LetterU) ||
            (Letter == MyLetter::LetterI) ||
            (Letter == MyLetter::LetterE);
}

void CheckTheLetter(char Letter) {

    if (CountLetter2(Letter))
        cout << "Yes : Letter \'" << Letter << "'\ IS vowel" << endl;
    else
        cout << "No : Letter \'" << Letter << "'\ IS Not vowel" << endl;
}

int main()
{
    char Ch1 = ReadChar();

    CountLetter2(Ch1);
    CheckTheLetter(Ch1);



    return 0;
}