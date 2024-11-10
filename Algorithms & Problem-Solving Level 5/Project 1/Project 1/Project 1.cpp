#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    // ÅäÔÇÁ ŞÇÆãÉ ãÑÊÈØÉ ãÒÏæÌÉ ãä ÇáÃÚÏÇÏ ÇáÕÍíÍÉ
    clsDblLinkedList<int> MydblLinkedList;

    // ÅÖÇİÉ ÚäÇÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    // ØÈÇÚÉ ãÍÊæì ÇáŞÇÆãÉ
    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    // ÅÏÎÇá 500 ÈÚÏ ÇáÚŞÏÉ İí ÇáİåÑÓ 3
    MydblLinkedList.InsertAfter(3, 500);
    cout << "\nAfter Insert \n";
    MydblLinkedList.PrintList();

    // ÊÍÏíË ŞíãÉ ÇáÚäÕÑ İí ÇáİåÑÓ 2 Åáì 500
    MydblLinkedList.UpdateItem(2, 500);
    cout << "\nAfter Update Item(2) \n";
    MydblLinkedList.PrintList();

    // ØÈÇÚÉ ŞíãÉ ÇáÚäÕÑ İí ÇáİåÑÓ 2
    cout << "\nItem(s) Value Is: " << MydblLinkedList.GetItem(2) << endl;

    // ÇáÍÕæá Úáì ÚŞÏÉ İí ÇáİåÑÓ 3
    clsDblLinkedList<int>::Node* N = MydblLinkedList.GetNode(3);
    cout << "\nNode Value Is: " << N->value << endl;

    // ÚßÓ ÊÑÊíÈ ÇáŞÇÆãÉ æØÈÇÚÉ ÇáãÍÊæì
    MydblLinkedList.Reverse();
    MydblLinkedList.PrintList();

    // ÇáÊÍŞŞ ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
    if (MydblLinkedList.IsEmpty())
    {
        cout << "Yes List Is Empty\n";
    }
    else
    {
        cout << "No List Is Empty\n";
    }

    // ØÈÇÚÉ ÚÏÏ ÇáÚäÇÕÑ İí ÇáŞÇÆãÉ
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ÇáÈÍË Úä ÚŞÏÉ ÈŞíãÉ 2
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    // ÅÏÎÇá 500 ÈÚÏ ÇáÚŞÏÉ ÇáÊí ÊÍÊæí Úáì 2
    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    // ÅÏÎÇá 700 İí äåÇíÉ ÇáŞÇÆãÉ
    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    // ÇáÈÍË Úä ÚŞÏÉ ÈŞíãÉ 4 æÍĞİåÇ
    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    // ÍĞİ ÇáÚŞÏÉ ÇáÃæáì
    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    // ÍĞİ ÇáÚŞÏÉ ÇáÃÎíÑÉ
    MydblLinkedList.DeleteLastNode();
    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.PrintList();

    // ØÈÇÚÉ ÚÏÏ ÇáÚäÇÕÑ İí ÇáŞÇÆãÉ ÈÚÏ ÇáÍĞİ
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ÊİÑíÛ ÇáŞÇÆãÉ æØÈÇÚÉ ÚÏÏ ÇáÚäÇÕÑ ÈÚÏ ÇáÊİÑíÛ
    MydblLinkedList.Clear();
    cout << "Number Of Items In The Linked List = " << MydblLinkedList.Size() << endl;

    // ÅíŞÇİ ãÄŞÊ ááäÙÇã
    system("pause>0");
    return 0;
}
