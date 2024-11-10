#include<iostream>
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


bool isLeapYear(short year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short NumberOfDaysInAYear(short year, short Month) {
  
    if (Month == 2)
    {
        return isLeapYear ? 29 : 28;
    }

    short arr31Days[7] = { 1,3,5,7,8,10,12 };

    for (short i = 1; i <= 7; i++)
    {
        if(arr31Days[i -1] == Month){
            return 31;
        }
    }
    return 30;
}

short NumberOfHoursInAYear(short year, short Month) {
    return NumberOfDaysInAYear(year, Month) * 24;
}

int NumberOfMinutesInAYear(short year, short Month) {
    return NumberOfHoursInAYear(year, Month) * 60;
}

int NumberOfSecondsInAYear(short year, short Month) {
    return NumberOfMinutesInAYear(year, Month) * 60;
}

int main() {

    int Year = ReadYear();
    int Month = ReadMonth();


    cout << "\nNumber of Days    in Month [" << Month << "] is "
        << NumberOfDaysInAYear(Year, Month);
    cout << "\nNumber of Hours   in Month [" << Month << "] is "
        << NumberOfHoursInAYear(Year, Month);
    cout << "\nNumber of Minutes in Month [" << Month << "] is "
        << NumberOfMinutesInAYear(Year, Month);
    cout << "\nNumber of Seconds in Month [" << Month << "] is "
        << NumberOfSecondsInAYear(Year, Month);

    cout << "\n\n";
    return 0;
}