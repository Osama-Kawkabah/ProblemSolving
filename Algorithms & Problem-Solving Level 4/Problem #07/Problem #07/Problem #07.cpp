#include<iostream>
using namespace std;

int ReadYear()
{
    short Number;
    cout << "Please enter a Year: " << endl;
    cin >> Number;

    while (cin.fail())
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
    short Number;
    cout << "Please enter a Month: " << endl;
    cin >> Number;

    while (cin.fail() || Number < 0 || Number >= 12)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }
    return Number;
}

int ReadDay()
{
    short Number;
    cout << "Please enter a Day: " << endl;
    cin >> Number;

    while (cin.fail() || Number < 1 || Number >= 31)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }
    return Number;
}

int  daysOfWeek(short Year , short Month, short Day) {

    short  A = (14 - Month) / 12;
    short  Y = Year - A;
    short  M = Month + (12 * A) - 2;
    short  D = (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;

    return D;

}

string NamedaysOfWeek(short Year, short Month, short Day) {

    short DayOfw = daysOfWeek(Year, Month, Day);

    string daysOfWeek[7] = { "Saturday","Sunday", "Monday",
                             "Tuesday", "Wednesday", "Thursday",
                             "Friday" };

    return  daysOfWeek[DayOfw - 1];

}

int main() {

    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();


    cout << "Date       :" << Day << "/" << Month << "/" << Year << endl;
    cout << "Day Order  :" << daysOfWeek(Year, Month, Day) << endl;
    cout << "Day Name   :" << NamedaysOfWeek(Year, Month, Day) << endl;;

    system("pause>0");
    return 0;
}