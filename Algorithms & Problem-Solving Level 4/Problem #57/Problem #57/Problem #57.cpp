#include<iostream>
using namespace std;


enum eDate
{
    before = -1,
    Equal = 0,
    After = 1,
};

// ����� struct stDate ������ ��������
struct stDate {
    short Year;
    short Month;
    short Day;
};

// ����� ������ �� ��� ��� ����� 1 ��� ����� 2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
    // ������� ������ �������� ��������� ������ �� �������
    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true :
            (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

// ����� ������ �� ������ ��������
bool IsDate1EqualDate2(stDate Date1, stDate Date2) {
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ?
        ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

// ����� ������ �� ��� ��� ����� 1 ��� ����� 2
bool IsDate1AfterDate2(stDate Date1, stDate Date2) {
    // ������� ������ ������� ������ ������ �� ��� ���� ����� �� ������
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

short CompareDates(stDate D1, stDate D2) {

    if (IsDate1BeforeDate2(D1, D2))
        return eDate::before;
     if (IsDate1EqualDate2(D1, D2))
        return eDate::Equal;

 /*    if (IsDate1AfterDate2(D1, D2))
    return eDate::After;*/

     return eDate::After;


    //return (IsDate1BeforeDate2(D1, D2) ? eDate::before :
    //       (IsDate1EqualDate2(D1, D2) ? eDate::Equal : eDate::After));

}

// ������ ������ ����� ������ ������
short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth() {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

short ReadYear() {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// ����� ������ ������� ������
stDate ReadFullDate() {
    stDate Date;
    // ������� ������� ������ ��� ����� ������ ������
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

int main() {
    cout << "\nEnter Date1:";
    // ����� ����� 1
    stDate Date1 = ReadFullDate();
    cout << "\nEnter Date2:";
    // ����� ����� 2
    stDate Date2 = ReadFullDate();



    // ������� ������ ������ �� ����� ��������
    cout << "\nCompare Result = " << CompareDates(Date1, Date2); 


    system("pause>0");
    return 0;
}
