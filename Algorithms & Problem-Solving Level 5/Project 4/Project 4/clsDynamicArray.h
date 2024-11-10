#pragma once 

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:

    int _Size = 0; // ãÊÛíÑ áÊÎÒíä ÍÌã ÇáãÕİæİÉ
    T* _TempArray; // ãÄÔÑ áãÕİæİÉ ãÄŞÊÉ

public:

    T* OriginalArray; // ãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÏíäÇãíßíÉ

    clsDynamicArray(int Size = 0) // ÏÇáÉ ÇáÈäÇÁ áÅäÔÇÁ ãÕİæİÉ ÈÍÌã ãÚíä
    {
        if (Size < 0) // ÇáÊÍŞŞ ãä Ãä ÇáÍÌã ÛíÑ ÓÇáÈ
            Size = 0; // ÊÚííä ÇáÍÌã Åáì 0 ÅĞÇ ßÇä ÓÇáÈğÇ

        _Size = Size; // ÊÚííä ÍÌã ÇáãÕİæİÉ Åáì ÇáŞíãÉ ÇáãÏÎáÉ

        OriginalArray = new T[_Size]; // ÊÎÕíÕ ĞÇßÑÉ ááãÕİæİÉ ÇáÏíäÇãíßíÉ
    }

    ~clsDynamicArray() // ÏÇáÉ ÇáåÏã áÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ
    {
        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ
    }

    bool SetItem(int index, T Value) // ÏÇáÉ áÊÚííä ŞíãÉ İí ÇáãÕİæİÉ İí İåÑÓ ãÚíä
    {
        if (index >= _Size) // ÇáÊÍŞŞ ãä ÕÍÉ ÇáİåÑÓ
        {
            return false; // ÅÑÌÇÚ false ÅĞÇ ßÇä ÇáİåÑÓ ÛíÑ ÕÍíÍ
        }

        OriginalArray[index] = Value; // ÊÚííä ÇáŞíãÉ İí ÇáİåÑÓ ÇáãÍÏÏ
        return true; // ÅÑÌÇÚ true ÅĞÇ Êã ÇáÊÚííä ÈäÌÇÍ
    }

    int Size() // ÏÇáÉ ááÍÕæá Úáì ÍÌã ÇáãÕİæİÉ
    {
        return _Size; // ÅÑÌÇÚ ÍÌã ÇáãÕİæİÉ
    }

    bool IsEmpty() // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇäÊ ÇáãÕİæİÉ İÇÑÛÉ
    {
        return (_Size == 0 ? true : false); // ÅÑÌÇÚ true ÅĞÇ ßÇä ÍÌã ÇáãÕİæİÉ 0
    }

    void PrintList() // ÏÇáÉ áØÈÇÚÉ ãÍÊæíÇÊ ÇáãÕİæİÉ
    {
        for (int i = 0; i <= _Size - 1; i++) // ÍáŞÉ ÊãÑ ÚÈÑ ÚäÇÕÑ ÇáãÕİæİÉ
        {
            cout << OriginalArray[i] << " "; // ØÈÇÚÉ ßá ÚäÕÑ
        }
        cout << "\n"; // ÇáÇäÊŞÇá Åáì ÓØÑ ÌÏíÏ ÈÚÏ ÇáØÈÇÚÉ
    }

    void Resize(int NewSize) // ÏÇáÉ áÊÛííÑ ÍÌã ÇáãÕİæİÉ
    {
        _TempArray = new T[NewSize]; // ÊÎÕíÕ ãÕİæİÉ ÌÏíÏÉ ãÄŞÊÉ ÈÇáÍÌã ÇáÌÏíÏ

        // ÊÍÏíÏ ÇáÍÌã ÇáÃÕáí áíßæä ÇáÍÌã ÇáÌÏíÏ ÅĞÇ ßÇä ÇáÍÌã ÇáÌÏíÏ ÃŞá ãä ÇáÍÌã ÇáÃÕáí
        if (NewSize < _Size)
            _Size = NewSize;

        // äÓÎ ÇáÈíÇäÇÊ ãä ÇáãÕİæİÉ ÇáÃÕáíÉ Åáì ÇáãÕİæİÉ ÇáãÄŞÊÉ ÍÊì ÇáÍÌã ÇáãÍÏÏ
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize; // ÊÚííä ÇáÍÌã ÇáÌÏíÏ ááãÕİæİÉ

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ ÇáÃÕáíÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÕİæİÉ ÇáãÄŞÊÉ ßãÕİæİÉ ÃÕáíÉ ÌÏíÏÉ
    }

    void Reverse() // ÏÇáÉ áÚßÓ ÊÑÊíÈ ÇáÚäÇÕÑ İí ÇáãÕİæİÉ
    {
        _TempArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÌÏíÏÉ ÈäİÓ ÍÌã ÇáãÕİæİÉ ÇáÃÕáíÉ

        int counter = 0; // ãÊÛíÑ ÚÏÇÏ áãáÁ ÇáãÕİæİÉ ÇáãÄŞÊÉ ãä ÇáÈÏÇíÉ

        for (int i = _Size - 1; i >= 0; i--) // ÍáŞÉ ÊãÑ ÚÈÑ ÚäÇÕÑ ÇáãÕİæİÉ ÇáÃÕáíÉ ãä ÇáäåÇíÉ Åáì ÇáÈÏÇíÉ
        {
            _TempArray[counter] = OriginalArray[i]; // äÓÎ ÇáÚäÕÑ ãä ÇáãÕİæİÉ ÇáÃÕáíÉ Åáì ÇáãÄŞÊÉ
            counter++; // ÒíÇÏÉ ÇáÚÏÇÏ
        }

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ ÇáÃÕáíÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÕİæİÉ ÇáãÄŞÊÉ ßãÕİæİÉ ÃÕáíÉ ÌÏíÏÉ
    }

    void Clear() // ÏÇáÉ áÊİÑíÛ ÇáãÕİæİÉ
    {
        _Size = 0; // ÊÚííä ÍÌã ÇáãÕİæİÉ Åáì 0
        _TempArray = new T[0]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÈÍÌã 0
        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ ÇáÃÕáíÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÕİæİÉ ÇáãÄŞÊÉ ßãÕİæİÉ ÃÕáíÉ ÌÏíÏÉ
    }

    T GetItem(int index) // ÏÇáÉ ááÍÕæá Úáì ÚäÕÑ İí ÇáãÕİæİÉ ÚäÏ İåÑÓ ãÚíä
    {
        return OriginalArray[index]; // ÅÑÌÇÚ ÇáÚäÕÑ ÚäÏ ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool DeleteItemAt(int index) // ÏÇáÉ áÍĞİ ÚäÕÑ İí ÇáãÕİæİÉ ÚäÏ İåÑÓ ãÚíä
    {
        if (index >= _Size || index < 0) // ÇáÊÍŞŞ ãä ÕÍÉ ÇáİåÑÓ
        {
            return false; // ÅÑÌÇÚ false ÅĞÇ ßÇä ÇáİåÑÓ ÛíÑ ÕÍíÍ
        }

        _Size--; // ÊŞáíá ÍÌã ÇáãÕİæİÉ ÈæÇÍÏ

        _TempArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÌÏíÏÉ ÈÇáÍÌã ÇáÌÏíÏ

        // äÓÎ ÇáÚäÇÕÑ ŞÈá ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i]; // äÓÎ ÇáÚäÕÑ ãä ÇáãÕİæİÉ ÇáÃÕáíÉ Åáì ÇáãÄŞÊÉ
        }

        // äÓÎ ÇáÚäÇÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArray[i - 1] = OriginalArray[i]; // äÓÎ ÇáÚäÕÑ ãä ÇáãÕİæİÉ ÇáÃÕáíÉ Åáì ÇáãÄŞÊÉ
        }

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ ÇáÃÕáíÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÕİæİÉ ÇáãÄŞÊÉ ßãÕİæİÉ ÃÕáíÉ ÌÏíÏÉ
        return true; // ÅÑÌÇÚ true ÅĞÇ Êã ÇáÍĞİ ÈäÌÇÍ
    }

    void DeleteFirstItem() // ÏÇáÉ áÍĞİ ÇáÚäÕÑ ÇáÃæá İí ÇáãÕİæİÉ
    {
        DeleteItemAt(0); // ÇÓÊÏÚÇÁ ÏÇáÉ DeleteItemAt ãÚ ÇáİåÑÓ 0
    }

    void DeleteLastItem() // ÏÇáÉ áÍĞİ ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáãÕİæİÉ
    {
        DeleteItemAt(_Size - 1); // ÇÓÊÏÚÇÁ ÏÇáÉ DeleteItemAt ãÚ ÇáİåÑÓ ÇáÃÎíÑ
    }

    int Find(T Value) // ÏÇáÉ ááÈÍË Úä ŞíãÉ İí ÇáãÕİæİÉ
    {
        for (int i = 0; i < _Size; i++) // ÍáŞÉ ÊãÑ ÚÈÑ ÚäÇÕÑ ÇáãÕİæİÉ
        {
            if (OriginalArray[i] == Value) // ãŞÇÑäÉ ÇáŞíãÉ ÇáãÏÎáÉ ãÚ ÚäÇÕÑ ÇáãÕİæİÉ
            {
                return i; // ÅÑÌÇÚ ÇáİåÑÓ ÅĞÇ æÌÏÊ ÇáŞíãÉ
            }
        }
        return -1; // ÅÑÌÇÚ -1 ÅĞÇ áã ÊæÌÏ ÇáŞíãÉ
    }

    bool DeleteItem(T Value) // ÏÇáÉ áÍĞİ ÚäÕÑ ÈŞíãÉ ãÚíäÉ
    {
        int index = Find(Value); // ÇáÈÍË Úä ÇáİåÑÓ ÇáĞí íÍÊæí Úáì ÇáŞíãÉ

        if (index == -1) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇäÊ ÇáŞíãÉ ãæÌæÏÉ
        {
            return false; // ÅÑÌÇÚ false ÅĞÇ áã ÊæÌÏ ÇáŞíãÉ
        }

        DeleteItemAt(index); // ÍĞİ ÇáÚäÕÑ ÚäÏ ÇáİåÑÓ ÇáãÍÏÏ
        return true; // ÅÑÌÇÚ true ÅĞÇ Êã ÇáÍĞİ ÈäÌÇÍ
    }

    bool InsertAt(int Index, T newValue) {
        // ÇáÊÍŞŞ ãä ÕÍÉ ÇáãæÖÚ
        if (Index > _Size || Index < 0) {
            return false;
        }

        _Size++;
        T* _TempArray = new T[_Size];

        // äÓÎ ÇáÚäÇÕÑ ÍÊì ÇáãæÖÚ Index
        for (int i = 0; i < Index; i++) {
            _TempArray[i] = OriginalArray[i];
        }

        // ÅÏÑÇÌ ÇáÚäÕÑ ÇáÌÏíÏ ÚäÏ ÇáãæÖÚ Index
        _TempArray[Index] = newValue;

        // äÓÎ ÇáÚäÇÕÑ ÇáãÊÈŞíÉ ÈÚÏ ÇáãæÖÚ Index
        for (int i = Index + 1; i < _Size; i++) {
            _TempArray[i] = OriginalArray[i - 1];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;

        return true;  // ÅÑÌÇÚ true ááÅÔÇÑÉ Åáì äÌÇÍ ÇáÚãáíÉ
    }

    void InsertAtBeginning(T value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí ÈÏÇíÉ ÇáãÕİæİÉ
    {
        InsertAt(0, value); // ÇÓÊÏÚÇÁ ÇáÏÇáÉ InsertAt ÚäÏ ÇáİåÑÓ 0 áÅÏÑÇÌ ÇáÚäÕÑ İí ÇáÈÏÇíÉ
    }

    bool InsertBefore(T index, T value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ŞÈá ÚäÕÑ ãÍÏÏ
    {
        if (index < 1) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáİåÑÓ ÃŞá ãä 1
            return InsertAt(0, value); // ÅĞÇ ßÇä ÇáİåÑÓ ÃŞá ãä 1¡ íÊã ÅÏÑÇÌ ÇáÚäÕÑ İí ÇáÈÏÇíÉ
        else
            return InsertAt(index - 1, value); // ÎáÇİ Ğáß¡ íÊã ÅÏÑÇÌ ÇáÚäÕÑ ŞÈá ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool InsertAfter(T index, T value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ ÈÚÏ ÚäÕÑ ãÍÏÏ
    {
        if (index >= _Size) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáİåÑÓ ÃßÈÑ Ãæ íÓÇæí ÍÌã ÇáãÕİæİÉ
            return InsertAt(_Size - 1, value); // ÅĞÇ ßÇä ÇáİåÑÓ ÛíÑ ÕÍíÍ¡ íÊã ÅÏÑÇÌ ÇáÚäÕÑ İí äåÇíÉ ÇáãÕİæİÉ
        else
            return InsertAt(index + 1, value); // ÎáÇİ Ğáß¡ íÊã ÅÏÑÇÌ ÇáÚäÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool InsertAtEnd(T value) // ÏÇáÉ áÅÏÑÇÌ ÚäÕÑ İí äåÇíÉ ÇáãÕİæİÉ
    {
        return InsertAt(_Size, value); // ÇÓÊÏÚÇÁ ÇáÏÇáÉ InsertAt ÚäÏ ÇáİåÑÓ _Size áÅÏÑÇÌ ÇáÚäÕÑ İí ÇáäåÇíÉ
    }
};
