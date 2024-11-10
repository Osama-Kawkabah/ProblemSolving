#pragma once

#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr
{

protected:
	clsDynamicArray<T> _MyList; // ãÕİæİÉ ÏíäÇãíßíÉ áÊÎÒíä ÚäÇÕÑ ÇáØÇÈæÑ

public:

	void push(T Item)
	{
		_MyList.InsertAtEnd(Item); // ÅÖÇİÉ ÚäÕÑ İí äåÇíÉ ÇáØÇÈæÑ
	}

	void pop()
	{
		_MyList.DeleteFirstItem(); // ÅÒÇáÉ ÇáÚäÕÑ ÇáÃæá ãä ÇáØÇÈæÑ
	}

	void Print()
	{
		_MyList.PrintList(); // ØÈÇÚÉ ÚäÇÕÑ ÇáØÇÈæÑ
	}

	int Size()
	{
		return _MyList.Size(); // ÅÑÌÇÚ ÚÏÏ ÇáÚäÇÕÑ İí ÇáØÇÈæÑ
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty(); // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáØÇÈæÑ İÇÑÛÇğ
	}

	T front()
	{
		return _MyList.GetItem(0); // ÅÑÌÇÚ ÇáÚäÕÑ ÇáÃæá İí ÇáØÇÈæÑ
	}

	T back()
	{
		return _MyList.GetItem(Size() - 1); // ÅÑÌÇÚ ÇáÚäÕÑ ÇáÃÎíÑ İí ÇáØÇÈæÑ
	}

	T GetItem(int Index)
	{
		return _MyList.GetItem(Index); // ÅÑÌÇÚ ÇáÚäÕÑ İí ÇáİåÑÓ ÇáãÍÏÏ
	}

	void Reverse()
	{
		_MyList.Reverse(); // ÚßÓ ÊÑÊíÈ ÚäÇÕÑ ÇáØÇÈæÑ
	}

	void UpdateItem(int Index, T NewValue)
	{
		_MyList.SetItem(Index, NewValue); // ÊÍÏíË ŞíãÉ ÇáÚäÕÑ İí ÇáİåÑÓ ÇáãÍÏÏ
	}

	void InsertAfter(int Index, T NewValue)
	{
		_MyList.InsertAfter(Index, NewValue); // ÅÏÑÇÌ ÚäÕÑ ÌÏíÏ ÈÚÏ ÇáİåÑÓ ÇáãÍÏÏ
	}

	void InsertAtFront(T Value)
	{
		_MyList.InsertAtBeginning(Value); // ÅÏÑÇÌ ÚäÕÑ ÌÏíÏ İí ÈÏÇíÉ ÇáØÇÈæÑ
	}

	void InsertAtBack(T Value)
	{
		_MyList.InsertAtEnd(Value); // ÅÏÑÇÌ ÚäÕÑ ÌÏíÏ İí äåÇíÉ ÇáØÇÈæÑ
	}

	void Clear()
	{
		_MyList.Clear(); // ãÓÍ ÌãíÚ ÚäÇÕÑ ÇáØÇÈæÑ
	}
};
