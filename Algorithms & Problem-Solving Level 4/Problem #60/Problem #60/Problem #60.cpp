#include<iostream>
using namespace std;

// ÊÚÑíİ åíßá stDate áÊãËíá ÇáÊæÇÑíÎ
struct stDate {
    short Year;   // ÇáÓäÉ
    short Month;  // ÇáÔåÑ
    short Day;    // Çáíæã
};

// ÊÚÑíİ åíßá stPeriod áÊãËíá ÇáİÊÑÇÊ ÇáÒãäíÉ
struct stPeriod {
    stDate StartDate;  // ÊÇÑíÎ ÈÏÇíÉ ÇáİÊÑÉ
    stDate EndDate;    // ÊÇÑíÎ äåÇíÉ ÇáİÊÑÉ
};

// ÊŞæã ÈãŞÇÑäÉ ÊÇÑíÎíä æÅÑÌÇÚ ŞíãÉ ÊÈíä ÇáÚáÇŞÉ ÈíäåãÇ (ŞÈá¡ ãÊÓÇæí¡ ÈÚÏ)
// ãáÇÍÙÉ: íãßäß ÇÓÊÎÏÇã åĞå ÇáÏÇáÉ áãŞÇÑäÉ ÇáÊæÇÑíÎ æÊÍÏíÏ ÊÑÊíÈåÇ
enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDates(stDate Date1, stDate Date2) {
    if (Date1.Year < Date2.Year)
        return enDateCompare::Before; // ÇáÊÇÑíÎ ÇáÃæá ŞÈá ÇáÊÇÑíÎ ÇáËÇäí
    if (Date1.Year > Date2.Year)
        return enDateCompare::After;  // ÇáÊÇÑíÎ ÇáÃæá ÈÚÏ ÇáÊÇÑíÎ ÇáËÇäí

    // ÇáÊÇÑíÎÇä ÈäİÓ ÇáÓäÉ¡ áĞÇ äŞÇÑä ÇáÃÔåÑ
    if (Date1.Month < Date2.Month)
        return enDateCompare::Before; // ÇáÊÇÑíÎ ÇáÃæá ŞÈá ÇáÊÇÑíÎ ÇáËÇäí
    if (Date1.Month > Date2.Month)
        return enDateCompare::After;  // ÇáÊÇÑíÎ ÇáÃæá ÈÚÏ ÇáÊÇÑíÎ ÇáËÇäí

    // ÇáÊÇÑíÎÇä ÈäİÓ ÇáÓäÉ æÇáÔåÑ¡ áĞÇ äŞÇÑä ÇáÃíÇã
    if (Date1.Day < Date2.Day)
        return enDateCompare::Before; // ÇáÊÇÑíÎ ÇáÃæá ŞÈá ÇáÊÇÑíÎ ÇáËÇäí
    if (Date1.Day > Date2.Day)
        return enDateCompare::After;  // ÇáÊÇÑíÎ ÇáÃæá ÈÚÏ ÇáÊÇÑíÎ ÇáËÇäí

    // ÇáÊæÇÑíÎ ãÊØÇÈŞÉ
    return enDateCompare::Equal;
}

// íÍÏÏ ãÇ ÅĞÇ ßÇä ÊÇÑíÎ ãÚíä ãæÌæÏ Öãä İÊÑÉ ÒãäíÉ ãÚíäÉ
bool isDateInPeriod(stDate Date, stPeriod Period) {
    return (CompareDates(Date, Period.StartDate) 
        != Before && CompareDates(Date, Period.EndDate) != After);
}

// íŞæã ÈŞÑÇÁÉ Çáíæã ãä ÇáãÓÊÎÏã
short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

// íŞæã ÈŞÑÇÁÉ ÇáÔåÑ ãä ÇáãÓÊÎÏã
short ReadMonth() {
    short Month;
    cout << "Please enter a Month? ";
    cin >> Month;
    return Month;
}

// íŞæã ÈŞÑÇÁÉ ÇáÓäÉ ãä ÇáãÓÊÎÏã
short ReadYear() {
    short Year;
    cout << "Please enter a Year? ";
    cin >> Year;
    return Year;
}

// íŞæã ÈŞÑÇÁÉ ÇáÊÇÑíÎ ßÇãáÇğ ãä ÇáãÓÊÎÏã
stDate ReadFullDate() {
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

// íŞæã ÈŞÑÇÁÉ İÊÑÉ ÒãäíÉ ßÇãáÉ ãä ÇáãÓÊÎÏã
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
