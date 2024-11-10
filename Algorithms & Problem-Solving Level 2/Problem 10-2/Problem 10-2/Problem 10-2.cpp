#include <iostream>
#include <string>
using namespace std;

int ReadNumbers(string Text) {
    int Number;
    do {
        cout << Text << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CheckNumber(int num1) {
    int Remainder = 0;
    int ReversNumber = 0;

    while (num1 > 0) {
        Remainder = num1 % 10;
        num1 /= 10;
        ReversNumber = ReversNumber * 10 + Remainder;
    }
    return ReversNumber;
}

void PrintReversedNumber(int ReversNumber) {
    int Remainder = 0;
    while (ReversNumber > 0) {
        Remainder = ReversNumber % 10;
        ReversNumber /= 10;
        cout << Remainder << endl;
    }
}

int main() {
    //int Number = ReadNumbers("Please Enter a Number");
    //int ReversedNumber = CheckNumber(Number);
    //PrintReversedNumber(ReversedNumber);

    PrintReversedNumber(CheckNumber(ReadNumbers("Please Enter a Number")));

    return 0;
}