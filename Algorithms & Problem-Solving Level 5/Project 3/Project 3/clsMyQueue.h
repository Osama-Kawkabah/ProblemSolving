#pragma once // ÊãäÚ ÊÖãíä Çáãáİ ÃßËÑ ãä ãÑÉ İí äİÓ Çáãáİ ÇáãÕÏÑ¡ ããÇ íãäÚ ÇáÃÎØÇÁ ÇáäÇÌãÉ Úä ÇáÊÖãíä ÇáãÒÏæÌ

#include <iostream> // ÊÖãíä ãßÊÈÉ ÇáÅÏÎÇá æÇáÅÎÑÇÌ ÇáÃÓÇÓíÉ
#include "clsDblLinkedList.h" // ÊÖãíä ãáİ ÇáÑÃÓ ÇáÎÇÕ ÈŞÇÆãÉ ÇáÑæÇÈØ ÇáãÒÏæÌÉ

using namespace std; // ÇÓÊÎÏÇã İÖÇÁ ÇáÃÓãÇÁ std áÊÌäÈ ßÊÇÈÉ std:: ŞÈá ßá ÇÓÊÎÏÇã áÏæÇá Ãæ ßÇÆäÇÊ ãä ãßÊÈÉ ÇáŞíÇÓíÉ

template <class T> // ÊÚÑíİ ŞÇáÈ (template) íÓãÍ ÈÇÓÊÎÏÇã Ãí äæÚ ÈíÇäÇÊ ãÚ ÇáÕİ

class clsMyQueue
{

protected:
    clsDblLinkedList <T> _MyList; // ÅäÔÇÁ ßÇÆä ãä äæÚ ŞÇÆãÉ ÇáÑæÇÈØ ÇáãÒÏæÌÉ áÊÎÒíä ÚäÇÕÑ ÇáØÇÈæÑ

public:

    void push(T Item) // ÏÇáÉ áÅÖÇİÉ ÚäÕÑ Åáì äåÇíÉ ÇáØÇÈæÑ
    {
        _MyList.InsertAtEnd(Item); // ÇÓÊÏÚÇÁ ÏÇáÉ ÅÏÑÇÌ ÚäÕÑ İí äåÇíÉ ÇáŞÇÆãÉ
    }

    void pop() // ÏÇáÉ áÅÒÇáÉ ÇáÚäÕÑ ÇáÃæá İí ÇáØÇÈæÑ
    {
        _MyList.DeleteFirstNode(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÍĞİ Ãæá ÚäÕÑ İí ÇáŞÇÆãÉ
    }

    void Print() // ÏÇáÉ áØÈÇÚÉ ÚäÇÕÑ ÇáØÇÈæÑ
    {
        _MyList.PrintList(); // ÇÓÊÏÚÇÁ ÏÇáÉ ØÈÇÚÉ ÇáŞÇÆãÉ
    }

    int Size() // ÏÇáÉ ááÍÕæá Úáì ÚÏÏ ÇáÚäÇÕÑ İí ÇáØÇÈæÑ
    {
        return _MyList.Size(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÍÌã ÇáŞÇÆãÉ
    }

    bool IsEmpty() // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáØÇÈæÑ İÇÑÛÇğ
    {
        return _MyList.IsEmpty(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÊÍŞŞ ãä Îáæ ÇáŞÇÆãÉ
    }

    T front() // ÏÇáÉ ááÍÕæá Úáì ÇáÚäÕÑ ÇáÃæá İí ÇáØÇÈæÑ
    {
        return _MyList.GetItem(0); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÇáÚäÕÑ ÇáÃæá İí ÇáŞÇÆãÉ
    }

    T back() // ÏÇáÉ ááÍÕæá Úáì ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáØÇÈæÑ
    {
        return _MyList.GetItem(Size() - 1); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáŞÇÆãÉ
    }

    T GetItem(int Index) // ÏÇáÉ ááÍÕæá Úáì ÚäÕÑ ãÍÏÏ İí ÇáØÇÈæÑ ÈäÇÁğ Úáì ÇáİåÑÓ
    {
        return _MyList.GetItem(Index); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÇáÚäÕÑ İí ÇáİåÑÓ ÇáãÍÏÏ İí ÇáŞÇÆãÉ
    }

    void Reverse() // ÏÇáÉ áÚßÓ ÊÑÊíÈ ÇáÚäÇÕÑ İí ÇáØÇÈæÑ
    {
        _MyList.Reverse(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÚßÓ ÊÑÊíÈ ÇáŞÇÆãÉ
    }

    void UpdateItem(int Index, T NewValue) // ÏÇáÉ áÊÍÏíË ŞíãÉ ÚäÕÑ ãÍÏÏ İí ÇáØÇÈæÑ
    {
        _MyList.UpdateItem(Index, NewValue); // ÇÓÊÏÚÇÁ ÏÇáÉ ÊÍÏíË ÇáÚäÕÑ İí ÇáİåÑÓ ÇáãÍÏÏ ÈÇáŞíãÉ ÇáÌÏíÏÉ
    }

    void InsertAfter(int Index, T NewValue) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÌÏíÏ ÈÚÏ ÚäÕÑ ãÍÏÏ İí ÇáØÇÈæÑ
    {
        _MyList.InsertAfter(Index, NewValue); // ÇÓÊÏÚÇÁ ÏÇáÉ ÅÏÑÇÌ ÇáÚäÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
    }

    void InsertAtFront(T Value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáØÇÈæÑ
    {
        _MyList.InsertAtBeginning(Value); // ÇÓÊÏÚÇÁ ÏÇáÉ ÅÏÑÇÌ ÇáÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    }

    void InsertAtBack(T Value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí äåÇíÉ ÇáØÇÈæÑ
    {
        _MyList.InsertAtEnd(Value); // ÇÓÊÏÚÇÁ ÏÇáÉ ÅÏÑÇÌ ÇáÚäÕÑ İí äåÇíÉ ÇáŞÇÆãÉ
    }

    void Clear() // ÏÇáÉ áÊİÑíÛ ÇáØÇÈæÑ ãä ÌãíÚ ÇáÚäÇÕÑ
    {
        _MyList.Clear(); // ÇÓÊÏÚÇÁ ÏÇáÉ ãÓÍ ÌãíÚ ÇáÚäÇÕÑ ãä ÇáŞÇÆãÉ
    }
};
