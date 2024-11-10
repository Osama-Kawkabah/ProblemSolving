#include <iostream>
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Text) {
    int Number;
    do {
        cout << Text << " : ";
        cin >> Number;
    } while (Number < 0);
    return Number;
}

void PrintInfirtedNumber(int Number) {

    cout << "\n";
    for (int Num = 0; Num <= Number; Num++)
    {
        for (int i = 1; i <= Num; i++)
        {
            cout << Num;
        }
        cout << endl;
    };
}

int main()
{
    PrintInfirtedNumber(ReadPositiveNumber("Plesea Inter Number"));

    return 0;
}
