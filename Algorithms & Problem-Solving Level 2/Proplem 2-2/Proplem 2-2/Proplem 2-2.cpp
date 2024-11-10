#include <iostream>
#include <string>
using namespace std;

int PrintMessage(string Text) {
	int Number;
	cout << Text << endl;
	cin >> Number;
	return Number;
}
bool is_prime(int Number) {

    if (Number < 2) {
        return false;
    }
    for (int i = 2; i < Number; i++) {
        if (Number % i == 0) {
            return false;
        }
    }
    return true;
}
void Print_Number_Primer(int Number) {
    
    for (int i = 2; i < Number; i++)
    {

        if (is_prime(i))
        {
            cout << i << endl;
        }
    };

}

int main()
{

    int UserNumber = PrintMessage("Please Inter Number :)");
    Print_Number_Primer(UserNumber);

	return 0;
}