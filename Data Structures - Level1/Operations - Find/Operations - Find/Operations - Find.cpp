#include <iostream>
using namespace std;

// ����� ������ Node ���� ���� ������ �� ������� ���������
class Node {
public:
    int Value;   // ���� ������
    Node* Next;    // ���� ������ �������
};

// ���� ������ ���� �� ����� ������� ���������
void InsertAtBeginning(Node*& Element, int Value) {
    Node* El = new Node();  // ����� ����� ����� �����

    El->Value = Value;  // ����� ������ ������ �������
    El->Next = Element; // ��� ������ ������� ���� ��� ������ ������� ������

    Element = El;   // ����� ������ ������ �� ������� ����� ������ �������
}

// ���� ������ ��� ����� �� ������� ���������
void Print(Node* Element) {
    while (Element != NULL) {
        cout << Element->Value << " "; // ����� ���� ������
        Element = Element->Next;    // �������� ��� ������ �������
    }
}

// ���� ����� �� ���� ���� �� ������� ���������
Node* Find(Node* El, int Number) {
    while (El != NULL) {
        if (El->Value == Number)
            return El;  // ��� �� ������ ��� �����ɡ ��� ����� ������
        El = El->Next;  // �������� ��� ������ �������
    }
    return NULL; // �� ���� ��� ������ ��� ������
}

// ���� ������ ���� ��� ���� ���� �� ������� ���������
void InsertAfter(Node* Prev_Node, int Value) {
    if (Prev_Node == NULL) { // ������ ��� ��� ��� ������ ������� ������
        cout << "������ ������� ��� ������" << endl;
        return;
    }

    Node* New_Node = new Node(); // ����� ����� ����� �����
    New_Node->Value = Value; // ����� ������ ������ �������
    New_Node->Next = Prev_Node->Next; // ��� ������ ������� ���� ��� ������ ���� ��� ������ �������
    Prev_Node->Next = New_Node; // ��� ������ ������� ���� ��� ������ �������
}

int main() {
    Node* Element = nullptr; // ����� ������ ��� ���� NULL ������ ������

    // ����� ��� ����� �� ����� ������� ���������
    InsertAtBeginning(Element, 1);
    InsertAtBeginning(Element, 2);
    InsertAtBeginning(Element, 3);
    InsertAtBeginning(Element, 4);
    InsertAtBeginning(Element, 5);

    // ����� ������� ���������
    Print(Element);
    cout << endl;

    // ����� �� ���� ���� ������ 3
    Node* Nl = Find(Element, 3);

    // ����� ���� ����� 10 ��� ������ ���� ���� ������ 3
    InsertAfter(Nl, 1000);

    // ����� ������� ��������� ��� �������
    Print(Element);
    cout << endl;

    system("pause>0");
}
