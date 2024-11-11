#include <iostream>
using namespace std;

// ����� ������ Node ���� ���� ������ �� ������� ��������
class Node
{
public:
    int value;    // ���� ������
    Node* next;   // ���� ������ �������
    Node* prev;   // ���� ������ �������
};

// ���� ������ ���� �� ����� �������
void InsertAtBeginning(Node*& head, int value) {
    /*
        1- ����� ���� ����� ������� ��������.
        2- ����� ���� ������ ������ ������� ����� ��� ��� ������� ������.
        3- ����� ���� ������ ���� ������� ������ ����� ��� ������ �������.
        4- ����� ������ ������� ������ ������ �������.
    */
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

// ���� ������ ������ ������
void PrintNodeDetails(Node* head) {
    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "NULL";
}

// ���� ������ ������ �������
void PrintListDetails(Node* head) {
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}

// ���� ������ �������
void PrintList(Node* head) {
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    // ����� ��� ����� �� ����� �������
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    // ����� ������� �������
    cout << "\nLinked List Content:\n";
    PrintList(head);
    PrintListDetails(head);

    system("pause>0");  // ������ ����� �������� ��� ����� ��������
}
