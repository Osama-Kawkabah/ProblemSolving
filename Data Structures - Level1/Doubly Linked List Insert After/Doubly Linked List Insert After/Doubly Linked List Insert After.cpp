#include <iostream>
using namespace std;

// ����� �����: ����� ������� iostream �������� ������� ������� �������� ������� �� ��������

// ����� �����: ����� ��� Node (������) ������ ����� ������� �������
class Node
{
public:
    int value; // ���� ������
    Node* next; // ���� ��� ������ ������ �� �������
    Node* prev; // ���� ��� ������ ������ �� �������
};

// ����� �����: ���� ������ ���� �� ����� �������
void InsertAtBeginning(Node*& head, int value) {

    // �����: ����� ���� ���� ������ �����
    Node* newNode = new Node();
    newNode->value = value;
    // �����: ����� ������� ������� ������ ������ ������ �� ����� �������
    newNode->next = head;
    newNode->prev = NULL;

    // �����: ����� ������ ������ ���� ������� �� ��� ��� ���� ����� ������ ������
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode; // �����: ����� ������ ������ ���� ���� �������
}

// ����� �����: ���� ����� �� ���� ����� ����� ���� �������
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        // �����: ����� �� ������ ���� ���� ������ �������
        if (head->value == Value)
            return head; // �����: ����� ����� ������ ��� �� ������ ����
        head = head->next;
    }
    return NULL; // �����: ����� ���� ����� �� ��� ��� ������ ��� ������
}

// ����� �����: ���� ������ ���� ��� ���� ���� �� �������
void InsertAfter(Node* current, int value) {
    // �����: ����� ���� ���� ������ �����
    Node* newNode = new Node();
    newNode->value = value;
    // �����: ����� ������� ������� ������ ������ ������ ��� ������ ������
    newNode->next = current->next;
    newNode->prev = current;
    // �����: ����� ������ ������ ������ ������ ������� ��� ������ ������
    if (current->next != NULL) {
        current->prev = newNode;
    }
    current->next = newNode; // �����: ����� ������ ������ ������ ������ ������� ��� ������ ������
}

// ����� �����: ���� ������ ������ ������ ��� �� ��� ������� ������� �������� ��
void PrintNodeDetails(Node* head)
{
    if (head->prev != NULL)
        cout << head->prev->value; // �����: ����� ���� ������ ������
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n"; // �����: ����� ���� ������ ������
    else
        cout << "NULL";
}

// ����� �����: ���� ������ ������ ������� �������
void PrintListDetails(Node* head)
{
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head); // �����: ����� ������ ������ ������
        head = head->next; // �����: ������ ��� ������ ������ �� �������
    }
}

// ����� �����: ���� ������ ������� �������
void PrintList(Node* head)
{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> "; // �����: ����� ���� ������ ������
        head = head->next; // �����: ������ ��� ������ ������ �� �������
    }
    cout << "NULL";
}

int main()
{
    Node* head = NULL; // �����: ����� ����� ������ �����

 
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Contenet:\n";
    PrintList(head);
    PrintListDetails(head);

    Node* N1 = Find(head, 2);

    InsertAfter(N1, 500);

    cout << "\n\n\nLinked List Contenet after InsertAfter:\n";
    PrintList(head);
    PrintListDetails(head);
    system("pause>0");

}