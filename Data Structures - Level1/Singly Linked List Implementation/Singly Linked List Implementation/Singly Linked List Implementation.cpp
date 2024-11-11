#include <iostream>
using namespace std;

// ����� ���� ����� (Node)
class Node
{
public:
    int value; // ���� �����
    Node* next; // ���� ��� ����� ������
};

int main()
{
    Node* head; // ���� ��� ����� �������

    Node* Node1 = NULL; // ����� �������� ������� �����
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // ����� ����� ����� ����� �������� new
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // ����� ��� ��� ���
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // ��� ����� �� ����� ������ ������� �������
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL; // ����� ������ ���� ��� NULL

    // ����� ��� ����� �� ������� �������
    head = Node1; // ������� �� ����� �����

    while (head != NULL) {
        cout << head->value << endl; // ����� ���� ����� ������
        head = head->next; // ������ ��� ����� ������
    }

    // ��� ����� ����� ����� ���� �������
    delete Node1;

    system("pause>0");
    return 0;
}
