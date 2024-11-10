#include <iostream>
using namespace std;
int main()
{
    int Arr[] = { 1,2,3,4,5,6 };

    int* Pointer ;
    Pointer = Arr;


    /*cout << Pointer << endl;
    cout << *Pointer << endl;

    cout << Pointer + 1 << endl;
    cout << *Pointer + 1 << endl;

    cout << Pointer + 2 << endl;
    cout << *Pointer + 2 << endl;

    cout << Pointer + 3 << endl;
    cout << *Pointer + 3 << endl;

    cout << Pointer + 4 << endl;
    cout << *Pointer +4 << endl;

    cout << Pointer + 5 << endl;
    cout << *Pointer + 5 << endl;*/



    for (int i = 0; i < sizeof(Arr) / sizeof(int); i++)
    {
        cout << Pointer + i << endl;
        cout << *Pointer + i << endl;
    }
    return 0;
}

