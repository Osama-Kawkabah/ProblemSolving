#include <iostream>
using namespace std;

int x() {
    return 1 - 1;
}
int main()
{
  /*  int dd = x();
    int *ee = &dd;
    
    int a = 10;
    int& x = a;
    int* p = &x;


    string A = "Osama";

    string* S = &A;

    cout << ee << endl;
    cout << &dd << endl;
    cout << S << endl;
    cout << &A << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << &a << endl;
    cout << &p << endl;*/


    int Num1 = 20;

    cout << Num1 << endl;
    int *Num2 = &Num1;

    *Num2 = -50;

    cout << Num1 << endl;
    cout << Num2 << endl;
    cout << *Num2 << endl;

    cout << endl;;
    string A = "OSAMrA";
    string* M = &A;

    cout << A << endl;
    cout << *M << endl;
    if (A == "OSAMA")
    {
        *M = "Osama Ali Yahya Haseen Koakbah";

    };
    cout<< endl;;
    cout << A << endl;
    cout << *M << endl;




    return 0;
}
