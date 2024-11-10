#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumber = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    vector<string> vText = { "Osama", "Ali", "Yahya", "Haseen", "Kokabah" };

    for (int& Number : vNumber) {
        cout << Number << " ";
    }
    cout << "\n";
    for (string& Text : vText) {
        cout << Text << " ";
    }

    return 0;
}