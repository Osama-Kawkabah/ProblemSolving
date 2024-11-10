#include <iostream> // ����� ����� ������� �������� ��������
#include "clsMyQueue.h" // ����� ��� ����� ����� ��������

using namespace std; // ������� ���� ������� std ����� ����� std:: ��� �� ������� ����� �� ������ �� ����� ��������

int main()
{
    clsMyQueue <int> MyQueue; // ����� ���� �� ��� clsMyQueue ������ ����� �����

    MyQueue.push(10); // ����� ����� 10 ��� �������
    MyQueue.push(20); // ����� ����� 20 ��� �������
    MyQueue.push(30); // ����� ����� 30 ��� �������
    MyQueue.push(40); // ����� ����� 40 ��� �������
    MyQueue.push(50); // ����� ����� 50 ��� �������

    cout << "\nQueue: \n";
    MyQueue.Print(); // ����� ������� �������

    cout << "\nQueue Size: " << MyQueue.Size(); // ����� ��� �������
    cout << "\nQueue Front: " << MyQueue.front(); // ����� ������ ����� �� �������
    cout << "\nQueue Back: " << MyQueue.back(); // ����� ������ ������ �� �������

    MyQueue.pop(); // ����� ������ ����� �� �������

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print(); // ����� ������� ������� ��� ����� �������

    // ������� #1: ����� ������ �� ������ 2
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);

    // ������� #2: ��� ����� �������
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    // ������� #3: ����� ������ �� ������ 2 ������� 600
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    // ������� #4: ����� ������ 800 ��� ������ �� ������ 2
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();

    // ������� #5: ����� ������ 1000 �� ����� �������
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    // ������� #6: ����� ������ 2000 �� ����� �������
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    // ������� #7: ��� ���� ������� �� �������
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    system("pause>0"); // ������ �������� ����� ��� �� ������ ��������
}
