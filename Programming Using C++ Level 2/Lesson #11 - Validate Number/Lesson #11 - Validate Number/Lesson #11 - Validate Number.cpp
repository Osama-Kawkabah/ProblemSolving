#include<iostream>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please enter a number: " << endl;
    cin >> Number;

    while (cin.fail())
    {
        // ÇáãÓÊÎÏã áã íÏÎá ÚÏÏğÇ ÕÍíÍğÇ
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }

    return Number;
}

//
//int ReadNumbers() {
//    int Numbers;
//    cout << "Please Inter Number Only" << endl;
//    cin >> Numbers;
//
//    while (cin.fail())
//    {
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        cout << "Invalid Number, Enter a valid one: " << endl;
//        cin >> Numbers;
//    }
//
//    return Numbers;
//}

int main() {
    cout << "Your Number is: " << ReadNumber();
    return 0;
}