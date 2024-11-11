#include <iostream>
using namespace std;

// ÅäÔÇÁ İÆÉ Node áÊãËíá ÚŞÏÉ İí ÇáŞÇÆãÉ ÇáãÑÊÈØÉ ÇáÃÍÇÏíÉ ÇáÏÇÆÑíÉ
class Node {
public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(); // 1- ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
    newNode->value = value;     // 2- ÊÚííä ÇáŞíãÉ ááÚŞÏÉ ÇáÌÏíÏÉ

    if (head == NULL) { // 3- ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
        newNode->next = newNode; // 4- ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì äİÓåÇ
        head = newNode;          // 5- ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÇáÑÃÓ
    }
    else { // 6- ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ ÛíÑ İÇÑÛÉ
        Node* temp = head; // 7- ÅäÔÇÁ ãÄÔÑ ãÄŞÊ ááÅÔÇÑÉ Åáì ÇáÑÃÓ

        // 8- ÇáÈÍË Úä ÇáÚŞÏÉ ÇáÃÎíÑÉ İí ÇáŞÇÆãÉ
        while (temp->next != head) {
            temp = temp->next;
        }

        // 9- ÊÍÏíË ÇáÑæÇÈØ áÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ İí ÇáÈÏÇíÉ
        newNode->next = head;  // 10- ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÑÃÓ ÇáÍÇáí
        temp->next = newNode;  // 11- ÇáÚŞÏÉ ÇáÃÎíÑÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
        head = newNode;        // 12- ÊÍÏíË ÇáÑÃÓ áíÕÈÍ ÇáÚŞÏÉ ÇáÌÏíÏÉ
    }
}

// ÏÇáÉ áØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÑÊÈØÉ ÇáÃÍÇÏíÉ ÇáÏÇÆÑíÉ
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
