#include <iostream>
using namespace std;

// ���� ��� ��� ����� ��� ����� �� ��
bool isLeapYear(short Year) {
    // ��� ��� ����� ���� ������ ��� 4 ���� ���� ������ ��� 100
    // �� ��� ��� ����� ���� ������ ��� 400
    // ���� ����� ��� �����
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// ���� ����� ��� ������� ������ ����
short DayOfWeekOrder(short Day, short Month, short Year) {
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // ������� ���������: 0: ����ϡ 1: ������� 2: �������� ... ���
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// ���� ��� ��� ����� �������� ��� ����� ��� �������
string DayShortName(short DayOfWeekOrder) {
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

// ���� ��� ������ �� ��� ����
short NumberOfDaysInAMonth(short Month, short Year) {

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// ���� ��� ����� ������� �������� ��� ��� �����
string MonthShortName(short MonthNumber) {
    string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return Months[MonthNumber - 1];
}

// ���� ������ ����� �����
void PrintMonthCalendar(short Month, short Year) {
    int NumberOfDays;
    // ����� ��� ������� �� 0 ��� 6
    int current = DayOfWeekOrder(1, Month, Year);
    NumberOfDays = NumberOfDaysInAMonth(Month, Year);

    // ����� ��� ����� ������
    printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

    // ����� �������
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // ����� �������� ��������
    int i;
    for (i = 0; i < current; i++)
        printf("     ");

    for (int j = 1; j <= NumberOfDays; j++) {
        printf("%5d", j);
        if (++i == 7) {
            i = 0;
            printf("\n");
        }
    }

    printf("\n  _________________________________\n");
}

// ���� ������ ����� �� ��������
short ReadMonth() {
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

// ���� ������ ����� �� ��������
short ReadYear() {
    short Year;
    cout << "\nPlease enter a year? ";
    cin >> Year;
    return Year;
}

void PrintAliMonth(short Year) {
    cout << "\n\n\t=====================\n" << endl;
    cout << "\t   Calendar  : " << Year << endl;
    cout << "\n\t=====================" << endl;
    for (int i = 1; i <= 12; i++)
    {
        PrintMonthCalendar(i, Year);
    }
}

int main() {
    // ����� ����� ������ �� ��������
    short Year = ReadYear();

    // ����� ����� �����
    PrintAliMonth(Year);

    system("pause>0");
    return 0;
}