#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    // ����� ����� ������ ������ �� ������� �������
    clsDblLinkedList<int> MydblLinkedList;

    // ����� ����� �� ����� �������
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    // ����� ����� �������
    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    // ����� 500 ��� ������ �� ������ 3
    MydblLinkedList.InsertAfter(3, 500);
    cout << "\nAfter Insert \n";
    MydblLinkedList.PrintList();

    // ����� ���� ������ �� ������ 2 ��� 500
    MydblLinkedList.UpdateItem(2, 500);
    cout << "\nAfter Update Item(2) \n";
    MydblLinkedList.PrintList();

    // ����� ���� ������ �� ������ 2
    cout << "\nItem(s) Value Is: " << MydblLinkedList.GetItem(2) << endl;

    // ������ ��� ���� �� ������ 3
    clsDblLinkedList<int>::Node* N = MydblLinkedList.GetNode(3);
    cout << "\nNode Value Is: " << N->value << endl;

    // ��� ����� ������� ������ �������
    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();

    // ������ ��� ���� ������� �����
    if (MydblLinkedList.IsEmpty())
    {
        cout << "Yes List Is Empty\n";
    }
    else
    {
        cout << "No List Is Empty\n";
    }

    // ����� ��� ������� �� �������
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ����� �� ���� ����� 2
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    // ����� 500 ��� ������ ���� ����� ��� 2
    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    // ����� 700 �� ����� �������
    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    // ����� �� ���� ����� 4 ������
    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    // ��� ������ ������
    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    // ��� ������ �������
    MydblLinkedList.DeleteLastNode();
    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.PrintList();

    // ����� ��� ������� �� ������� ��� �����
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ����� ������� ������ ��� ������� ��� �������
    MydblLinkedList.Clear();
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ����� ���� ������
    system("pause>0");
    return 0;
}
