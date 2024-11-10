#include <iostream>
using namespace std;

// ���� ������ ����� �� ��������
short ReadYear() {
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

// ���� ������ ����� �� ��������
short ReadMonth() {
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

// ���� ������ ����� �� ��������
short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}


// ���� ��� ��� ����� ��� ����� �� ��
bool isLeapYear(short Year) {
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}


// ���� ��� ������ �� ��� ����
short NumberOfDaysInAMonth(short Month, short Year) {
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

int NumberOfDaysFromTheBeginingOfTheYear(short Year,short Month, short Day) {

    int CountDays = 0;

    for (int i = 1; i < Month; i++)
    {
        CountDays += NumberOfDaysInAMonth(i, Year);
    }

    return CountDays + Day;
}


int main() {
    // ����� ����� ������ �� ��������
    short Day = ReadDay();
    short Month = ReadMonth();
    short Year = ReadYear();

    cout << "\nNumber of Days from the begining of the year is : " 
         << NumberOfDaysFromTheBeginingOfTheYear(Year, Month, Day);


    system("pause>0");
    return 0;
}