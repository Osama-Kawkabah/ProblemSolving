#include <iostream>
using namespace std;

int main()
{

    void* Pointer;

    int Number = 10;
    float Number2 = 10.6;

    Pointer = &Number;

    cout << Pointer << endl;
    cout << *(static_cast<int*>(Pointer)) << endl;
    Pointer = &Number2;
    cout << *(static_cast<float*>(Pointer)) << endl;



    return 0;
}
