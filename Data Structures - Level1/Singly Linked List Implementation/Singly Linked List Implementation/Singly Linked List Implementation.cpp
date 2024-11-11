#include <iostream>
using namespace std;

// ÅäÔÇÁ åíßá ÇáÚŞÏ (Node)
class Node
{
public:
    int value; // ŞíãÉ ÇáÚŞÏ
    Node* next; // ãÄÔÑ Åáì ÇáÚŞÏ ÇáÊÇáí
};

int main()
{
    Node* head; // ãÄÔÑ Åáì ÈÏÇíÉ ÇáŞÇÆãÉ

    Node* Node1 = NULL; // ÊåíÆÉ ÇáãÄÔÑÇÊ ÇáÃæáíÉ ááÚŞÏ
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // ÊÎÕíÕ ĞÇßÑÉ ááÚŞÏ ÇáÃæá ÈÇÓÊÎÏÇã new
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // ÊÚííä Şíã áßá ÚŞÏ
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    // ÑÈØ ÇáÚŞÏ ãÚ ÈÚÖåÇ áÊÔßíá ÇáŞÇÆãÉ ÇáãÊÕáÉ
    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL; // ÇáÚŞÏ ÇáÃÎíÑ íÔíÑ Åáì NULL

    // ØÈÇÚÉ Şíã ÇáÚŞÏ İí ÇáŞÇÆãÉ ÇáãÊÕáÉ
    head = Node1; // ÇáÈÏÇíÉ ãä ÇáÚŞÏ ÇáÃæá

    while (head != NULL) {
        cout << head->value << endl; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏ ÇáÍÇáí
        head = head->next; // ÇáÊÍÑß Åáì ÇáÚŞÏ ÇáÊÇáí
    }

    // ÍĞİ ÇáÚŞÏ ÇáÃæá áÊÌäÈ ÊÓÑÈ ÇáĞÇßÑÉ
    delete Node1;

    system("pause>0");
    return 0;
}
