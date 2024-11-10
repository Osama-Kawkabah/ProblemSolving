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

int MyCeil(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
        if (Number > 0) return int(Number) + 1;
        else return int(Number);
    else
        return Number;
}

int main() {

    float NUmber = Read_A_Positive_Number("Plase Inter Number: ");

    cout << "ceill : " << MyCeil(NUmber) << endl;;
    cout << "C++ ceill  : " << ceill(NUmber);

    return 0;
}