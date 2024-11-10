#include<iostream>
using namespace std;

// ����� ���� stDate ������ ��������
struct stDate {
    short Year;   // �����
    short Month;  // �����
    short Day;    // �����
};

// ����� ���� stPeriod ������ ������� �������
struct stPeriod {
    stDate StartDate;  // ����� ����� ������
    stDate EndDate;    // ����� ����� ������
};

// ���� ������� ������� ������ ���� ���� ������� ������ (��� ������ ���)
// ������: ����� ������� ��� ������ ������� �������� ������ �������
enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDates(stDate Date1, stDate Date2) {
    if (Date1.Year < Date2.Year)
        return enDateCompare::Before; // ������� ����� ��� ������� ������
    if (Date1.Year > Date2.Year)
        return enDateCompare::After;  // ������� ����� ��� ������� ������

    // ��������� ���� ����ɡ ��� ����� ������
    if (Date1.Month < Date2.Month)
        return enDateCompare::Before; // ������� ����� ��� ������� ������
    if (Date1.Month > Date2.Month)
        return enDateCompare::After;  // ������� ����� ��� ������� ������

    // ��������� ���� ����� �����ѡ ��� ����� ������
    if (Date1.Day < Date2.Day)
        return enDateCompare::Before; // ������� ����� ��� ������� ������
    if (Date1.Day > Date2.Day)
        return enDateCompare::After;  // ������� ����� ��� ������� ������

    // �������� �������
    return enDateCompare::Equal;
}

// ���� �� ��� ��� ����� ���� ����� ��� ���� ����� �����
bool isDateInPeriod(stDate Date, stPeriod Period) {
    return (CompareDates(Date, Period.StartDate) 
        != Before && CompareDates(Date, Period.EndDate) != After);
}

// ���� ������ ����� �� ��������
short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

// ���� ������ ����� �� ��������
short ReadMonth() {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

// ���� ������ ����� �� ��������
short ReadYear() {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// ���� ������ ������� ������ �� ��������
stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

// ���� ������ ���� ����� ����� �� ��������
stPeriod ReadPeriod() {
    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {
    cout << "\nEnter Period :\n";
    stPeriod Period = ReadPeriod();

    cout << "\nEnter Date to check:\n";
    stDate Date = ReadFullDate();

    if (isDateInPeriod(Date, Period))
        cout << "\nYes, Date is within period\n";
    else
        cout << "\nNo, Date is NOT within period\n";

    system("pause>0");
    return 0;
}
