#pragma once // ÊãäÚ ÊÖãíä Çáãáİ ÃßËÑ ãä ãÑÉ İí äİÓ Çáãáİ ÇáãÕÏÑ¡ ããÇ íãäÚ ÇáÃÎØÇÁ ÇáäÇÌãÉ Úä ÇáÊÖãíä ÇáãÒÏæÌ

#include <iostream> // ÊÖãíä ãßÊÈÉ ÇáÅÏÎÇá æÇáÅÎÑÇÌ ÇáÃÓÇÓíÉ
#include "clsMyQueue.h" // ÊÖãíä ãáİ ÇáÑÃÓ ÇáÎÇÕ ÈÇáØÇÈæÑ
using namespace std; // ÇÓÊÎÏÇã İÖÇÁ ÇáÃÓãÇÁ std áÊÌäÈ ßÊÇÈÉ std:: ŞÈá ßá ÇÓÊÎÏÇã áÏæÇá Ãæ ßÇÆäÇÊ ãä ãßÊÈÉ ÇáŞíÇÓíÉ

template <class T> // ÊÚÑíİ ŞÇáÈ (template) íÓãÍ ÈÇÓÊÎÏÇã Ãí äæÚ ÈíÇäÇÊ ãÚ ÇáÕİ

class clsMyStack : public clsMyQueue<T> // ÊÚÑíİ Õİ clsMyStack ßæÑíË ãä clsMyQueue
{
public:
    void push(T Item) // ÏÇáÉ áÅÖÇİÉ ÚäÕÑ Åáì ÈÏÇíÉ ÇáßæãÉ (ÇáÓÊÇß)
    {
        clsMyQueue<T>::_MyList.InsertAtBeginning(Item); // ÇÓÊÏÚÇÁ ÏÇáÉ ÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáŞÇÆãÉ
    }

    T Top() // ÏÇáÉ ááÍÕæá Úáì ÇáÚäÕÑ İí ŞãÉ ÇáßæãÉ (ÇáÓÊÇß)
    {
        return clsMyQueue<T>::front(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÇáÚäÕÑ ÇáÃæá İí ÇáŞÇÆãÉ
    }

    T Bottom() // ÏÇáÉ ááÍÕæá Úáì ÇáÚäÕÑ İí ŞÇÚ ÇáßæãÉ (ÇáÓÊÇß)
    {
        return clsMyQueue<T>::back(); // ÇÓÊÏÚÇÁ ÏÇáÉ ÇáÍÕæá Úáì ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáŞÇÆãÉ
    }
};
