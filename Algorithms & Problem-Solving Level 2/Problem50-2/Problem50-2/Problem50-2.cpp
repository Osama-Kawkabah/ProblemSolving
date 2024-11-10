#include <iostream>
using namespace std;

float Read_A_Positive_Number(string Text) {
    float Number;
    cout << Text << endl;
    cin >> Number;
    return Number;
};

float MySqrt(float Number)
{
    return pow(Number , 0.5);
}

int main() {

    float NUmber = Read_A_Positive_Number("Plase Inter Number: ");

    cout << "Sqrt : " << MySqrt(NUmber) << endl;;
    cout << "C++ ceill  : " << sqrt(NUmber);

    return 0;
}