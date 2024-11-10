#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int result = i * j;

            if (result < 10) {
                cout << "0";
            }
            cout << result << "  ";
        }
        cout << endl;
    }

    return 0;
}
