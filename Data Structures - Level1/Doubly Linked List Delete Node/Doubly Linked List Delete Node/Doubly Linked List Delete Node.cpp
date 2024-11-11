#include <iostream>
using namespace std;

// ÅäÔÇÁ İÆÉ Node áÊãËíá ÚŞÏÉ İí ÇáŞÇÆãÉ ÇáãÒÏæÌÉ ÇáãÊÕáÉ
class Node {
public:
    int value;  // ŞíãÉ ÇáÚŞÏÉ
    Node* next; // ãÄÔÑ ááÚŞÏÉ ÇáÊÇáíÉ
    Node* prev; // ãÄÔÑ ááÚŞÏÉ ÇáÓÇÈŞÉ
};

// ÏÇáÉ áÅÏÑÇÌ ÚŞÏÉ İí ÈÏÇíÉ ÇáŞÇÆãÉ
void InsertAtBeginning(Node*& head, int value) {
    /*
        1- ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ ÈÇáŞíãÉ ÇáãØáæÈÉ.
        2- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÌÏíÏÉ áíÔíÑ Åáì ÇáÑÃÓ ÇáÍÇáí ááŞÇÆãÉ.
        3- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÓÇÈŞÉ ááÑÃÓ ÇáÍÇáí áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ.
        4- ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÑÃÓ ÌÏíÏ ááŞÇÆãÉ.
    */
    Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
    newNode->value = value; // ÊÚííä ŞíãÊåÇ
    newNode->next = head; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÑÃÓ ÇáÍÇáí
    newNode->prev = NULL; // ÌÚá ÇáãÄÔÑ ÇáÓÇÈŞ ááÚŞÏÉ ÇáÌÏíÏÉ İÇÑÛ

    if (head != NULL) {
        head->prev = newNode; // ÊÍÏíË ÇáãÄÔÑ ÇáÓÇÈŞ ááÑÃÓ ÇáÍÇáí áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
    }
    head = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÑÃÓ ÌÏíÏ ááŞÇÆãÉ
}

// ÏÇáÉ ááÈÍË Úä ÚŞÏÉ ÈÇáŞíãÉ ÇáãÍÏÏÉ İí ÇáŞÇÆãÉ
Node* Find(Node* head, int value) {
    while (head != NULL) {
        if (head->value == value)
            return head; // ÅÑÌÇÚ ÇáÚŞÏÉ ÅĞÇ Êã ÇáÚËæÑ ÚáíåÇ
        head = head->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
    return NULL; // ÅÑÌÇÚ NULL ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚŞÏÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚŞÏÉ ÈÚÏ ÚŞÏÉ ãÚíäÉ İí ÇáŞÇÆãÉ
void InsertAfter(Node* current, int value) {
    /*
        1- ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ ÈÇáŞíãÉ ÇáãØáæÈÉ.
        2- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÌÏíÏÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ ááÚŞÏÉ ÇáÍÇáíÉ.
        3- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÓÇÈŞÉ ááÚŞÏÉ ÇáÌÏíÏÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÍÇáíÉ.
        4- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÊÇáíÉ ááÚŞÏÉ ÇáÍÇáíÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ.
        5- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÓÇÈŞÉ ááÚŞÏÉ ÇáÊÇáíÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ (ÅĞÇ ßÇäÊ ãæÌæÏÉ).
    */
    Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
    newNode->value = value; // ÊÚííä ŞíãÊåÇ
    newNode->next = current->next; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ ááÚŞÏÉ ÇáÍÇáíÉ
    newNode->prev = current; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÍÇáíÉ

    if (current->next != NULL) {
        current->next->prev = newNode; // ÊÍÏíË ÇáãÄÔÑ ÇáÓÇÈŞ ááÚŞÏÉ ÇáÊÇáíÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
    }
    current->next = newNode; // ÌÚá ÇáÚŞÏÉ ÇáÍÇáíÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚŞÏÉ İí äåÇíÉ ÇáŞÇÆãÉ
void InsertAtEnd(Node* head, int value) {
    /*
        1- ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ ÈÇáŞíãÉ ÇáãØáæÈÉ.
        2- ÇáÊÕİÍ ÚÈÑ ÇáŞÇÆãÉ áÅíÌÇÏ ÂÎÑ ÚŞÏÉ.
        3- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÃÎíÑÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ.
        4- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÌÏíÏÉ ÇáÓÇÈŞ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÃÎíÑÉ.
    */
    Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
    newNode->value = value; // ÊÚííä ŞíãÊåÇ
    newNode->next = NULL; // ÊÚííä ÇáãÄÔÑ ÇáÊÇáí ááÚŞÏÉ ÇáÌÏíÏÉ ßİÇÑÛ

    if (head == NULL) {
        newNode->prev = NULL; // ÊÚííä ÇáãÄÔÑ ÇáÓÇÈŞ ááÚŞÏÉ ÇáÌÏíÏÉ ßİÇÑÛ
        head = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÑÃÓ ááŞÇÆãÉ ÅĞÇ ßÇäÊ İÇÑÛÉ
    }
    else {
        Node* current = head; // ÈÏÁ ÇáÈÍË ãä ÇáÑÃÓ
        while (current->next != NULL) {
            current = current->next; // ÇáÊÕİÍ ÚÈÑ ÇáŞÇÆãÉ ááæÕæá Åáì ÂÎÑ ÚŞÏÉ
        }
        current->next = newNode; // ÌÚá ÇáÚŞÏÉ ÇáÃÎíÑÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
        newNode->prev = current; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÃÎíÑÉ
    }
}

// ÏÇáÉ áÍĞİ ÚŞÏÉ ãÚíäÉ ãä ÇáŞÇÆãÉ
void DeleteNode(Node*& head, Node*& NodeToDelete) {
    /*
        1- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÓÇÈŞÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ ááÚŞÏÉ ÇáÍÇáíÉ.
        2- ÊÚííä ãÄÔÑ ÇáÚŞÏÉ ÇáÊÇáíÉ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÓÇÈŞÉ ááÚŞÏÉ ÇáÍÇáíÉ.
        3- ÍĞİ ÇáÚŞÏÉ ÇáÍÇáíÉ.
    */
    if (head == NULL || NodeToDelete == NULL) {
        return; // ÇáÊÍŞŞ ãä Ãä ÇáŞÇÆãÉ æÇáÚŞÏÉ ááÍĞİ ÛíÑ İÇÑÛíä
    }
    if (head == NodeToDelete) {
        head = NodeToDelete->next; // ÊÍÏíË ÇáÑÃÓ ÅĞÇ ßÇäÊ ÇáÚŞÏÉ ááÍĞİ åí ÇáÑÃÓ
    }
    if (NodeToDelete->next != NULL) {
        NodeToDelete->next->prev = NodeToDelete->prev; // ÊÍÏíË ÇáãÄÔÑ ÇáÓÇÈŞ ááÚŞÏÉ ÇáÊÇáíÉ
    }
    if (NodeToDelete->prev != NULL) {
        NodeToDelete->prev->next = NodeToDelete->next; // ÊÍÏíË ÇáãÄÔÑ ÇáÊÇáí ááÚŞÏÉ ÇáÓÇÈŞÉ
    }
    delete NodeToDelete; // ÍĞİ ÇáÚŞÏÉ
}

// ÏÇáÉ áÍĞİ Ãæá ÚŞÏÉ İí ÇáŞÇÆãÉ
void DeleteFirstNode(Node*& head) {
    /*
        1- ÊÎÒíä ÇáÑÃÓ ÇáÍÇáí İí ãÊÛíÑ ãÄŞÊ.
        2- ÊÍÏíË ÇáÑÃÓ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ.
        3- ÊÚííä ÇáãÄÔÑ ÇáÓÇÈŞ ááÑÃÓ ÇáÌÏíÏ ßİÇÑÛ.
        4- ÍĞİ ÇáãÊÛíÑ ÇáãÄŞÊ ÇáĞí íÍÊæí Úáì ÇáÑÃÓ ÇáŞÏíã.
    */
    if (head == NULL) {
        return; // ÇáÊÍŞŞ ãä Ãä ÇáŞÇÆãÉ ÛíÑ İÇÑÛÉ
    }
    Node* temp = head; // ÊÎÒíä ÇáÑÃÓ ÇáÍÇáí İí ãÊÛíÑ ãÄŞÊ
    head = head->next; // ÊÍÏíË ÇáÑÃÓ áíÔíÑ Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    if (head != NULL) {
        head->prev = NULL; // ÊÚííä ÇáãÄÔÑ ÇáÓÇÈŞ ááÑÃÓ ÇáÌÏíÏ ßİÇÑÛ
    }
    delete temp; // ÍĞİ ÇáÚŞÏÉ ÇáŞÏíãÉ
}

// ÏÇáÉ áÍĞİ ÂÎÑ ÚŞÏÉ İí ÇáŞÇÆãÉ
void DeleteLastNode(Node*& head) {
    /*
        1- ÇáÊÕİÍ ÚÈÑ ÇáŞÇÆãÉ áÅíÌÇÏ ÂÎÑ ÚŞÏÉ.
        2- ÊÚííä ÇáãÄÔÑ ÇáÊÇáí ááÚŞÏÉ ŞÈá ÇáÃÎíÑÉ ßİÇÑÛ.
        3- ÍĞİ ÇáÚŞÏÉ ÇáÃÎíÑÉ.
    */
    if (head == NULL) {
        return; // ÇáÊÍŞŞ ãä Ãä ÇáŞÇÆãÉ ÛíÑ İÇÑÛÉ
    }
    if (head->next == NULL) {
        delete head; // ÍĞİ ÇáÑÃÓ ÅĞÇ ßÇäÊ ÇáÚŞÏÉ ÇáæÍíÏÉ
        head = NULL;
        return;
    }
    Node* current = head; // ÈÏÁ ÇáÈÍË ãä ÇáÑÃÓ
    while (current->next->next != NULL) {
        current = current->next; // ÇáÊÕİÍ ááæÕæá Åáì ÇáÚŞÏÉ ŞÈá ÇáÃÎíÑÉ
    }
    Node* temp = current->next; // ÊÎÒíä ÇáÚŞÏÉ ÇáÃÎíÑÉ İí ãÊÛíÑ ãÄŞÊ
    current->next = NULL; // ÊÚííä ÇáãÄÔÑ ÇáÊÇáí ááÚŞÏÉ ŞÈá ÇáÃÎíÑÉ ßİÇÑÛ
    delete temp; // ÍĞİ ÇáÚŞÏÉ ÇáÃÎíÑÉ
}

// ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÚŞÏÉ ÈãÇ İí Ğáß ÇáÚŞÏÉ ÇáÓÇÈŞÉ æÇááÇÍŞÉ
void PrintNodeDetails(Node* head) {
    if (head->prev != NULL)
        cout << head->prev->value; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÓÇÈŞÉ
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n"; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÊÇáíÉ
    else
        cout << "NULL";
}

// ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÇáŞÇÆãÉ ÇáãÒÏæÌÉ ÇáãÊÕáÉ
void PrintListDetails(Node* head) {
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head); // ØÈÇÚÉ ÊİÇÕíá ÇáÚŞÏÉ ÇáÍÇáíÉ
        head = head->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
}

// ÏÇáÉ áØÈÇÚÉ ŞÇÆãÉ ÇáÚŞÏ
void PrintList(Node* head) {
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÍÇáíÉ
        head = head->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL; // ÊåíÆÉ ÇáÑÃÓ áŞÇÆãÉ ÌÏíÏÉ

    InsertAtBeginning(head, 5); // ÅÏÑÇÌ ÚäÇÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Content:\n";
    PrintList(head); // ØÈÇÚÉ ÇáŞÇÆãÉ
    PrintListDetails(head); // ØÈÇÚÉ ÊİÇÕíá ÇáŞÇÆãÉ

    DeleteLastNode(head); // ÍĞİ ÂÎÑ ÚŞÏÉ ãä ÇáŞÇÆãÉ

    cout << "\n\n\nLinked List Content after delete last node:\n";
    PrintList(head); // ØÈÇÚÉ ÇáŞÇÆãÉ ÈÚÏ ÇáÍĞİ
    PrintListDetails(head); // ØÈÇÚÉ ÊİÇÕíá ÇáŞÇÆãÉ ÈÚÏ ÇáÍĞİ

    system("pause>0"); // ÅíŞÇİ ÇáÔÇÔÉ (ááÃäÙãÉ ÇáÊí ÊÏÚã ÇáÃãÑ)
}
