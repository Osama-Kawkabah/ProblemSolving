#include <iostream>
using namespace std;

// ÊÚíä ÇĞÇ ßÇä ÇáÚÇã ÓäÉ ßÈíÓÉ Ãã áÇ
bool isLeapYear(short Year) {
    // ÅĞÇ ßÇä ÇáÚÇã ŞÇÈá ááŞÓãÉ Úáì 4 æáíÓ ŞÇÈá ááŞÓãÉ Úáì 100
    // Ãæ ÅĞÇ ßÇä ÇáÚÇã ŞÇÈá ááŞÓãÉ Úáì 400
    // İÅäå íÚÊÈÑ ÓäÉ ßÈíÓÉ
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

// íÍÓÈ ÊÑÊíÈ íæã ÇáÃÓÈæÚ áÊÇÑíÎ ãÍÏÏ
short DayOfWeekOrder(short Day, short Month, short Year) {
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // ÇáÊŞæíã ÇáÛÑíÛæÑí: 0: ÇáÃÍÏ¡ 1: ÇáÇËäíä¡ 2: ÇáËáÇËÇÁ ... ÅáÎ
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// íÚíÏ ÇÓã íæã ãÎÊÕÑ ÇÓÊäÇÏğÇ Åáì ÊÑÊíÈ íæã ÇáÃÓÈæÚ
string DayShortName(short DayOfWeekOrder) {
    string arrDayNames[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    return arrDayNames[DayOfWeekOrder];
}

// íÚíÏ ÚÏÏ ÇáÃíÇã İí ÔåÑ ãÍÏÏ
short NumberOfDaysInAMonth(short Month, short Year) {

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

// íÚíÏ ÇÓã ÇáÔåÑ ÇáãÎÊÕÑ ÇÓÊäÇÏğÇ Åáì ÑŞã ÇáÔåÑ
string MonthShortName(short MonthNumber) {
    string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return Months[MonthNumber - 1];
}

// íŞæã ÈØÈÇÚÉ ÊŞæíã ÇáÔåÑ
void PrintMonthCalendar(short Month, short Year) {
    int NumberOfDays;
    // ÊÑÊíÈ íæã ÇáÃÓÈæÚ ãä 0 Åáì 6
    int current = DayOfWeekOrder(1, Month, Year);
    NumberOfDays = NumberOfDaysInAMonth(Month, Year);

    // ØÈÇÚÉ ÇÓã ÇáÔåÑ ÇáÍÇáí
    printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());

    // ØÈÇÚÉ ÇáÃÚãÏÉ
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // ØÈÇÚÉ ÇáİÑÇÛÇÊ ÇáãäÇÓÈÉ
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

// íŞæã ÈŞÑÇÁÉ ÇáÔåÑ ãä ÇáãÓÊÎÏã
short ReadMonth() {
    short Month;
    cout << "\nPlease enter a Month? ";
    cin >> Month;
    return Month;
}

// íŞæã ÈŞÑÇÁÉ ÇáÓäÉ ãä ÇáãÓÊÎÏã
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
    // ŞÑÇÁÉ ÇáÓäÉ æÇáÔåÑ ãä ÇáãÓÊÎÏã
    short Year = ReadYear();

    // ØÈÇÚÉ ÊŞæíã ÇáÓäå
    PrintAliMonth(Year);

    system("pause>0");
    return 0;
}