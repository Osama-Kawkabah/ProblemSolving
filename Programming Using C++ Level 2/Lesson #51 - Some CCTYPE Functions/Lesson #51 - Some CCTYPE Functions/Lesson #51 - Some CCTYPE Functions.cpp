#include <iostream>
#include <cctype>
using namespace std;
int main()
{

    char X = toupper('A');
    char Y = tolower('a');


    cout << "\nThe Letter Is Upper : " << X << endl;
    cout << "\nThe Letter Is Lower : " << Y << endl;



    cout << "\nIS Upper : " << isupper('A') << endl;
    cout << "\nIS Lower : " << islower('a') << endl;

    char Letter1 = 'A';
    if (isupper(Letter1) > 0)
    {
        cout << "\nThe Letter Is Upper Case : "<< Letter1 << endl;
    }
    else {
        cout << "\nThe Letter Is Not Upper Case : " << Letter1 << endl;
    }

    char Letter2 = 'a';
    if (islower(Letter2) > 0)
    {
        cout << "\nThe Letter Is Lower Case : "<< Letter2 << endl;
    }
    else {
        cout << "\nThe Letter Is Not Lower Case"<< Letter2 << endl;
    }

    char Digit = '5';

    if (isdigit(Digit) > 0)
    {
        cout << "\nThe Number IS Diget : " << Digit << endl;
    }
    else {
        cout << "\nThe Number IS Not Diget : " << Digit << endl;
    }

    char Punct = '#';

    if (ispunct(Punct) > 0)
    {
        cout << "\nThe Number IS Punct : " << Punct << endl;
    }
    else {
        cout << "\nThe Number IS Not Punct : " << Punct << endl;
    }



    return 0;
}
