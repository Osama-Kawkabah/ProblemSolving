#include <iostream>
using namespace std;

float Read_A_Positive_Number(string Text) {
    float Number;
    cout << Text << endl;
    cin >> Number;
    return Number;
};

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int roundNumber(float Number)
{
    int IntPart;
    IntPart = int(Number);
    float FractionsPart = GetFractionPart(Number);
    if (abs(FractionsPart) >= .5)
    {
        if (Number > 0)
            return ++IntPart;
        else return --IntPart;
    }
    else
    {
        return IntPart;
    }
}


int main() {
    
    float NUmber = Read_A_Positive_Number("Plase Inter Number: ");

    cout << "fractionalPart222 : " << roundNumber(NUmber)<<endl;;
    cout << "C++ fractionalPart : " << round(NUmber);

    return 0;
}