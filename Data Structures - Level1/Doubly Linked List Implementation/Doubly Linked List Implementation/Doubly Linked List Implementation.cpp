#include <iostream>
using namespace std;

// ÊÚÑíİ ÇáßáÇÓ Node ÇáĞí íãËá ÇáÚŞÏÉ İí ÇáŞÇÆãÉ ÇáãÒÏæÌÉ
class Node {
public:
    int value;    // ŞíãÉ ÇáÚŞÏÉ
    Node* next;   // ÑÇÈØ ááÚŞÏÉ ÇáÊÇáíÉ
    Node* prev;   // ÑÇÈØ ááÚŞÏÉ ÇáÓÇÈŞÉ
};

int main() {
    Node* head;    // ãÄÔÑ ááÑÃÓ (ÇáÚŞÏÉ ÇáÃæáì)

    // ÊÚÑíİ ËáÇË ãÄÔÑÇÊ ááÚŞÏ
    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // ÊÎÕíÕ ĞÇßÑÉ áËáÇË ÚŞÏ İí ÇáßæãÉ
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // ÊÚííä ÇáŞíã ááÚŞÏ
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // ÑÈØ ÇáÚŞÏ ãÚ ÈÚÖåÇ ÇáÈÚÖ
    Node1->next = Node2;  // ÇáÚŞÏÉ ÇáÃæáì ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáËÇäíÉ
    Node1->prev = NULL;   // ÇáÚŞÏÉ ÇáÃæáì áíÓ áåÇ ÚŞÏÉ ÓÇÈŞÉ

    Node2->next = Node3;  // ÇáÚŞÏÉ ÇáËÇäíÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáËÇáËÉ
    Node2->prev = Node1;  // ÇáÚŞÏÉ ÇáËÇäíÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÃæáì

    Node3->next = NULL;   // ÇáÚŞÏÉ ÇáËÇáËÉ áíÓ áåÇ ÚŞÏÉ ÊÇáíÉ
    Node3->prev = Node2;  // ÇáÚŞÏÉ ÇáËÇáËÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáËÇäíÉ

    // ÊÚííä ÇáÑÃÓ Åáì ÇáÚŞÏÉ ÇáÃæáì
    head = Node1;

    // ØÈÇÚÉ ÇáŞíã İí ÇáŞÇÆãÉ ÇáãÒÏæÌÉ
    while (head != NULL) {
        cout << head->value << endl;
        head = head->next;  // ÇáÊÍÑß Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }

    system("pause>0");  // ÇäÊÙÇÑ ÅÏÎÇá ÇáãÓÊÎÏã ŞÈá ÅäåÇÁ ÇáÈÑäÇãÌ
    return 0;           // ÅäåÇÁ ÇáÈÑäÇãÌ
}
