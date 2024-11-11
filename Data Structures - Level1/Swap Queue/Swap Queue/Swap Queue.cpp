#include <queue>
#include <iostream>
using namespace std;

int main()
{
    // ����� ���� �������� queue
    queue<int> MyQueue1;
    queue<int> MyQueue2;

    // ����� ����� ��� ��queue ������
    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    // ����� ����� ��� ��queue �������
    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    // ������� ���� swap() ������ ����� ��queues
    MyQueue1.swap(MyQueue2);

    // ����� ��queue ������
    cout << "MyQueue1 = ";
    while (!MyQueue1.empty()) {
        cout << MyQueue1.front() << " ";
        MyQueue1.pop(); // ��� ������ ����� �� ��queue ������
    }

    // ����� ��queue �������
    cout << endl << "MyQueue2 = ";
    while (!MyQueue2.empty()) {
        cout << MyQueue2.front() << " ";
        MyQueue2.pop(); // ��� ������ ����� �� ��queue �������
    }

    system("pause>0");

    return 0;
}
