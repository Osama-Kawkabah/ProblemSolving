#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number) {
    int FreqCount = 0;
    while (Number > 0) {
        int Remainder = Number % 10;
        Number /= 10;
        if (DigitToCheck == Remainder) {
            FreqCount++;
        }
    }
    return FreqCount;
}

void PrintAllDigitsFrequencey(int Number) {
    cout << endl;
    for (int i = 0; i < 10; i++) {
        int DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(i, Number);
        if (DigitFrequency > 0) {
            cout << "Digit " << i << " Frequency is " << DigitFrequency << " Time(s)." << endl;
        }
    }
}

int main() {
    int Number = ReadPositiveNumber("Please enter the a number?"); 
    PrintAllDigitsFrequencey(Number);
    return 0;
}