#include <iostream>

using namespace std;

// ÊÚÑíİ Çáåíßá ÇáÈíÇäí áÊãËíá ÊÇÑíÎ
struct stDate {
    short Day;
    short Month;
    short Year;
};

// ÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚÇã Year ßÈíÓíğÇ
bool isLeapYear(short Year) {
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

// ÇÍÓÈ ÚÏÏ ÇáÃíÇã İí ÇáÔåÑ Month ááÚÇã Year
short numberOfDaysInMonth(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    const short days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short numberOfDaysInMonth(stDate Date) {
    return numberOfDaysInMonth(Date.Month, Date.Year);
}

// ÊÍŞŞ ããÇ ÅĞÇ ßÇä Çáíæã İí ÇáÊÇÑíÎ Date ÂÎÑ íæã İí ÇáÔåÑ
bool isLastDayInMonth(stDate Date) {
    return (Date.Day == numberOfDaysInMonth(Date.Month, Date.Year));
}

// ÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÔåÑ Month ÂÎÑ ÔåÑ İí ÇáÚÇã
bool isLastMonthInYear(short Month) {
    return (Month == 12);
}

bool isYearTrue(short Year) {
    return Year > 1500;
}

bool isValidDate(stDate Date) {
    if (Date.Day < 1 || Date.Day > numberOfDaysInMonth(Date)) {
        cout << "\nError: Invalid Day for the given Month and Year." << endl;
        return false;
    }
    if (Date.Month < 1 || Date.Month > 12) {
        cout << "\nError: Invalid Month. Month should be between 1 and 12." << endl;
        return false;
    }
    if (!isYearTrue(Date.Year)) {
        cout << "\nError: Invalid Year. Year should be greater than 1500." << endl;
        return false;
    }
    //-----------
    return true;
}

// ŞÑÇÁÉ Çáíæã ãä ÇáãÓÊÎÏã
short readDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

// ŞÑÇÁÉ ÇáÔåÑ ãä ÇáãÓÊÎÏã
short readMonth() {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

// ŞÑÇÁÉ ÇáÓäÉ ãä ÇáãÓÊÎÏã
short readYear() {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// ŞÑÇÁÉ ÇáÊÇÑíÎ ÇáßÇãá ãä ÇáãÓÊÎÏã
stDate readFullDate() {
    stDate Date;
    Date.Day = readDay();
    Date.Month = readMonth();
    Date.Year = readYear();
    return Date;
}

// ÏÇáÉ main ÇáÊí ÊÔÛá ÇáÈÑäÇãÌ ÇáÑÆíÓíÉ
int main() {
    stDate Date = readFullDate();

    if (isValidDate(Date))
        cout << "Yes, Date Is Valid." << endl;

    return 0;
}
