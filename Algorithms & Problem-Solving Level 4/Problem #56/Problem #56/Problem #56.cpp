#include<iostream>
using namespace std;

// ÊÚÑíİ struct stDate áÊÎÒíä ÇáÊæÇÑíÎ
struct stDate {
    short Year;
    short Month;
    short Day;
};

// æÙíİÉ ááÊÍŞŞ ãÇ ÅĞÇ ßÇä ÊÇÑíÎ 1 ŞÈá ÊÇÑíÎ 2
bool IsDate1BeforeDate2(stDate Date1, stDate Date2) {
    // ÇÓÊÎÏÇã ÚãáíÇÊ ÇáãŞÇÑäÉ ÇáãÊÏÇÎáÉ ááÊÍŞŞ ãä ÇáÊÑÊíÈ
    return (Date1.Year < Date2.Year) ? true :
        ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true :
            (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

// æÙíİÉ ááÊÍŞŞ ãä ãÓÇæÇÉ ÇáÊæÇÑíÎ
bool IsDate1EqualDate2(stDate Date1, stDate Date2) {
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ?
        ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

// æÙíİÉ ááÊÍŞŞ ãÇ ÅĞÇ ßÇä ÊÇÑíÎ 1 ÈÚÏ ÊÇÑíÎ 2
bool IsDate1AfterDate2(stDate Date1, stDate Date2) {
    // ÅÓÊÎÏÇã ÇáÏæÇá ÇáãÚÑİÉ ÓÇÈŞğÇ ááÊÍŞŞ ãä ÚÏã æÌæÏ ÊÑÊíÈ Ãæ ãÓÇæÇÉ
    return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

// æÙíİÇÊ áŞÑÇÁÉ Çáíæã æÇáÔåÑ æÇáÓäÉ
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

// æÙíİÉ áŞÑÇÁÉ ÇáÊÇÑíÎ ßÇãáÇğ
stDate ReadFullDate() {
    stDate Date;
    // ÇÓÊÏÚÇÁ ÇáæÙÇÆİ ááÍÕæá Úáì Çáíæã æÇáÔåÑ æÇáÓäÉ
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

int main() {
    cout << "\nEnter Date1:";
    // ŞÑÇÁÉ ÊÇÑíÎ 1
    stDate Date1 = ReadFullDate();
    cout << "\nEnter Date2:";
    // ŞÑÇÁÉ ÊÇÑíÎ 2
    stDate Date2 = ReadFullDate();

    // ÇÓÊÎÏÇã ÇáÏÇáÉ ááÊÍŞŞ ãä ÊÑÊíÈ ÇáÊæÇÑíÎ
    if (IsDate1AfterDate2(Date1, Date2))
        cout << "\nYes, Date1 is After Date2.";
    else
        cout << "\nNo, Date1 is NOT After Date2.";

    system("pause>0");
    return 0;
}
