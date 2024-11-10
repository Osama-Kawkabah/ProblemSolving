#include <iostream>
using namespace std;


void FillArray(int arr[100], int& arrLength)
{
    arrLength = 5;
    arr[0] = 20;
    arr[1] = 10;
    arr[2] = 100;
    arr[3] = 101;
    arr[4] = 20;

}

void PrintArray(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool FindNumberPositionInArray(int arr[100], int& arrLength)
{
    for (int i = 0; i <= arrLength; i++)
    {
        if (arr[i] != arr[arrLength - i - 1]) {

                return false;
        }
    }
    return true;
}

int main() {

    int Array[100], LengthArray = 0;


    FillArray(Array, LengthArray);
    PrintArray(Array, LengthArray);
    if (FindNumberPositionInArray(Array, LengthArray))
        cout << "\nYes array is Palindrome\n";
    else
        cout << "\nNO array is NOT Palindrome\n";
    return 0;
}