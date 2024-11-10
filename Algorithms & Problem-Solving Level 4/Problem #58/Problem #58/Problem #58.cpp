#include <iostream>
using namespace std;
// ÊÚÑíİ åíßá áÊãËíá ÊÇÑíÎ
struct stDate {
    short Year; // ÇáÓäÉ
    short Month; // ÇáÔåÑ
    short Day; // Çáíæã
};

// ÊÚÑíİ åíßá áÊãËíá İÊÑÉ ÒãäíÉ
struct stPeriod {
    stDate StartDate; // ÊÇÑíÎ ÇáÈÏÇíÉ
    stDate EndDate; // ÊÇÑíÎ ÇáäåÇíÉ
};

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÊÇÑíÎ 1 ŞÈá ÊÇÑíÎ 2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
    return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÊÇÑíÎ 1 íÓÇæí ÊÇÑíÎ 2
bool IsDate1EqualDate2(stDate Date1, stDate Date2) {
    return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÊÇÑíÎ 1 ÈÚÏ ÊÇÑíÎ 2
bool IsDate1AfterDate2(stDate Date1, stDate Date2) {
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

// ÊÚÑíİ ÊÚÏÇÏí ááãŞÇÑäÉ Èíä ÇáÊæÇÑíÎ
enum enDateCompare {
    Before = -1, // ŞÈá
    Equal = 0, // íÓÇæí
    After = 1 // ÈÚÏ
};

// ÏÇáÉ áãŞÇÑäÉ ÇáÊæÇÑíÎ
enDateCompare CompareDates(stDate Date1, stDate Date2) {
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;
    if (IsDate1EqualDate2(Date1, Date2))
        return enDateCompare::Equal;
    return enDateCompare::After;
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇäÊ ÇáİÊÑÇÊ ÊÊÏÇÎá
bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2) {
    // ÇáÊÍŞŞ ãä Ãä ÊÇÑíÎ ÇáäåÇíÉ ááİÊÑÉ ÇáËÇäíÉ ŞÈá ÊÇÑíÎ ÇáÈÏÇíÉ ááİÊÑÉ ÇáÃæáì
   // Ãæ Ãä ÊÇÑíÎ ÇáÈÏÇíÉ ááİÊÑÉ ÇáËÇäíÉ ÈÚÏ ÊÇÑíÎ ÇáäåÇíÉ ááİÊÑÉ ÇáÃæáì
   // ÅĞÇ ßÇä ÃÍÏ åĞå ÇáÔÑæØ ãÓÊæİíÇğ¡ İáÇ ÊæÌÏ ÊÏÇÎá Èíä ÇáİÊÑÊíä
    if (CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before ||
        CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
        return false;
    else
        return true;
}

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

stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

stPeriod ReadPeriod() {
    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

int main() {
    cout << "\nEnter Period 1:";
    stPeriod Period1 = ReadPeriod();

    cout << "\nEnter Period 2:";
    stPeriod Period2 = ReadPeriod();

    if (IsOverlapPeriods(Period1, Period2))
        cout << "\nYes, Periods Overlap\n";
    else
        cout << "\nNo, Periods do not Overlap\n";

    system("pause>0");
    return 0;
}



