#include <iostream>
using namespace std;

// ÅäÔÇÁ åíßá ÇáÚŞÏÉ
class Node
{
public:
    int value; // ŞíãÉ ÇáÚŞÏÉ
    Node* next; // ÑÇÈØ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
};

// ÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& head, int value)
{
    // ÊÎÕíÕ ÇáĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    Node* new_node = new Node();

    // ÅÏÑÇÌ ÇáÈíÇäÇÊ İí ÇáÚŞÏÉ ÇáÌÏíÏÉ
    new_node->value = value;
    new_node->next = head;

    // äŞá ÑÃÓ ÇáŞÇÆãÉ áÊßæä ÇáÚŞÏÉ ÇáÌÏíÏÉ
    head = new_node;
}

// ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void PrintList(Node* head)
{
    while (head != NULL) {
        cout << head->value << " "; // ØÈÇÚÉ Şíã ÇáÚŞÏ
        head = head->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
}

int main()
{
    Node* head = NULL;

    // ÅÏÑÇÌ ÚäÇÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    PrintList(head);

    system("pause>0");
}
