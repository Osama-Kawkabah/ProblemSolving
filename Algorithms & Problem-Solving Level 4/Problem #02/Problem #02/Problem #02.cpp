#pragma warning(disable:4996)
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

/*
                                    ÇáÔÑæØ 
    ÇáÓäÉ 2020 ŞÇÈáÉ ááŞÓãÉ Úáì 4 ÈÏæä ÈÇŞò¡ áĞÇ İåí ÓäÉ ßÈíÓÉ.
    ÇáÓäÉ 2021 ÛíÑ ŞÇÈáÉ ááŞÓãÉ Úáì 4 ÈÏæä ÈÇŞò¡ áĞÇ İåí ÓäÉ ÚÇÏíÉ.
    ÇáÓäÉ 2024 ŞÇÈáÉ ááŞÓãÉ Úáì 4 ÈÏæä ÈÇŞò¡ áĞÇ İåí ÓäÉ ßÈíÓÉ.
*/

int ReadNumber()
{
    int Number;
    cout << "Please enter a number: " << endl;
    cin >> Number;
    
    while (cin.fail() || Number < 1800 || Number > 2024)
    {
        // ÇáãÓÊÎÏã áã íÏÎá ÚÏÏğÇ ÕÍíÍğÇ
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }

    return Number;
}


int getDaysInYear(int year) {


    if (year % 400 == 0)
    {
        return  true;
    }
    else if (year % 100 == 0) {
        return  false;
    }
    else if (year % 4 == 0) {
        return  true;
    }
    else
    {
        return false;
    }

}

int main() {

    int Year = ReadNumber();

    if (getDaysInYear(Year))
    {
        cout << "\nYes, Year [" << Year << "] is a leap year.\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] is NOT a leap year.\n";

    }



    return 0;
}