#include <iostream>
using namespace std;

// ÊÚÑíİ ÇáÚŞÏÉ
class Node
{
public:
    int value;      // ŞíãÉ ÇáÚŞÏÉ
    Node* next;     // ÑÇÈØ ááÚŞÏÉ ÇáÊÇáíÉ
};

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& head, int value)
{
    // ÊÎÕíÕ ÇáĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ æÅÏÑÇÌ ÇáÈíÇäÇÊ İíåÇ
    Node* new_node = new Node();    // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    new_node->value = value;        // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
    new_node->next = head;          // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÇáÃæáì
    head = new_node;                // ÊÍÏíË ÇáÚŞÏÉ ÇáÃæáì İí ÇáŞÇÆãÉ áÊßæä ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ ááÈÍË Úä ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
Node* Find(Node* head, int Value)
{
    while (head != NULL) {          // ÍáŞÉ ÊÊÍÑß ÚÈÑ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
        if (head->value == Value)   // ÇáÊÍŞŞ ãä ãØÇÈŞÉ ÇáŞíãÉ ÇáãØáæÈÉ
            return head;            // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáÚäÕÑ¡ íÊã ÅÑÌÇÚ ÇáÚŞÏÉ
        head = head->next;          // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ İí ÇáŞÇÆãÉ
    }
    return NULL;                    // İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáŞíãÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÈÚÏ ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAfter(Node* prev_node, int Value)
{
    if (prev_node == NULL) {        // ÇáÊÍŞŞ ãä ÕÍÉ ÇáÚŞÏÉ ÇáÓÇÈŞÉ
        cout << "the given previous node cannot be NULL"; // ÑÓÇáÉ ÎØÃ
        return;
    }

    Node* new_node = new Node();    // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    new_node->value = Value;        // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
    new_node->next = prev_node->next; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÊí Êáí ÇáÚŞÏÉ ÇáÓÇÈŞÉ
    prev_node->next = new_node;     // ÌÚá ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ áØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void PrintList(Node* head)
{
    cout << "\n";                   // ÓØÑ İÇÑÛ ááÊÈÇÚÏ
    while (head != NULL) {          // ÍáŞÉ ÊÊÍÑß ÚÈÑ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
        cout << head->value << " "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÍÇáíÉ
        head = head->next;          // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ İí ÇáŞÇÆãÉ
    }
}

// ÏÇáÉ ÇáÈÑäÇãÌ ÇáÑÆíÓíÉ
int main()
{
    Node* head = NULL;              // ÊåíÆÉ ÇáãÄÔÑ Åáì ŞíãÉ NULL ááÚŞÏÉ ÇáÃæáì

    // ÅÖÇİÉ ÈÚÖ ÇáŞíã Åáì ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    PrintList(head);

    // ÇáÈÍË Úä ÇáÚäÕÑ ÈŞíãÉ 2
    Node* N1 = NULL;
    N1 = Find(head, 2);

    // ÅÏÑÇÌ ŞíãÉ ÌÏíÏÉ (500) ÈÚÏ ÇáÚäÕÑ ÇáĞí íÍãá ÇáŞíãÉ 2
    InsertAfter(N1, 500);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ ÈÚÏ ÇáÅÏÑÇÌ
    PrintList(head);

    system("pause>0");
}
