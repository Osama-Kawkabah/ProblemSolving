#include <iostream>
using namespace std;

//  ⁄—Ì› «·ÂÌﬂ· «·»Ì«‰Ì · „ÀÌ·  «—ÌŒ
struct stDate {
    short Day;
    short Month;
    short Year;
};

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «· «—ÌŒ Date1 ﬁ»· «· «—ÌŒ Date2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
    if (Date1.Year < Date2.Year)
        return true;
    else if (Date1.Year == Date2.Year) {
        if (Date1.Month < Date2.Month)
            return true;
        else if (Date1.Month == Date2.Month) {
            if (Date1.Day < Date2.Day)
                return true;
        }
    }
    return false;
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «· «—ÌŒ Date1 „”«ÊÌ« ·· «—ÌŒ Date2
bool IsDate1EqualDate2(stDate Date1, stDate Date2) {
    return (Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day == Date2.Day);
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «· «—ÌŒ Date1 »⁄œ «· «—ÌŒ Date2
bool IsDate1AfterDate2(stDate Date1, stDate Date2) {
    return !IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2);
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «·⁄«„ Year ﬂ»Ì”Ì«
bool isLeapYear(short Year) {
    return ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0));
}

// «Õ”» ⁄œœ «·√Ì«„ ›Ì «·‘Â— Month ··⁄«„ Year
short NumberOfDaysInAMonth(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «·ÌÊ„ ›Ì «· «—ÌŒ Date ¬Œ— ÌÊ„ ›Ì «·‘Â—
bool IsLastDayInMonth(stDate Date) {
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «·‘Â— Month ¬Œ— ‘Â— ›Ì «·⁄«„
bool IsLastMonthInYear(short Month) {
    return (Month == 12);
}

// “Ì«œ… «· «—ÌŒ »ÌÊ„ Ê«Õœ
stDate IncreaseDateByOneDay(stDate Date) {
    if (IsLastDayInMonth(Date)) {
        if (IsLastMonthInYear(Date.Month)) {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else {
        Date.Day++;
    }

    return Date;
}

//  ⁄—Ì› «· ⁄»Ì—«  «·„„ﬂ‰… ·„ﬁ«—‰… «· Ê«—ÌŒ
enum enDateCompare { Before = -1, Equal = 0, After = 1 };

// ﬁ«—‰ »Ì‰  Ê«—ÌŒ Date1 Ê Date2
enDateCompare CompareDates(stDate Date1, stDate Date2) {
    if (IsDate1BeforeDate2(Date1, Date2))
        return enDateCompare::Before;
    if (IsDate1EqualDate2(Date1, Date2))
        return enDateCompare::Equal;
    return enDateCompare::After;
}

//  ⁄—Ì› «·ÂÌﬂ· «·»Ì«‰Ì · „ÀÌ· › —… “„‰Ì…
struct stPeriod {
    stDate StartDate;
    stDate EndDate;
};

//  Õﬁﬁ „„« ≈–« ﬂ«‰  «·› — Ì‰ Period1 Ê Period2   œ«Œ·«‰
bool IsOverlapPeriods(stPeriod Period1, stPeriod Period2) {
    if (CompareDates(Period2.EndDate, Period1.StartDate) == enDateCompare::Before ||
        CompareDates(Period2.StartDate, Period1.EndDate) == enDateCompare::After)
        return false;
    return true;
}

//  Õﬁﬁ „„« ≈–« ﬂ«‰ «· «—ÌŒ Date ÷„‰ «·› —… «·“„‰Ì… Period
bool isDateInPeriod(stDate Date, stPeriod Period) {
    return !(CompareDates(Date, Period.StartDate) == enDateCompare::Before ||
        CompareDates(Date, Period.EndDate) == enDateCompare::After);
}

// «Õ”» «·›«—ﬁ »Ì‰ «· Ê«—ÌŒ Date1 Ê Date2 »«·√Ì«„
int GetDifferenceInDays(stDate Date1, stDate Date2, bool IncludeEndDay = false) {
    int Days = 0;
    while (IsDate1BeforeDate2(Date1, Date2)) {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return IncludeEndDay ? ++Days : Days;
}

// «Õ”» ÿÊ· «·› —… «·“„‰Ì… Period »«·√Ì«„
int PeriodLengthInDays(stPeriod Period, bool IncludeEndDate = false) {
    return GetDifferenceInDays(Period.StartDate, Period.EndDate, IncludeEndDate);
}

// «Õ”» ⁄œœ «·√Ì«„ «· Ì   œ«Œ· »Ì‰ «·› — Ì‰ Period1 Ê Period2
int CountOverlapDays(stPeriod Period1, stPeriod Period2) {
    int Period1Length = PeriodLengthInDays(Period1, true);
    int Period2Length = PeriodLengthInDays(Period2, true);
    int OverlapDays = 0;

    if (!IsOverlapPeriods(Period1, Period2))
        return 0;

    if (Period1Length < Period2Length) {
        while (IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate)) {
            if (isDateInPeriod(Period1.StartDate, Period2))
                OverlapDays++;
            Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        }
    }
    else {
        while (IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate)) {
            if (isDateInPeriod(Period2.StartDate, Period1))
                OverlapDays++;
            Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        }
    }

    return OverlapDays;
}

// ﬁ—«¡… «·ÌÊ„ „‰ «·„” Œœ„
short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

// ﬁ—«¡… «·‘Â— „‰ «·„” Œœ„
short ReadMonth() {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

// ﬁ—«¡… «·”‰… „‰ «·„” Œœ„
short ReadYear() {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// ﬁ—«¡… «· «—ÌŒ «·ﬂ«„· „‰ «·„” Œœ„
stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

// ﬁ—«¡… «·› —… «·“„‰Ì… „‰ «·„” Œœ„
stPeriod ReadPeriod() {
    stPeriod Period;
    cout << "\nEnter Start Date:\n";
    Period.StartDate = ReadFullDate();
    cout << "\nEnter End Date:\n";
    Period.EndDate = ReadFullDate();
    return Period;
}

// œ«·… main «· Ì  ‘€· «·»—‰«„Ã «·—∆Ì”Ì…
int main() {
    cout << "\nEnter Period 1 :\n";
    stPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2 :\n";
    stPeriod Period2 = ReadPeriod();
    cout << "\nOverlap Days Count Is: " << CountOverlapDays(Period1, Period2);
    system("pause>0");
    return 0;
}
