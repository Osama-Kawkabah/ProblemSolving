#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

Node* Find(Node* head, int value) {

    while (head !=NULL)
    {
        if(head->value =value){
        
            return head;
        }
        head = head->next;
    }
    return NULL;
}

void InsertAfter(Node* &head, int value) {

    if (head ==NULL)
    {
        cout << "the given previous Node Cannot by Null\n";
        return;
    }

    Node* new_Node = new Node();

    new_Node->value = value;

    new_Node->next = head->next;

    head->next = new_Node;

}

void InsertAtEnd(Node*& head, int value) {
    Node* New_Node = new Node();
    New_Node->value = value;
    New_Node->next = NULL;

    if (head == NULL) {
        head = New_Node;
        return;
    }

    Node* LastNode = head;

    // ÇÈÍË Úä ÇáÚÞÏÉ ÇáÃÎíÑÉ
    while (LastNode->next != NULL) {
        LastNode = LastNode->next;
    }

    // Úíä ÇáÚÞÏÉ ÇáÌÏíÏÉ ßäåÇíÉ
    LastNode->next = New_Node;
    return;
} 

void DeleteNode(Node*& head, int value) {
    
    if (head == NULL) return; // ÇáÞÇÆãÉ ÝÇÑÛÉ

    Node* Current = head;
    Node* Prev = head;

    if (Current != NULL && Current->value == value) {
        head = Current->next; // Þã ÈÊÛííÑ ÇáÑÃÓ
        delete Current; // ÇÍÐÝ ÇáÚÞÏÉ
        return;
    }

    while (Current != NULL && Current->value != value) {
        Prev = Current;
        Current = Current->next;
    }

    if (Current == NULL) {
        return;
    }

    Prev->next = Current->next;
    delete Current;
}

void DeleteFirstNode(Node*& head) {

    Node* Cureent = head;

    head = Cureent->next;
    delete Cureent;
}


void DeleteLastNode(Node*& head)
{
    Node* Current = head, * Prev = head;

    if (head == NULL)
    {
        return;
    }

    if (Current->next == NULL) {
        head = NULL;
        delete Current;//free from memory
        return;
    }

    // Find the key to be deleted
    while (Current != NULL && Current->next != NULL) {
        Prev = Current;
        Current = Current->next;
    }

    // Remove the node
    Prev->next = NULL;
    delete Current;//free from memory
}


void PrintElement(Node* head) {
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* Elem = NULL;
    InsertAtBeginning(Elem, 1001);
    InsertAtBeginning(Elem, 1002);
    InsertAtBeginning(Elem, 1003);
    InsertAtBeginning(Elem, 1004);

    PrintElement(Elem);

    int Number = 1001;
    Node* N1 = Find(Elem, Number);
    if (N1 != NULL)
        cout << Number << " Is Found :) \n";
    else
        cout << Number << "Is Not Found : (\n";


    InsertAfter(N1 ,5555);
    InsertAtEnd(Elem, 9999);
    PrintElement(Elem);

    DeleteNode(Elem,5555);
    PrintElement(Elem);
    cout << "\n";
    DeleteFirstNode(Elem);
    DeleteFirstNode(Elem);
    DeleteLastNode(Elem);
    PrintElement(Elem);


    return 0;
}
