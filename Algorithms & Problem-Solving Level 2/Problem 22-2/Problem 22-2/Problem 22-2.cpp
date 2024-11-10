#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Please enter a number: ";
    cin >> Number;
    return Number;
}

void ReadArray(int Number, int Array_Number[]) {
    for (int i = 0; i < Number; i++) {
        cout << "Element [" << i + 1 << "]: ";
        cin >> Array_Number[i];
    }
}

int CheckNumber(int Number, int Array_Number[]) {
    int Count = 0;
    cout << "Enter the number you want to check: ";
    int CheckNumber;
    cin >> CheckNumber;
    cout << "Original Array : ";
    for (int i = 0; i < Number; i++) {
        cout << Array_Number[i] << " ";
        if (Array_Number[i] == CheckNumber) {
            Count++;
        }
    }
    cout << endl << CheckNumber << " is repeated " << Count << " time(s)." << endl;

    return Count;
}

int main() {
    const int Array_Size = 100;
    int Array_Number[Array_Size];
    int Number = ReadNumber();

    ReadArray(Number, Array_Number);
    CheckNumber(Number, Array_Number);

    return 0;
}