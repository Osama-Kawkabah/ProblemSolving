
#include <iostream>

using namespace std;

template <class T>
class x {

    T Num1;
    T Num2;
    T Num3;
    
public:


    x(T N1, T N2, T N3) {
        Num1 = N1;
        Num2 = N2;
        Num3 =N3;
    }

    T Add() {
        return Num1 + Num2 + Num3;
    }

    T M() {
        return Num1 - Num2 - Num3;
    }

    T D() {
        return Num1 * Num2 * Num3;
    }

    T S() {
        return Num1 / Num2 / Num3;
    }

    void Print(){
        cout <<Num1 <<" + " <<Num2 <<" = "<<Add() << endl;
        cout <<Num1 <<" _ " <<Num2 <<" = "<<M() << endl;
        cout <<Num1 <<" * " <<Num2 <<" = "<<D() << endl;
        cout <<Num1 <<" / " <<Num2 <<" = "<<S() << endl;
    }

};


template <typename T> T SUMNUM(T Num1, T Num2) {
    return Num1 + Num2;
}



int main()
{


    x <int>s(12, 12, 12);

    s.Print();

    return 0;
}
