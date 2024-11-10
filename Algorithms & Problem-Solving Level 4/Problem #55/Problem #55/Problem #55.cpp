#include <iostream>
using namespace std;

// åíßá áÊãËíá ÇáÊÇÑíÎ
struct stDate
{
    short Year; // ÇáÓäÉ
    short Month; // ÇáÔåÑ
    short Day; // Çáíæã
};

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇäÊ ÇáÓäÉ ÓäÉ ßÈíÓÉ
bool isLeapYear(short Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÊÇÑíÎ 1 ŞÈá ÇáÊÇÑíÎ 2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

// ÏÇáÉ áÅÚØÇÁ ÚÏÏ ÇáÃíÇã İí ÔåÑ ãÚíä ãä ÓäÉ ãÚíäÉ
short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä Çáíæã ÇáÍÇáí åæ ÂÎÑ íæã İí ÇáÔåÑ
bool IsLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÔåÑ ÇáÍÇáí åæ ÂÎÑ ÔåÑ İí ÇáÓäÉ
bool IsLastMonthInYear(short Month)
{
    return (Month == 12);
}

// ÏÇáÉ áÒíÇÏÉ ÇáÊÇÑíÎ Èíæã æÇÍÏ
stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Month = 1;
            Date.Day = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
}

// ÏÇáÉ áÍÓÇÈ ÊÑÊíÈ íæã ÇáÃÓÈæÚ (0: ÇáÃÍÏ¡ 1: ÇáÇËäíä¡ ...¡ 6: ÇáÓÈÊ)
short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;
    // ÊÑÊíÈ ÇáÃíÇã: 0: ÇáÃÍÏ¡ 1: ÇáÇËäíä¡ ...
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// ÏÇáÉ áÍÓÇÈ ÊÑÊíÈ íæã ÇáÃÓÈæÚ áÊÇÑíÎ ãÚíä
short DayOfWeekOrder(stDate Date)
{
    return DayOfWeekOrder(Date.Day, Date.Month, Date.Year);
}

// ÏÇáÉ áÅÑÌÇÚ ÇáÇÓã ÇáãÎÊÕÑ áíæã ãÚíä
string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÊÇÑíÎ ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ (ÇáÌãÚÉ Ãæ ÇáÓÈÊ)
bool IsWeekEnd(stDate Date)
{
    // ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ åí ÇáÌãÚÉ æÇáÓÈÊ
    short DayIndex = DayOfWeekOrder(Date);
    return (DayIndex == 5 || DayIndex == 6);
}

// ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÊÇÑíÎ íæã Úãá (áíÓ ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ)
bool IsBusinessDay(stDate Date)
{
    // ÇáÚØáÉ äåÇíÉ ÇáÃÓÈæÚ åí ÇáÃÍÏ¡ ÇáÇËäíä¡ ÇáËáÇËÇÁ¡ ÇáÃÑÈÚÇÁ¡ æÇáÎãíÓ
    // ÇáØÑíŞÉ ÇáÃŞÕÑ åí ÇÓÊÎÏÇã ÚßÓ IsWeekEnd: æåĞÇ ÓíæİÑ ÊÍÏíË ÇáßæÏ.
    return !IsWeekEnd(Date);
}

// ÏÇáÉ áŞÑÇÁÉ Çáíæã ãä ÇáãÓÊÎÏã
short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

// ÏÇáÉ áŞÑÇÁÉ ÇáÔåÑ ãä ÇáãÓÊÎÏã
short ReadMonth()
{
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

// ÏÇáÉ áŞÑÇÁÉ ÇáÓäÉ ãä ÇáãÓÊÎÏã
short ReadYear()
{
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// ÏÇáÉ áŞÑÇÁÉ ÇáÊÇÑíÎ ÇáßÇãá ãä ÇáãÓÊÎÏã
stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

// ÏÇáÉ áÍÓÇÈ ÊÇÑíÎ ÇáÚæÏÉ ãä ÇáÅÌÇÒÉ
stDate CalculateVacationReturnDate(stDate DateFrom, short VacationDays)
{
    short WeekEndCounter = 0;

    // İí ÍÇáÉ ßÇä ÇáÊÇÑíÎ íæã ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ¡ ÇÓÊãÑ İí ÅÖÇİÉ íæã æÇÍÏ ÍÊì äÕá Åáì íæã Úãá.
    // äÊÎáÕ ãä ÌãíÚ ÚØáÇÊ äåÇíÉ ÇáÃÓÈæÚ ŞÈá Çáíæã ÇáÃæá ãä ÇáÚãá.
    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    // åäÇ äÒíÏ ÚÏÏ ÃíÇã ÇáÅÌÇÒÉ áäÖíİ ßá ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ ÅáíåÇ.
    for (short i = 1; i <= VacationDays + WeekEndCounter; i++)
    {
        if (IsWeekEnd(DateFrom))
            WeekEndCounter++;
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    // İí ÍÇáÉ ßÇä ÊÇÑíÎ ÇáÚæÏÉ íæã ÚØáÉ äåÇíÉ ÇáÃÓÈæÚ¡ ÇÓÊãÑ İí ÅÖÇİÉ íæã æÇÍÏ ÍÊì äÕá Åáì íæã Úãá.
    while (IsWeekEnd(DateFrom))
    {
        DateFrom = IncreaseDateByOneDay(DateFrom);
    }

    return DateFrom;
}

// ÏÇáÉ áŞÑÇÁÉ ÚÏÏ ÃíÇã ÇáÅÌÇÒÉ ãä ÇáãÓÊÎÏã
short ReadVacationDays()
{
    short Days;
    cout << "\nPlease enter vacation days? ";
    cin >> Days;
    return Days;
}

int main()
{
    cout << "\nVacation Starts: ";
    stDate DateFrom = ReadFullDate();

    short VacationDays = ReadVacationDays();

    stDate ReturnDate = CalculateVacationReturnDate(DateFrom, VacationDays);

    cout << "\n\nReturn Date: " << DayShortName(DayOfWeekOrder(ReturnDate)) << " , "
        << ReturnDate.Day << "/" << ReturnDate.Month << "/" << ReturnDate.Year << endl;

    system("pause>0");
    return 0;
}
