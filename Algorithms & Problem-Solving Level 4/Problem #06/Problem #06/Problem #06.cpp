#include<iostream>
#include "isLeapYear.h"
using namespace std;

int ReadYear()
{
    int Number;
    cout << "Please enter a number: " << endl;
    cin >> Number;

    while (cin.fail() || Number < 1800 || Number > 2024)
    {
        // ÇáãÓÊÎÏã áã íÏÎá ÚÏÏğÇ ÕÍíÍğÇ
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }
    return Number;
}

int ReadMonth()
{
    int Number;
    cout << "Please enter a Month: " << endl;
    cin >> Number;

    while (cin.fail() || Number < 0 || Number > 13)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }
    return Number;
}

short NumberOfDaysInAYear(short year, short M) {

    int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    return (M == 2) ? IsLeapYear::isLeapYear((year)) ? 29 : 28 : NumberOfDays[M - 1];
}

int main() {

    int Year = ReadYear();
    int Month = ReadMonth();

    cout << "\nNumber of Days    in Month [" << Month << "] is "
        << NumberOfDaysInAYear(Year, Month);

    system("pause>0");
    return 0;
}