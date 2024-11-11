#include <iostream>
using namespace std;

// ����� ��� Node ������ ���� �� ������� �������� �������� ��������
class Node {
public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(); // 1- ����� ���� �����
    newNode->value = value;     // 2- ����� ������ ������ �������

    if (head == NULL) { // 3- ��� ���� ������� �����
        newNode->next = newNode; // 4- ������ ������� ���� ��� �����
        head = newNode;          // 5- ����� ������ ������� ������
    }
    else { // 6- ��� ���� ������� ��� �����
        Node* temp = head; // 7- ����� ���� ���� ������� ��� �����

        // 8- ����� �� ������ ������� �� �������
        while (temp->next != head) {
            temp = temp->next;
        }

        // 9- ����� ������� ���� ������ ������� �� �������
        newNode->next = head;  // 10- ������ ������� ���� ��� ����� ������
        temp->next = newNode;  // 11- ������ ������� ���� ��� ������ �������
        head = newNode;        // 12- ����� ����� ����� ������ �������
    }
}

// ���� ������ ������� �������� �������� ��������
void PrintList(Node* head) {
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->value << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)\n";
}

int main() {
    Node* head = NULL;
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "Circular Singly Linked List Content:\n";
    PrintList(head);

    return 0;
}
