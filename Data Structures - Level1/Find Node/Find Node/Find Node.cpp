//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

// ����� ������
class Node
{
public:
    int value; // ���� ������
    Node* next; // ���� ������ �������
    Node* prev; // ���� ������ �������
};

// ����� ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& head, int value) {

    // 1- ����� ���� ����� ������ ������
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    // 2- ����� ������ ������ ������� ��� ���� ������� ��� �����
    if (head != NULL) {
        head->prev = newNode;
    }

    // 3- ��� ������ ������� �� ����� ������ �������
    head = newNode;
}

// ����� �� ���� ���� ���� ����� �� �������
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head;
        head = head->next;
    }
    return NULL;
}

// ����� ������ ������ (������ ��������� ���������� ���)
void PrintNodeDetails(Node* head)
{
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

// ����� ������� ��������� �������
void PrintList(Node* head)
{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    Node* head = NULL;

    // ����� ����� ��� ����� �������
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    // ����� ����� �������
    cout << "\nLinked List Content:\n";
    PrintList(head);

    // ����� �� ���� ����� ��� ���� ����� ������ ����� �����
    Node* N1 = Find(head, 11);
    if (N1 != NULL)
        cout << "\n\nNode Is Found :-)\n";
    else
        cout << "\n\nNode Is Not Found:-(\n";

    system("pause>0");
}
