#pragma warning(disable:4996)
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

int ReadNumber()
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

int NumberOfDaysInAYear(int year) {

    int days = 365;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        days = 366;
    }

    return days;

}

int NumberOfHoursInAYear(int year) {

    int days = NumberOfDaysInAYear(year);
    int hours = days * 24;
    return hours;

}

int NumberOfMinutesInAYear(int year) {

    int days = NumberOfDaysInAYear(year);
    int hours = days * 24 * 60;
    return hours;
}

int NumberOfSecondsInAYear(int year) {

    int days = NumberOfDaysInAYear(year);
    int hours = days * 24 * 60 * 60;
    return hours;
}

int main() {

    int Year = ReadNumber();
    cout << "\nNumber of Days    in Year [" << Year << "] is " << NumberOfDaysInAYear(Year);
    cout << "\nNumber of Hours   in Year [" << Year << "] is " << NumberOfHoursInAYear(Year);
    cout << "\nNumber of Minutes in Year [" << Year << "] is " << NumberOfMinutesInAYear(Year);
    cout << "\nNumber of Seconds in Year [" << Year << "] is " << NumberOfSecondsInAYear(Year);

    cout << "\n\n";
    return 0;
}