#include <iostream>
using namespace std;

//  ⁄—Ì› «·ﬂ·«” Node «·–Ì Ì„À· «·⁄ﬁœ… ›Ì «·ﬁ«∆„… «·„“œÊÃ…
class Node
{
public:
    int value;    // ﬁÌ„… «·⁄ﬁœ…
    Node* next;   // —«»ÿ ··⁄ﬁœ… «· «·Ì…
    Node* prev;   // —«»ÿ ··⁄ﬁœ… «·”«»ﬁ…
};

// œ«·… ·≈œ—«Ã ⁄ﬁœ… ›Ì »œ«Ì… «·ﬁ«∆„…
void InsertAtBeginning(Node*& head, int value) {
    /*
        1- ≈‰‘«¡ ⁄ﬁœ… ÃœÌœ… »«·ﬁÌ„… «·„ÿ·Ê»….
        2-  ⁄ÌÌ‰ „ƒ‘— «· «·Ì ··⁄ﬁœ… «·ÃœÌœ… ·Ì‘Ì— ≈·Ï —√” «·ﬁ«∆„… «·Õ«·Ì.
        3-  ⁄ÌÌ‰ „ƒ‘— «·”«»ﬁ ·—√” «·ﬁ«∆„… «·Õ«·Ì ·Ì‘Ì— ≈·Ï «·⁄ﬁœ… «·ÃœÌœ….
        4-  ⁄ÌÌ‰ «·⁄ﬁœ… «·ÃœÌœ… ﬂ«·—√” «·ÃœÌœ ··ﬁ«∆„….
    */
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

// œ«·… ·ÿ»«⁄…  ›«’Ì· «·⁄ﬁœ…
void PrintNodeDetails(Node* head) {
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

// œ«·… ·ÿ»«⁄…  ›«’Ì· «·ﬁ«∆„…
void PrintListDetails(Node* head) {
    cout << "\n\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}

// œ«·… ·ÿ»«⁄… «·ﬁ«∆„…
void PrintList(Node* head) {
    cout << "NULL <--> ";
    while (head != NULL) {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = NULL;

    // ≈œ—«Ã »⁄÷ «·⁄ﬁœ ›Ì »œ«Ì… «·ﬁ«∆„…
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    // ÿ»«⁄… „Õ ÊÌ«  «·ﬁ«∆„…
    cout << "\nLinked List Content:\n";
    PrintList(head);
    PrintListDetails(head);

    system("pause>0");  // «‰ Ÿ«— ≈œŒ«· «·„” Œœ„ ﬁ»· ≈‰Â«¡ «·»—‰«„Ã
}
