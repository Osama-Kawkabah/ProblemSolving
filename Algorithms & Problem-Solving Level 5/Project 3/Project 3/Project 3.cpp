#include <iostream> // ����� ����� ������� �������� ��������
#include "clsMyStack.h" // ����� ��� ����� ����� �������

using namespace std; // ������� ���� ������� std ����� ����� std:: ��� �� ������� ����� �� ������ �� ����� ��������

int main()
{
    clsMyStack<int> MyStack; // ����� ���� �� ��� clsMyStack ������ ����� �����

    MyStack.push(10); // ����� ����� 10 ��� ������
    MyStack.push(20); // ����� ����� 20 ��� ������
    MyStack.push(30); // ����� ����� 30 ��� ������
    MyStack.push(40); // ����� ����� 40 ��� ������
    MyStack.push(50); // ����� ����� 50 ��� ������

    cout << "\nStack: \n";
    MyStack.Print(); // ����� ������� ������

    cout << "\nStack Size: " << MyStack.Size(); // ����� ��� ������
    cout << "\nStack Top: " << MyStack.Top(); // ����� ������ �� ��� ������
    cout << "\nStack Bottom: " << MyStack.Bottom(); // ����� ������ �� ��� ������

    MyStack.pop(); // ����� ������ �� ��� ������

    cout << "\n\nStack after pop() : \n";
    MyStack.Print(); // ����� ������� ������ ��� ����� �������

    // ������� #1: ����� ������ �� ������ 2
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);

    // ������� #2: ��� ����� ������
    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    // ������� #3: ����� ������ �� ������ 2 ������� 600
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    // ������� #4: ����� ������ 800 ��� ������ �� ������ 2
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();

    // ������� #5: ����� ������ 1000 �� ��� ������
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    // ������� #6: ����� ������ 2000 �� ��� ������
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    // ������� #7: ��� ���� ������� �� ������
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();

    system("pause>0"); // ������ �������� ����� ��� �� ������ ��������
}
