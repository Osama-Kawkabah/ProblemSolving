#include <iostream>
using namespace std;

// ����� ������ Node ���� ���� ������ �� ������� ���������
class Node {
public:
    int value;   // ���� ������
    Node* next;  // ���� ������ �������
};

// ���� ������ ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& head, int value) {
    Node* new_node = new Node();  // ����� ����� ����� �����
    new_node->value = value;      // ����� ������ ������ �������
    new_node->next = head;        // ��� ������ ������� ���� ��� ������ ������� ������
    head = new_node;              // ����� ������ ������ �� ������� ����� ������ �������
}

// ���� ����� �� ���� ���� �� ������� ���������
Node* Find(Node* head, int Value) {
    while (head != NULL) {        // ���� ����� ��� ������� ���������
        if (head->value == Value) // ������ �� ������ ������ ��������
            return head;          // ��� �� ������ ��� �����ѡ ��� ����� ������
        head = head->next;        // ������ ��� ������ ������� �� �������
    }
    return NULL;                  // �� ���� ��� ������ ��� ������
}

// ���� ������ ���� ��� ���� ���� �� ������� ���������
void InsertAfter(Node* Prev_node, int Value) {
    if (Prev_node == NULL) {      // ������ �� ��� ������ �������
        cout << "������ ������� ������� �� ���� �� ���� NULL";
        return;
    }
    Node* new_node = new Node();  // ����� ����� ����� �����
    new_node->value = Value;      // ����� ���� ������ �������
    new_node->next = Prev_node->next; // ��� ������ ������� ���� ��� ������ ���� ��� ������ �������
    Prev_node->next = new_node;   // ��� ������ ������� ���� ��� ������ �������
}

// ���� ������ ���� �� ����� ������� ���������
void InsertAtEnd(Node*& head, int Value) {
    Node* new_node = new Node();  // ����� ����� ����� �����
    new_node->value = Value;      // ����� ���� ������ �������
    new_node->next = NULL;        // ����� ������ ��� NULL ��� ������ ����� �������

    if (head == NULL) {           // ��� ���� ������� ����ɡ ���� ������ ������� �� ������ ������
        head = new_node;
        return;
    }

    Node* LastNode = head;        // ����� �� ������ ������
    while (LastNode->next != NULL) // ������ ��� ������ ��� ������ �������
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;    // ����� ������ ������� ������� ��� ������ �������
    return;
}

// ���� ���� ���� �� ������� ���������
void DeleteNode(Node*& head, int Value) {
    Node* Current = head, * Prev = head; // ������ ������ ������� ������� �������

    if (head == NULL) {           // ��� ���� ������� ����ɡ �� ��� ���� ����
        return;
    }

    if (Current->value == Value) { // ��� ���� ������ ������ ����� ��� ������ ������ �����
        head = Current->next;     // ����� ����� ����� ��� ������ �������
        delete Current;           // ����� ������� ������ ��������
        return;
    }

    // ����� �� ������ ���� ����� ��� ������ ������ �����
    while (Current != NULL && Current->value != Value) {
        Prev = Current;
        Current = Current->next;
    }

    // ��� �� ��� ������ ��� ������ �� �������
    if (Current == NULL) return;

    // ����� ������
    Prev->next = Current->next;   // ����� ������ �� ������ ������� ������ ������ ��������
    delete Current;               // ����� ������� ������ ��������
}

// ���� ������ ������� ���������
void PrintList(Node* head) {
    cout << "\n";
    while (head != NULL) {        // ���� ����� ��� ������� ���������
        cout << head->value << " "; // ����� ���� ������ �������
        head = head->next;        // ������ ��� ������ ������� �� �������
    }
}

int main() {
    Node* head = NULL;            // ����� ������ ��� ���� NULL ������ ������

    // ����� ��� ����� ��� ����� ������� ���������
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);

    // ����� ������� ���������
    PrintList(head);

    // ��� ���� �� ������� ���������
    DeleteNode(head, 2);

    // ����� ������� ��������� ��� �����
    PrintList(head);

    system("pause>0");
}
