#include <iostream>
using namespace std;

// ÊÚÑíİ ÇáßáÇÓ Node ÇáĞí íãËá ÇáÚŞÏÉ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
class Node {
public:
    int Value;   // ŞíãÉ ÇáÚŞÏÉ
    Node* Next;    // ÑÇÈØ ááÚŞÏÉ ÇáÊÇáíÉ
};

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAtBeginning(Node*& Element, int Value) {
    Node* El = new Node();  // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ

    El->Value = Value;  // ÊÚííä ÇáŞíãÉ ááÚŞÏÉ ÇáÌÏíÏÉ
    El->Next = Element; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÇáÃæáì

    Element = El;   // ÊÍÏíË ÇáÚŞÏÉ ÇáÃæáì İí ÇáŞÇÆãÉ áÊßæä ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

// ÏÇáÉ áØÈÇÚÉ Şíã ÇáÚŞÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void Print(Node* Element) {
    while (Element != NULL) {
        cout << Element->Value << " "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ
        Element = Element->Next;    // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
}

// ÏÇáÉ ááÈÍË Úä ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
Node* Find(Node* El, int Number) {
    while (El != NULL) {
        if (El->Value == Number)
            return El;  // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáŞíãÉ¡ íÊã ÅÑÌÇÚ ÇáÚŞÏÉ
        El = El->Next;  // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
    }
    return NULL; // İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáŞíãÉ
}

// ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÈÚÏ ÚäÕÑ ãÍÏÏ İí ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
void InsertAfter(Node* Prev_Node, int Value) {
    if (Prev_Node == NULL) { // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚŞÏÉ ÇáÓÇÈŞÉ ãæÌæÏÉ
        cout << "ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÛíÑ ãæÌæÏÉ" << endl;
        return;
    }

    Node* New_Node = new Node(); // ÊÎÕíÕ ĞÇßÑÉ áÚŞÏÉ ÌÏíÏÉ
    New_Node->Value = Value; // ÊÚííä ÇáŞíãÉ ááÚŞÏÉ ÇáÌÏíÏÉ
    New_Node->Next = Prev_Node->Next; // ÌÚá ÇáÚŞÏÉ ÇáÌÏíÏÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÊí Êáí ÇáÚŞÏÉ ÇáÓÇÈŞÉ
    Prev_Node->Next = New_Node; // ÌÚá ÇáÚŞÏÉ ÇáÓÇÈŞÉ ÊÔíÑ Åáì ÇáÚŞÏÉ ÇáÌÏíÏÉ
}

int main() {
    Node* Element = nullptr; // ÊåíÆÉ ÇáãÄÔÑ Åáì ŞíãÉ NULL ááÚŞÏÉ ÇáÃæáì

    // ÅÏÑÇÌ ÈÚÖ ÇáŞíã İí ÈÏÇíÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    InsertAtBeginning(Element, 1);
    InsertAtBeginning(Element, 2);
    InsertAtBeginning(Element, 3);
    InsertAtBeginning(Element, 4);
    InsertAtBeginning(Element, 5);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ
    Print(Element);
    cout << endl;

    // ÇáÈÍË Úä ÚŞÏÉ ÊÍãá ÇáŞíãÉ 3
    Node* Nl = Find(Element, 3);

    // ÅÏÑÇÌ ŞíãÉ ÌÏíÏÉ 10 ÈÚÏ ÇáÚŞÏÉ ÇáÊí ÊÍãá ÇáŞíãÉ 3
    InsertAfter(Nl, 1000);

    // ØÈÇÚÉ ÇáŞÇÆãÉ ÇáãÊÓáÓáÉ ÈÚÏ ÇáÅÏÑÇÌ
    Print(Element);
    cout << endl;

    system("pause>0");
}
