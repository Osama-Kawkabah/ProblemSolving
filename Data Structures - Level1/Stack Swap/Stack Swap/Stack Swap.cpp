#include <stack> // ����� ����� ��� stack
#include <iostream> // ����� ����� ������� ��������
using namespace std; // ������� ����� ������� ��������

int main() // ���� �������� ��������
{
    // ����� ������� �� ��� stack ������ ������� �������
    stack<int> MyStack1;
    stack<int> MyStack2;

    // ����� ����� ��� ��� Stacks ����� �������
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    // ������� ������ swap() ������ ����� ��� Stacks
    MyStack1.swap(MyStack2);

    // ����� ������� �� ��� Stack �����
    cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        cout << MyStack1.top() << " "; // ����� ������ ������
        MyStack1.pop(); // ��� ������ ������
    }

    // ����� ������� �� ��� Stack ������
    cout << endl << "MyStack2 = ";
    while (!MyStack2.empty()) {
        cout << MyStack2.top() << " "; // ����� ������ ������
        MyStack2.pop(); // ��� ������ ������
    }

    MyStack2.emplace

    system("pause>0"); // ����� �������� ����� �����

    return 0; // ����� ������ 0 ������� ��� ���� �������
}
