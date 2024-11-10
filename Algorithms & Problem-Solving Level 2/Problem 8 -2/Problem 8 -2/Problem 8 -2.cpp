#include <iostream>
using namespace std;
int ReadNumbers(string Text) {
    int Number;
    do {
        cout << Text<< endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int  CheckNumber(int num1, int num2) {

    int Order = 0, Count = 0;

    while (num1 > 0)
    {
        Order = num1 % 10;

        num1 = num1 / 10;

        if (num2 == Order)
        {
            Count++;
        }
    };
    return Count;
}

void PrintRepetNumber(int num1, int num2) {
    cout << "Diget" << num2 <<" Friquensy Is : "
         << CheckNumber(num1, num2) 
         <<" Time(s)" << endl;
}

int main()
{
    int Number = ReadNumbers("Please Intre Number");
    short RepetNumber = ReadNumbers("Please Intre Repet Number");
    CheckNumber(Number, RepetNumber);
    PrintRepetNumber(Number, RepetNumber);

    return 0;
};