#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0; // ÍÌã ÇáãÕİæİÉ
    T* _TempArray; // ãÄÔÑ áãÕİæİÉ ãÄŞÊÉ

public:
    T* OriginalArray; // ãÄÔÑ ááãÕİæİÉ ÇáÃÕáíÉ

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0; // ÅĞÇ ßÇä ÇáÍÌã ÃŞá ãä 0¡ íÊã ÊÚííäå Åáì 0

        _Size = Size;

        OriginalArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ÌÏíÏÉ ÈÇáÍÌã ÇáãÍÏÏ

    }

    ~clsDynamicArray()
    {
        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáãÎÕÕÉ ááãÕİæİÉ ÇáÃÕáíÉ ÚäÏ ÊÏãíÑ ÇáßÇÆä
    }

    bool SetItem(int index, T Value)
    {
        if (index >= _Size)
        {
            return false; // ÅĞÇ ßÇä ÇáİåÑÓ ÎÇÑÌ äØÇŞ ÇáãÕİæİÉ¡ ÊÑÌÚ ÇáÏÇáÉ false
        }

        OriginalArray[index] = Value; // ÊÚííä ÇáŞíãÉ İí ÇáİåÑÓ ÇáãÍÏÏ
        return true;
    }

    int Size()
    {
        return _Size; // ÊÑÌÚ ÍÌã ÇáãÕİæİÉ
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false); // ÊÑÌÚ true ÅĞÇ ßÇäÊ ÇáãÕİæİÉ İÇÑÛÉ
    }

    void PrintList()
    {
        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " "; // ØÈÇÚÉ ßá ÚäÕÑ İí ÇáãÕİæİÉ
        }

        cout << "\n"; // ØÈÇÚÉ ÓØÑ ÌÏíÏ
    }

    void Resize(int NewSize)
    {
        _TempArray = new T[NewSize]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÈÇáÍÌã ÇáÌÏíÏ

        // ÊÍÏíÏ ÇáÍÌã ÇáÌÏíÏ áíßæä ÇáÍÌã ÇáÃÕáí ÅĞÇ ßÇä ÃŞá
        if (NewSize < _Size)
            _Size = NewSize;

        // äÓÎ ÌãíÚ ÇáÈíÇäÇÊ ãä ÇáãÕİæİÉ ÇáÃÕáíÉ ÍÊì ÇáÍÌã ÇáÌÏíÏ
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáŞÏíãÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÌÏíÏÉ
    }

    void Reverse()
    {
        _TempArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÈÇáÍÌã ÇáÃÕáí

        int counter = 0;

        // äÓÎ ÇáÚäÇÕÑ ÈÔßá ÚßÓí Åáì ÇáãÕİæİÉ ÇáãÄŞÊÉ
        for (int i = _Size - 1; i >= 0; i--)
        {
            _TempArray[counter] = OriginalArray[i];
            counter++;
        }

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáŞÏíãÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÌÏíÏÉ
    }

    void Clear()
    {
        _Size = 0; // ÊÚííä ÍÌã ÇáãÕİæİÉ Åáì 0
        _TempArray = new T[0]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ İÇÑÛÉ
        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáŞÏíãÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÌÏíÏÉ
    }

    T GetItem(int index)
    {
        return OriginalArray[index]; // ÊÑÌÚ ÇáÚäÕÑ İí ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool DeleteItemAt(int index)
    {
        if (index >= _Size || index < 0)
        {
            return false; // ÅĞÇ ßÇä ÇáİåÑÓ ÎÇÑÌ ÇáäØÇŞ¡ ÊÑÌÚ ÇáÏÇáÉ false
        }

        _Size--; // ÊŞáíá ÇáÍÌã

        _TempArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÈÇáÍÌã ÇáÌÏíÏ

        // äÓÎ ÌãíÚ ÇáÚäÇÕÑ ŞÈá ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        // äÓÎ ÌãíÚ ÇáÚäÇÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArray[i - 1] = OriginalArray[i];
        }

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáŞÏíãÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÌÏíÏÉ
        return true;
    }

    void DeleteFirstItem()
    {
        DeleteItemAt(0); // ÍĞİ ÇáÚäÕÑ ÇáÃæá İí ÇáãÕİæİÉ
    }

    void DeleteLastItem()
    {
        DeleteItemAt(_Size - 1); // ÍĞİ ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáãÕİæİÉ
    }

    int Find(T Value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == Value)
            {
                return i; // ÊÑÌÚ ÇáİåÑÓ ÅĞÇ æÌÏÊ ÇáŞíãÉ
            }
        }
        return -1; // ÊÑÌÚ -1 ÅĞÇ áã ÊæÌÏ ÇáŞíãÉ
    }

    bool DeleteItem(T Value)
    {
        int index = Find(Value); // ÅíÌÇÏ ÇáİåÑÓ ááŞíãÉ ÇáãÍÏÏÉ

        if (index == -1)
        {
            return false; // ÅĞÇ áã ÊæÌÏ ÇáŞíãÉ¡ ÊÑÌÚ ÇáÏÇáÉ false
        }

        DeleteItemAt(index); // ÍĞİ ÇáÚäÕÑ ÚäÏ ÇáİåÑÓ ÇáãÍÏÏ
        return true;
    }

    bool InsertAt(T index, T value)
    {
        if (index > _Size || index < 0)
        {
            return false; // ÅĞÇ ßÇä ÇáİåÑÓ ÎÇÑÌ ÇáäØÇŞ¡ ÊÑÌÚ ÇáÏÇáÉ false
        }

        _Size++; // ÒíÇÏÉ ÇáÍÌã

        _TempArray = new T[_Size]; // ÊÎÕíÕ ãÕİæİÉ ãÄŞÊÉ ÈÇáÍÌã ÇáÌÏíÏ

        // äÓÎ ÌãíÚ ÇáÚäÇÕÑ ŞÈá ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _TempArray[index] = value; // ÅÏÑÇÌ ÇáŞíãÉ ÚäÏ ÇáİåÑÓ ÇáãÍÏÏ

        // äÓÎ ÌãíÚ ÇáÚäÇÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
        for (int i = index; i < _Size - 1; i++)
        {
            _TempArray[i + 1] = OriginalArray[i];
        }

        delete[] OriginalArray; // ÊÍÑíÑ ÇáĞÇßÑÉ ÇáŞÏíãÉ
        OriginalArray = _TempArray; // ÊÚííä ÇáãÄÔÑ Åáì ÇáãÕİæİÉ ÇáÌÏíÏÉ
        return true;
    }

    void InsertAtBeginning(T value)
    {
        InsertAt(0, value); // ÅÏÑÇÌ ÇáÚäÕÑ İí ÈÏÇíÉ ÇáãÕİæİÉ
    }

    bool InsertBefore(T index, T value)
    {
        if (index < 1)
            return InsertAt(0, value); // ÅĞÇ ßÇä ÇáİåÑÓ ÃŞá ãä 1¡ ÅÏÑÇÌ ÇáÚäÕÑ İí ÇáÈÏÇíÉ
        else
            return InsertAt(index - 1, value); // ÎáÇİ Ğáß¡ ÅÏÑÇÌ ÇáÚäÕÑ ŞÈá ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool InsertAfter(T index, T value)
    {
        if (index >= _Size)
            return InsertAt(_Size - 1, value); // ÅĞÇ ßÇä ÇáİåÑÓ ÃßÈÑ Ãæ íÓÇæí ÇáÍÌã¡ ÅÏÑÇÌ ÇáÚäÕÑ İí ÇáäåÇíÉ
        else
            return InsertAt(index + 1, value); // ÎáÇİ Ğáß¡ ÅÏÑÇÌ ÇáÚäÕÑ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
    }

    bool InsertAtEnd(T value)
    {
        return InsertAt(_Size, value); // ÅÏÑÇÌ ÇáÚäÕÑ İí äåÇíÉ ÇáãÕİæİÉ
    }
};
