#include <iostream>
#include <iostream>
using namespace std;
int ReadPositiveNumber(string Text) {
    int Number;
    do {
        cout << Text << " : ";
        cin >> Number;
    } while (Number <= 0 || Number > 26);
    return Number;
}

void PrintInfirtedNumber(int Number) {
    cout << "\n";

    for (int i = 65; i < Number + 65; i++)
    {
        for (int K = 65; K <= i; K++)
        {
            cout << char(i);
        }
            cout << endl;
    }
};

int main()
{
    PrintInfirtedNumber(ReadPositiveNumber("Plesea Inter Number"));
    return 0;
}

