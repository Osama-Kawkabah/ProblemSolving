#include <iostream>
using namespace std;

// ����� ������
class Node
{
public:
    int value;      // ���� ������
    Node* next;     // ���� ������ �������
};

// ���� ������ ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& head, int value)
{
    // ����� ������� ����� ����� ������ �������� ����
    Node* new_node = new Node();    // ����� ����� ����� �����
    new_node->value = value;        // ����� ���� ������ �������
    new_node->next = head;          // ��� ������ ������� ���� ��� ������ ������� ������
    head = new_node;                // ����� ������ ������ �� ������� ����� ������ �������
}

// ���� ����� �� ���� ���� �� ������� ���������
Node* Find(Node* head, int Value)
{
    while (head != NULL) {          // ���� ����� ��� ������� ���������
        if (head->value == Value)   // ������ �� ������ ������ ��������
            return head;            // ��� �� ������ ��� �����ѡ ��� ����� ������
        head = head->next;          // ������ ��� ������ ������� �� �������
    }
    return NULL;                    // �� ���� ��� ������ ��� ������
}

// ���� ������ ���� ��� ���� ���� �� ������� ���������
void InsertAfter(Node* prev_node, int Value)
{
    if (prev_node == NULL) {        // ������ �� ��� ������ �������
        cout << "the given previous node cannot be NULL"; // ����� ���
        return;
    }

    Node* new_node = new Node();    // ����� ����� ����� �����
    new_node->value = Value;        // ����� ���� ������ �������
    new_node->next = prev_node->next; // ��� ������ ������� ���� ��� ������ ���� ��� ������ �������
    prev_node->next = new_node;     // ��� ������ ������� ���� ��� ������ �������
}

// ���� ������ ������� ���������
void PrintList(Node* head)
{
    cout << "\n";                   // ��� ���� �������
    while (head != NULL) {          // ���� ����� ��� ������� ���������
        cout << head->value << " "; // ����� ���� ������ �������
        head = head->next;          // ������ ��� ������ ������� �� �������
    }
}

// ���� �������� ��������
int main()
{
    Node* head = NULL;              // ����� ������ ��� ���� NULL ������ ������

    // ����� ��� ����� ��� ����� ������� ���������
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    // ����� ������� ���������
    PrintList(head);

    // ����� �� ������ ����� 2
    Node* N1 = NULL;
    N1 = Find(head, 2);

    // ����� ���� ����� (500) ��� ������ ���� ���� ������ 2
    InsertAfter(N1, 500);

    // ����� ������� ��������� ��� �������
    PrintList(head);

    system("pause>0");
}
