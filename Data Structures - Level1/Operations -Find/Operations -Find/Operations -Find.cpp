#include <iostream>
using namespace std;

// ÊÚÑíİ ÇáÚŞÏÉ
class Node
{
public:
    int value; // ŞíãÉ ÇáÚŞÏÉ
    Node* next; // ÑÇÈØ ááÚŞÏÉ ÇáÊÇáíÉ
};

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& head, int value)
{
    // ÊÎÕíÕ ÇáĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ æÅÏÑÇÌ ÇáÈíÇäÇÊ İíåÇ
    head = new Node{ value, head };
}

// ÏÇáÉ ááÈÍË Úä ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head; // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáÚäÕÑ¡ íÊã ÅÑÌÇÚ ÇáÚŞÏÉ
        head = head->next; // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
    return NULL; // İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáÚäÕÑ
}

// ÏÇáÉ áØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void PrintList(Node* head)
{
    while (head != NULL) {
        cout << head->value << " "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ
        head = head->next; // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
}

int main()
{
    Node* head = NULL; // ÊåíÆÉ ÇáãÄÔÑ Åáì ŞíãÉ NULL ááÚŞÏÉ ÇáÃæáì

    // ÅÖÇİÉ ÈÚÖ ÇáŞíã Åáì ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    PrintList(head);

    // ÇáÈÍË Úä ÚäÕÑ ãÚíä İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    Node* N1 = Find(head, 2);

    // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáÚäÕÑ¡ íÊã ØÈÇÚÉ ÑÓÇáÉ ÊÄßÏ Ğáß
    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    system("pause>0");
}
