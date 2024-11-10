#include <iostream>
using namespace std;

float Read_A_Positive_Number(string Text) {
    float Number;
    cout << Text << endl;
    cin >> Number;
    return Number;
};

float GetfloorNumberPart(float Number)
{
    return Number - int(Number);
}

int floorNumber(float Number)
{
    int IntPart;
    IntPart = int(Number);
    float FractionsPart = GetfloorNumberPart(Number);
        if (Number > 0)
            return IntPart;
        else
            return --IntPart;
}


int main() {

    float NUmber = Read_A_Positive_Number("Plase Inter Number: ");

    cout << "floor : " << floorNumber(NUmber) << endl;;
    cout << "C++ fractionalPart : " << floor(NUmber);

    return 0;
}