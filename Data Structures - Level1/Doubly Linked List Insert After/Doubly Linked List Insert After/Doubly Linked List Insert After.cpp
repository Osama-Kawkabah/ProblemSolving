#include <iostream>
using namespace std;

// ÅÖÇİÉ ÊÚáíŞ: ÊÖãíä ÇáãßÊÈÉ iostream áÅãßÇäíÉ ÇÓÊÎÏÇã ÇáÅÏÎÇá æÇáÅÎÑÇÌ ÇáŞíÇÓí İí ÇáÈÑäÇãÌ

// ÅÖÇİÉ ÊÚáíŞ: ÊÚÑíİ İÆÉ Node (ÇáÚäÕÑ) áÊãËíá ÚäÇÕÑ ÇáŞÇÆãÉ ÇáãÊÕáÉ
class Node
{
public:
    int value; // ŞíãÉ ÇáÚäÕÑ
    Node* next; // ÑÇÈØ Åáì ÇáÚäÕÑ ÇáÊÇáí İí ÇáŞÇÆãÉ
    Node* prev; // ÑÇÈØ Åáì ÇáÚäÕÑ ÇáÓÇÈŞ İí ÇáŞÇÆãÉ
};

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
void InsertAtBeginning(Node*& head, int value) {

    // ÊÚáíŞ: ÅäÔÇÁ ÚäÕÑ ÌÏíÏ æÊÚííä ŞíãÊå
    Node* newNode = new Node();
    newNode->value = value;
    // ÊÚáíŞ: ÊÚííä ÇáÚäÇÕÑ ÇáãÊÕáÉ áÅÏÑÇÌ ÇáÚäÕÑ ÇáÌÏíÏ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    newNode->next = head;
    newNode->prev = NULL;

    // ÊÚáíŞ: ÊÍÏíË ÇáÚäÕÑ ÇáÓÇÈŞ áÑÃÓ ÇáŞÇÆãÉ İí ÍÇá ßÇä åäÇß ÚäÇÕÑ ãæÌæÏÉ ÈÇáİÚá
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode; // ÊÚáíŞ: ÊÚííä ÇáÚäÕÑ ÇáÌÏíÏ ßÑÃÓ ÌÏíÏ ááŞÇÆãÉ
}

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ ááÈÍË Úä ÚäÕÑ ÈŞíãÉ ãÍÏÏÉ ÏÇÎá ÇáŞÇÆãÉ
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        // ÊÚáíŞ: ÇáÈÍË Úä ÇáÚäÕÑ ÇáĞí íÍãá ÇáŞíãÉ ÇáãÍÏÏÉ
        if (head->value == Value)
            return head; // ÊÚáíŞ: ÅÑÌÇÚ ÚäæÇä ÇáÚäÕÑ ÅĞÇ Êã ÇáÚËæÑ Úáíå
        head = head->next;
    }
    return NULL; // ÊÚáíŞ: ÅÑÌÇÚ ŞíãÉ İÇÑÛÉ İí ÍÇá ÚÏã ÇáÚËæÑ Úáì ÇáÚäÕÑ
}

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÈÚÏ ÚäÕÑ ãÚíä İí ÇáŞÇÆãÉ
void InsertAfter(Node* current, int value) {
    // ÊÚáíŞ: ÅäÔÇÁ ÚäÕÑ ÌÏíÏ æÊÚííä ŞíãÊå
    Node* newNode = new Node();
    newNode->value = value;
    // ÊÚáíŞ: ÊÚííä ÇáÚäÇÕÑ ÇáãÊÕáÉ áÅÏÑÇÌ ÇáÚäÕÑ ÇáÌÏíÏ ÈÚÏ ÇáÚäÕÑ ÇáãÚíä
    newNode->next = current->next;
    newNode->prev = current;
    // ÊÚáíŞ: ÊÍÏíË ÇáÚäÕÑ ÇááÇÍŞ ááÚäÕÑ ÇáãÚíä ááÅÔÇÑÉ Åáì ÇáÚäÕÑ ÇáÌÏíÏ
    if (current->next != NULL) {
        current->prev = newNode;
    }
    current->next = newNode; // ÊÚáíŞ: ÊÍÏíË ÇáÚäÕÑ ÇááÇÍŞ ááÚäÕÑ ÇáãÚíä ááÅÔÇÑÉ Åáì ÇáÚäÕÑ ÇáÌÏíÏ
}

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÇáÚäÕÑ ÈãÇ İí Ğáß ÇáÚäÇÕÑ ÇáÓÇÈŞÉ æÇáÊÇáíÉ áå
void PrintNodeDetails(Node* head)
{
    if (head->prev != NULL)
        cout << head->prev->value; // ÊÚáíŞ: ØÈÇÚÉ ŞíãÉ ÇáÚäÕÑ ÇáÓÇÈŞ
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n"; // ÊÚáíŞ: ØÈÇÚÉ ŞíãÉ ÇáÚäÕÑ ÇáÊÇáí
    else
        cout << "NULL";
}

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÇáŞÇÆãÉ ÇáãÊÕáÉ
void PrintListDetails(Node* head)
{
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head); // ÊÚáíŞ: ØÈÇÚÉ ÊİÇÕíá ÇáÚäÕÑ ÇáÍÇáí
        head = head->next; // ÊÚáíŞ: ÇáÊÍÑß Åáì ÇáÚäÕÑ ÇáÊÇáí İí ÇáŞÇÆãÉ
    }
}

// ÅÖÇİÉ ÊÚáíŞ: ÏÇáÉ áØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÕáÉ
void PrintList(Node* head)
{
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> "; // ÊÚáíŞ: ØÈÇÚÉ ŞíãÉ ÇáÚäÕÑ ÇáÍÇáí
        head = head->next; // ÊÚáíŞ: ÇáÊÍÑß Åáì ÇáÚäÕÑ ÇáÊÇáí İí ÇáŞÇÆãÉ
    }
    cout << "NULL";
}

int main()
{
    Node* head = NULL; // ÊÚáíŞ: ÊåíÆÉ ÇáÑÃÓ áŞÇÆãÉ ÌÏíÏÉ

 
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