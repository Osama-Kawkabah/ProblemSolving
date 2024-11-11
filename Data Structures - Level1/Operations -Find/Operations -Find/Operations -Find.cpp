#include <iostream>
using namespace std;

// ����� ������
class Node
{
public:
    int value; // ���� ������
    Node* next; // ���� ������ �������
};

// ���� ������ ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& head, int value)
{
    // ����� ������� ����� ����� ������ �������� ����
    head = new Node{ value, head };
}

// ���� ����� �� ���� ���� �� ������� ���������
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head; // ��� �� ������ ��� �����ѡ ��� ����� ������
        head = head->next; // ������ ��� ������ �������
    }
    return NULL; // �� ���� ��� ������ ��� ������
}

// ���� ������ ������� ���������
void PrintList(Node* head)
{
    while (head != NULL) {
        cout << head->value << " "; // ����� ���� ������
        head = head->next; // ������ ��� ������ �������
    }
}

int main()
{
    Node* head = NULL; // ����� ������ ��� ���� NULL ������ ������

    // ����� ��� ����� ��� ����� ������� ���������
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    // ����� ������� ���������
    PrintList(head);

    // ����� �� ���� ���� �� ������� ���������
    Node* N1 = Find(head, 2);

    // ��� �� ������ ��� �����ѡ ��� ����� ����� ���� ���
    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    system("pause>0");
}
