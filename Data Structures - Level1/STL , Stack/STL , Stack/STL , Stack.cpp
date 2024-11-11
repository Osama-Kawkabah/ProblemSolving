#include <iostream>
#include <stack>
using namespace std;

int main() {
    // ����� ���� stack �� ������� �������
    stack<int> stkNumbers;

    // ����� ������� ��� ��� Stack
    stkNumbers.push(10); // 10 �� ������� ��� ������ ��� Stack
    stkNumbers.push(20); // 20 �� ������� ��� ������ ��� Stack
    stkNumbers.push(30); // 30 �� ������� ��� ������ ��� Stack
    stkNumbers.push(40); // 40 �� ������� ��� ������ ��� Stack
    stkNumbers.push(50); // 50 �� ������� ��� ������ ��� Stack

    // ����� ��� ������� �� ��� Stack
    cout << "count=" << stkNumbers.size() << endl;

    // ����� ������� �� ��� Stack ������
    cout << "Numbers are : ";

    while (!stkNumbers.empty()) {
        // ����� ������ ������ �� ��� Stack
        cout << stkNumbers.top() << " ";

        // ��� ������ ������ �� ��� Stack
        stkNumbers.pop();
    }

    system("pause>0");
    return 0;
}
