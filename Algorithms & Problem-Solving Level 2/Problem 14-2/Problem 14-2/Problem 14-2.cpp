#include <iostream>
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Text) {
    int Number;
    do {
        cout << Text << " : ";
        cin >> Number;
    } while (Number <= 0 || Number > 26);
    return Number;
}

void PrintInfirtedNumber(int Number) {
    cout << "\n";
    for (int i = Number + 64; i > 64; i--)
    {
        for (int k = i - 64; k > 0; k--)
        {
            cout << char(i);
        }
        cout << endl;
    }
};
void PrintInvertedLetterPattern(int Number) {
    for (int i = Number; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << char(i + 64);
        }
        cout << endl;
    }
}
int main()
{
    //PrintInfirtedNumber(ReadPositiveNumber("Plesea Inter Number"));

    PrintInvertedLetterPattern(ReadPositiveNumber("Plesea Inter Number"));
    return 0;
}

