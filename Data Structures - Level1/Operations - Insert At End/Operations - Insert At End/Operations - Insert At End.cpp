#include <iostream>
using namespace std;

// ����� ������
class Node {
public:
    int value;   // ���� ������
    Node* next;  // ���� ������ �������
};

// ���� ������ ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& head, int value) {
    // ����� ������� ����� ����� ������ �������� ����
    Node* new_node = new Node();    // ����� ����� ����� �����
    new_node->value = value;        // ����� ���� ������ �������
    new_node->next = head;          // ��� ������ ������� ���� ��� ������ ������� ������
    head = new_node;                // ����� ������ ������ �� ������� ����� ������ �������
}

// ���� ����� �� ���� ���� �� ������� ���������
Node* Find(Node* head, int Value) {
    while (head != NULL) {          // ���� ����� ��� ������� ���������
        if (head->value == Value)   // ������ �� ������ ������ ��������
            return head;            // ��� �� ������ ��� �����ѡ ��� ����� ������
        head = head->next;          // ������ ��� ������ ������� �� �������
    }
    return NULL;                    // �� ���� ��� ������ ��� ������
}

// ���� ������ ���� ��� ���� ���� �� ������� ���������
void InsertAfter(Node* prev_node, int Value) {
    if (prev_node == NULL) {        // ������ �� ��� ������ �������
        cout << "the given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();    // ����� ����� ����� �����
    new_node->value = Value;        // ����� ���� ������ �������
    new_node->next = prev_node->next; // ��� ������ ������� ���� ��� ������ ���� ��� ������ �������
    prev_node->next = new_node;     // ��� ������ ������� ���� ��� ������ �������
}

// ���� ������ ���� �� ����� ������� ���������
void InsertAtEnd(Node*& head, int Value) {
    Node* new_node = new Node();    // ����� ����� ����� �����
    new_node->value = Value;        // ����� ���� ������ �������
    new_node->next = NULL;          // ����� ������ ��� NULL ��� ������ ����� �������

    if (head == NULL) {             // ��� ���� ������� ����ɡ ���� ������ ������� �� ������ ������
        head = new_node;
        return;
    }

    Node* LastNode = head;          // ����� �� ������ ������
    while (LastNode->next != NULL)  // ������ ��� ������ ��� ������ �������
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;      // ����� ������ ������� ������� ��� ������ �������
}

// ���� ������ ������� ���������
void PrintList(Node* head) {
    cout << "\n";
    while (head != NULL) {          // ���� ����� ��� ������� ���������
        cout << head->value << " "; // ����� ���� ������ �������
        head = head->next;          // ������ ��� ������ ������� �� �������
    }
}

// ���� �������� ��������
int main() {
    Node* head = NULL;              // ����� ������ ��� ���� NULL ������ ������

    // ����� ��� ����� ��� ����� ������� ���������
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    // ����� ���� ��� ����� ������� ���������
    InsertAtBeginning(head, 0);

    // ����� ������� ���������
    PrintList(head);

    system("pause>0");
}
