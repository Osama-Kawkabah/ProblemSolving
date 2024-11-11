#include <iostream>
using namespace std;

// ÊÚÑíİ ÇáßáÇÓ Node ÇáĞí íãËá ÇáÚŞÏÉ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
class Node {
public:
    int value;   // ŞíãÉ ÇáÚŞÏÉ
    Node* next;  // ÑÇÈØ ááÚŞÏÉ ÇáÊÇáíÉ
};

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& head, int value) {
    Node* new_node = new Node();  // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    new_node->value = value;      // ÊÚííä ÇáŞíãÉ ááÚŞÏÉ ÇáÌÏíÏÉ
    new_node->next = head;        // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÇáÃæáì
    head = new_node;              // ÊÍÏíË ÇáÚŞÏÉ ÇáÃæáì İí ÇáŞÇÆãÉ áÊßæä ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ ááÈÍË Úä ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
Node* Find(Node* head, int Value) {
    while (head != NULL) {        // ÍáŞÉ ÊÊÍÑß ÚÈÑ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
        if (head->value == Value) // ÇáÊÍŞŞ ãä ãØÇÈŞÉ ÇáŞíãÉ ÇáãØáæÈÉ
            return head;          // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáÚäÕÑ¡ íÊã ÅÑÌÇÚ ÇáÚŞÏÉ
        head = head->next;        // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ İí ÇáŞÇÆãÉ
    }
    return NULL;                  // İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáŞíãÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÈÚÏ ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAfter(Node* Prev_node, int Value) {
    if (Prev_node == NULL) {      // ÇáÊÍŞŞ ãä ÕÍÉ ÇáÚŞÏÉ ÇáÓÇÈŞÉ
        cout << "ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÇáãÍÏÏÉ áÇ íãßä Ãä Êßæä NULL";
        return;
    }
    Node* new_node = new Node();  // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    new_node->value = Value;      // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
    new_node->next = Prev_node->next; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÊí Êáí ÇáÚŞÏÉ ÇáÓÇÈŞÉ
    Prev_node->next = new_node;   // ÌÚá ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí äåÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtEnd(Node*& head, int Value) {
    Node* new_node = new Node();  // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    new_node->value = Value;      // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
    new_node->next = NULL;        // ÊÚííä ÇáÑÇÈØ Åáì NULL áÃä ÇáÚŞÏÉ ÓÊßæä ÇáÃÎíÑÉ

    if (head == NULL) {           // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ¡ ÇÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ åí ÇáÚŞÏÉ ÇáÃæáì
        head = new_node;
        return;
    }

    Node* LastNode = head;        // ÇáÈÏÁ ãä ÇáÚŞÏÉ ÇáÃæáì
    while (LastNode->next != NULL) // ÇáÊÍÑß ÍÊì ÇáæÕæá Åáì ÇáÚŞÏÉ ÇáÃÎíÑÉ
    {
        LastNode = LastNode->next;
    }

    LastNode->next = new_node;    // ÊÚííä ÇáÚŞÏÉ ÇáÃÎíÑÉ ááÅÔÇÑÉ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
    return;
}

// ÏÇáÉ áÍĞİ ÚäÕÑ ãä ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void DeleteNode(Node*& head, int Value) {
    Node* Current = head, * Prev = head; // ãÄÔÑÇÊ ááÚŞÏÉ ÇáÍÇáíÉ æÇáÚŞÏÉ ÇáÓÇÈŞÉ

    if (head == NULL) {           // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ¡ áÇ ÔíÁ íãßä ÍĞİå
        return;
    }

    if (Current->value == Value) { // ÅĞÇ ßÇäÊ ÇáÚŞÏÉ ÇáÃæáì ÊÍÊæí Úáì ÇáŞíãÉ ÇáãÑÇÏ ÍĞİåÇ
        head = Current->next;     // ÊÍÏíË ÇáÑÃÓ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
        delete Current;           // ÊÍÑíÑ ÇáĞÇßÑÉ ááÚŞÏÉ ÇáãÍĞæİÉ
        return;
    }

    // ÇáÈÍË Úä ÇáÚŞÏÉ ÇáÊí ÊÍÊæí Úáì ÇáŞíãÉ ÇáãÑÇÏ ÍĞİåÇ
    while (Current != NULL && Current->value != Value) {
        Prev = Current;
        Current = Current->next;
    }

    // ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáŞíãÉ İí ÇáŞÇÆãÉ
    if (Current == NULL) return;

    // ÅÒÇáÉ ÇáÚŞÏÉ
    Prev->next = Current->next;   // ÊÍÏíË ÇáÑÇÈØ İí ÇáÚŞÏÉ ÇáÓÇÈŞÉ áÊÊÎØì ÇáÚŞÏÉ ÇáãÍĞæİÉ
    delete Current;               // ÊÍÑíÑ ÇáĞÇßÑÉ ááÚŞÏÉ ÇáãÍĞæİÉ
}

// ÏÇáÉ áØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void PrintList(Node* head) {
    cout << "\n";
    while (head != NULL) {        // ÍáŞÉ ÊÊÍÑß ÚÈÑ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
        cout << head->value << " "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÍÇáíÉ
        head = head->next;        // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ İí ÇáŞÇÆãÉ
    }
}

int main() {
    Node* head = NULL;            // ÊåíÆÉ ÇáãÄÔÑ Åáì ŞíãÉ NULL ááÚŞÏÉ ÇáÃæáì

    // ÅÖÇİÉ ÈÚÖ ÇáŞíã Åáì äåÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    PrintList(head);

    // ÍĞİ ÚäÕÑ ãä ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    DeleteNode(head, 2);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ ÈÚÏ ÇáÍĞİ
    PrintList(head);

    system("pause>0");
}
