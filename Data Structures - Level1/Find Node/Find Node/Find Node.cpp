//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

// ÅäÔÇÁ ÇáÚÞÏÉ
class Node
{
public:
    int value; // ÞíãÉ ÇáÚÞÏÉ
    Node* next; // ÑÇÈØ ÇáÚÞÏÉ ÇáÊÇáíÉ
    Node* prev; // ÑÇÈØ ÇáÚÞÏÉ ÇáÓÇÈÞÉ
};

// ÅÏÑÇÌ ÚÞÏÉ Ýí ÈÏÇíÉ ÇáÞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& head, int value) {

    // 1- ÅäÔÇÁ ÚÞÏÉ ÌÏíÏÉ æÊÚííä ÞíãÊåÇ
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    // 2- ÊÍÏíË ÇáÑÇÈØ ááÚÞÏÉ ÇáÓÇÈÞÉ ÅÐÇ ßÇäÊ ÇáÞÇÆãÉ ÛíÑ ÝÇÑÛÉ
    if (head != NULL) {
        head->prev = newNode;
    }

    // 3- ÌÚá ÇáÚÞÏÉ ÇáÌÏíÏÉ åí ÇáÑÃÓ ÇáÌÏíÏ ááÞÇÆãÉ
    head = newNode;
}

// ÇáÈÍË Úä ÚÞÏÉ ÊÍãá ÞíãÉ ãÚíäÉ Ýí ÇáÞÇÆãÉ
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head;
        head = head->next;
    }
    return NULL;
}

// ØÈÇÚÉ ÊÝÇÕíá ÇáÚÞÏÉ (ÞíãÊåÇ æÇáÚÞÏÊíä ÇáãÌÇæÑÊíä áåÇ)
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

// ØÈÇÚÉ ÇáÞÇÆãÉ ÇáãÊÓáÓáÉ ÈÃßãáåÇ
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

    // ÅÖÇÝÉ ÚäÇÕÑ Åáì ÈÏÇíÉ ÇáÞÇÆãÉ
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    // ØÈÇÚÉ ÞÇÆãÉ ÇáÚäÇÕÑ
    cout << "\nLinked List Content:\n";
    PrintList(head);

    // ÇáÈÍË Úä ÚÞÏÉ ÊÍÊæí Úáì ÞíãÉ ãÍÏÏÉ æØÈÇÚÉ äÊíÌÉ ÇáÈÍË
    Node* N1 = Find(head, 11);
    if (N1 != NULL)
        cout << "\n\nNode Is Found :-)\n";
    else
        cout << "\n\nNode Is Not Found:-(\n";

    system("pause>0");
}
