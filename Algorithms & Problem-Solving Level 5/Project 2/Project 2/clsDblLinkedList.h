#pragma once

#include <iostream>
using namespace std;

// ÊÚÑíİ ŞÇáÈ ÇáİÆÉ áŞÇÆãÉ ãÑÊÈØÉ ãÒÏæÌÉ
template <class T>
class clsDblLinkedList
{
protected:
    int _Size = 0; // ãÊÛíÑ ãÍãí áÊÊÈÚ ÍÌã ÇáŞÇÆãÉ

public:
    // ÊÚÑíİ İÆÉ ÇáÚŞÏÉ ÇáÏÇÎáíÉ
    class Node
    {
    public:
        T value; // ŞíãÉ ÇáÚŞÏÉ
        Node* next; // ãÄÔÑ ááÚŞÏÉ ÇáÊÇáíÉ
        Node* prev; // ãÄÔÑ ááÚŞÏÉ ÇáÓÇÈŞÉ
    };

    Node* head = NULL; // ãÄÔÑ ááÑÃÓ ÇáŞÇÆãÉ

    // ÏÇáÉ áÅÏÎÇá ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    void InsertAtBeginning(T value)
    {
        Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
        newNode->value = value; // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
        newNode->next = head; // ÊÚííä ÇáÊÇáí ááÑÃÓ ÇáÍÇáí
        newNode->prev = NULL; // áÇ íæÌÏ ÚŞÏÉ ÓÇÈŞÉ

        if (head != NULL) { // ÅĞÇ áã Êßä ÇáŞÇÆãÉ İÇÑÛÉ
            head->prev = newNode; // ÊÚííä ÇáÓÇÈŞ ááÑÃÓ ÇáÍÇáí
        }
        head = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÑÃÓ ÇáŞÇÆãÉ
        _Size++; // ÒíÇÏÉ ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áØÈÇÚÉ ÚäÇÕÑ ÇáŞÇÆãÉ
    void PrintList()
    {
        Node* Current = head; // ÈÏÁ ÇáØÈÇÚÉ ãä ÇáÑÃÓ
        while (Current != NULL) { // ÇáÇÓÊãÑÇÑ ÍÊì äåÇíÉ ÇáŞÇÆãÉ
            cout << Current->value << " "; // ØÈÇÚÉ ŞíãÉ ÇáÚŞÏÉ ÇáÍÇáíÉ
            Current = Current->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
        }
        cout << "\n"; // ØÈÇÚÉ ÓØÑ ÌÏíÏ ÈÚÏ ÇáÇäÊåÇÁ
    }

    // ÏÇáÉ ááÈÍË Úä ÚŞÏÉ ÈŞíãÉ ãÚíäÉ
    Node* Find(T Value)
    {
        Node* Current = head; // ÈÏÁ ÇáÈÍË ãä ÇáÑÃÓ
        while (Current != NULL) { // ÇáÇÓÊãÑÇÑ ÍÊì äåÇíÉ ÇáŞÇÆãÉ
            if (Current->value == Value) // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáŞíãÉ ÇáãØáæÈÉ
                return Current; // ÅÑÌÇÚ ÇáÚŞÏÉ
            Current = Current->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
        }
        return NULL; // ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáŞíãÉ ÇáãØáæÈÉ
    }

    // ÏÇáÉ áÅÏÎÇá ÚäÕÑ ÈÚÏ ÚŞÏÉ ãÚíäÉ
    void InsertAfter(Node* current, T value)
    {
        Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
        newNode->value = value; // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
        newNode->next = current->next; // ÊÚííä ÇáÊÇáí ááÚŞÏÉ ÇáÍÇáíÉ
        newNode->prev = current; // ÊÚííä ÇáÓÇÈŞ ááÚŞÏÉ ÇáÍÇáíÉ

        if (current->next != NULL) { // ÅĞÇ ßÇäÊ ÇáÚŞÏÉ ÇáÍÇáíÉ áíÓÊ ÇáÃÎíÑÉ
            current->next->prev = newNode; // ÊÚííä ÇáÓÇÈŞ ááÚŞÏÉ ÇáÊÇáíÉ
        }
        current->next = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÇáÊÇáí ááÚŞÏÉ ÇáÍÇáíÉ
        _Size++; // ÒíÇÏÉ ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áÅÏÎÇá ÚäÕÑ İí äåÇíÉ ÇáŞÇÆãÉ
    void InsertAtEnd(T value)
    {
        Node* newNode = new Node(); // ÅäÔÇÁ ÚŞÏÉ ÌÏíÏÉ
        newNode->value = value; // ÊÚííä ŞíãÉ ÇáÚŞÏÉ ÇáÌÏíÏÉ
        newNode->next = NULL; // áÇ íæÌÏ ÚŞÏÉ ÊÇáíÉ
        if (head == NULL) { // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
            newNode->prev = NULL; // áÇ íæÌÏ ÚŞÏÉ ÓÇÈŞÉ
            head = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÑÃÓ ÇáŞÇÆãÉ
        }
        else {
            Node* current = head; // ÈÏÁ ÇáÈÍË ãä ÇáÑÃÓ
            while (current->next != NULL) { // ÇáÇÓÊãÑÇÑ ÍÊì ÇáæÕæá Åáì ÇáäåÇíÉ
                current = current->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
            }
            current->next = newNode; // ÊÚííä ÇáÚŞÏÉ ÇáÌÏíÏÉ ßÇáÊÇáí ááÚŞÏÉ ÇáÃÎíÑÉ
            newNode->prev = current; // ÊÚííä ÇáÚŞÏÉ ÇáÃÎíÑÉ ßÓÇÈŞ ááÚŞÏÉ ÇáÌÏíÏÉ
        }
        _Size++; // ÒíÇÏÉ ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áÍĞİ ÚŞÏÉ ãÚíäÉ
    void DeleteNode(Node*& NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL) { // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ Ãæ ÇáÚŞÏÉ ÛíÑ ãæÌæÏÉ
            return; // áÇ ÔíÁ ááÍĞİ
        }
        if (head == NodeToDelete) { // ÅĞÇ ßÇäÊ ÇáÚŞÏÉ åí ÇáÑÃÓ
            head = NodeToDelete->next; // ÊÚííä ÇáÑÃÓ ÇáÌÏíÏ
        }
        if (NodeToDelete->next != NULL) { // ÅĞÇ ßÇäÊ ÇáÚŞÏÉ áíÓÊ ÇáÃÎíÑÉ
            NodeToDelete->next->prev = NodeToDelete->prev; // ÊÚííä ÇáÓÇÈŞ ááÚŞÏÉ ÇáÊÇáíÉ
        }
        if (NodeToDelete->prev != NULL) { // ÅĞÇ ßÇäÊ ÇáÚŞÏÉ áíÓÊ ÇáÃæáì
            NodeToDelete->prev->next = NodeToDelete->next; // ÊÚííä ÇáÊÇáí ááÚŞÏÉ ÇáÓÇÈŞÉ
        }
        delete NodeToDelete; // ÍĞİ ÇáÚŞÏÉ
        _Size--; // ÊŞáíá ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áÍĞİ Ãæá ÚŞÏÉ İí ÇáŞÇÆãÉ
    void DeleteFirstNode()
    {
        if (head == NULL) { // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
            return; // áÇ ÔíÁ ááÍĞİ
        }
        Node* temp = head; // ÊÎÒíä ÇáÑÃÓ ÇáÍÇáí
        head = head->next; // ÊÚííä ÇáÑÃÓ ÇáÌÏíÏ
        if (head != NULL) { // ÅĞÇ áã Êßä ÇáŞÇÆãÉ İÇÑÛÉ ÈÚÏ ÇáÍĞİ
            head->prev = NULL; // ÊÚííä ÇáÓÇÈŞ ááÑÃÓ ÇáÌÏíÏ
        }
        delete temp; // ÍĞİ ÇáÑÃÓ ÇáŞÏíã
        _Size--; // ÊŞáíá ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áÍĞİ ÂÎÑ ÚŞÏÉ İí ÇáŞÇÆãÉ
    void DeleteLastNode()
    {
        if (head == NULL) { // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
            return; // áÇ ÔíÁ ááÍĞİ
        }

        if (head->next == NULL) { // ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ ÊÍÊæí Úáì ÚŞÏÉ æÇÍÏÉ İŞØ
            delete head; // ÍĞİ ÇáÚŞÏÉ ÇáæÍíÏÉ
            head = NULL; // ÊÚííä ÇáÑÃÓ Åáì NULL
            return; // ÅäåÇÁ ÇáÏÇáÉ
        }

        Node* current = head; // ÈÏÁ ÇáÈÍË ãä ÇáÑÃÓ
        while (current->next->next != NULL) { // ÇáÇÓÊãÑÇÑ ÍÊì ÇáæÕæá Åáì ÇáÚŞÏÉ ŞÈá ÇáÃÎíÑÉ
            current = current->next; // ÇáÇäÊŞÇá Åáì ÇáÚŞÏÉ ÇáÊÇáíÉ
        }

        Node* temp = current->next; // ÊÎÒíä ÇáÚŞÏÉ ÇáÃÎíÑÉ
        current->next = NULL; // ÊÚííä ÇáÊÇáí ááÚŞÏÉ ŞÈá ÇáÃÎíÑÉ Åáì NULL
        delete temp; // ÍĞİ ÇáÚŞÏÉ ÇáÃÎíÑÉ
        _Size--; // ÊŞáíá ÍÌã ÇáŞÇÆãÉ
    }

    // ÏÇáÉ áÅÑÌÇÚ ÍÌã ÇáŞÇÆãÉ
    int Size()
    {
        return _Size;
    }

    // ÏÇáÉ ááÊÍŞŞ ÅĞÇ ßÇäÊ ÇáŞÇÆãÉ İÇÑÛÉ
    bool IsEmpty()
    {
        return (_Size == 0);
    }

    // ÏÇáÉ áÊİÑíÛ ÇáŞÇÆãÉ
    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    }

    // ÏÇáÉ áÚßÓ ÊÑÊíÈ ÇáŞÇÆãÉ
    void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    // ÏÇáÉ áÅÑÌÇÚ ÚŞÏÉ ãÚíäÉ ÍÓÈ ÇáİåÑÓ
    Node* GetNode(int Index)
    {
        int Counter = 0;

        if (Index > _Size - 1 || Index < 0)
            return NULL;

        Node* Current = head;
        while (Current != NULL && (Current->next != NULL)) {
            if (Counter == Index)
                break;
            Current = Current->next;
            Counter++;
        }

        return Current;
    }

    // ÏÇáÉ áÅÑÌÇÚ ŞíãÉ ÚäÕÑ ÍÓÈ ÇáİåÑÓ
    T GetItem(int Index)
    {
        Node* ItemNode = GetNode(Index);
        if (ItemNode == NULL)
            return NULL;
        else
            return ItemNode->value;
    }

    // ÏÇáÉ áÊÍÏíË ŞíãÉ ÚäÕÑ ÍÓÈ ÇáİåÑÓ
    bool UpdateItem(int Index, T NewValue)
    {
        Node* ItemNode = GetNode(Index);
        if (ItemNode != NULL)
        {
            ItemNode->value = NewValue;
            return true;
        }
        else
            return false;
    }

    // ÏÇáÉ áÅÏÎÇá ÚäÕÑ ÈÚÏ ÚŞÏÉ ãÚíäÉ ÍÓÈ ÇáİåÑÓ
    bool InsertAfter(int Index, T value)
    {
        Node* ItemNode = GetNode(Index);
        if (ItemNode != NULL)
        {
            InsertAfter(ItemNode, value);
            return true;
        }
        else
            return false;
    }
};
