#pragma once 

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:

    int _Size = 0; // ����� ������ ��� ��������
    T* _TempArray; // ���� ������� �����

public:

    T* OriginalArray; // ���� ��� �������� �����������

    clsDynamicArray(int Size = 0) // ���� ������ ������ ������ ���� ����
    {
        if (Size < 0) // ������ �� �� ����� ��� ����
            Size = 0; // ����� ����� ��� 0 ��� ��� ������

        _Size = Size; // ����� ��� �������� ��� ������ �������

        OriginalArray = new T[_Size]; // ����� ����� �������� �����������
    }

    ~clsDynamicArray() // ���� ����� ������ ������� ������� ��������
    {
        delete[] OriginalArray; // ����� �������
    }

    bool SetItem(int index, T Value) // ���� ������ ���� �� �������� �� ���� ����
    {
        if (index >= _Size) // ������ �� ��� ������
        {
            return false; // ����� false ��� ��� ������ ��� ����
        }

        OriginalArray[index] = Value; // ����� ������ �� ������ ������
        return true; // ����� true ��� �� ������� �����
    }

    int Size() // ���� ������ ��� ��� ��������
    {
        return _Size; // ����� ��� ��������
    }

    bool IsEmpty() // ���� ������ ��� ��� ���� �������� �����
    {
        return (_Size == 0 ? true : false); // ����� true ��� ��� ��� �������� 0
    }

    void PrintList() // ���� ������ ������� ��������
    {
        for (int i = 0; i <= _Size - 1; i++) // ���� ��� ��� ����� ��������
        {
            cout << OriginalArray[i] << " "; // ����� �� ����
        }
        cout << "\n"; // �������� ��� ��� ���� ��� �������
    }

    void Resize(int NewSize) // ���� ������ ��� ��������
    {
        _TempArray = new T[NewSize]; // ����� ������ ����� ����� ������ ������

        // ����� ����� ������ ����� ����� ������ ��� ��� ����� ������ ��� �� ����� ������
        if (NewSize < _Size)
            _Size = NewSize;

        // ��� �������� �� �������� ������� ��� �������� ������� ��� ����� ������
        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize; // ����� ����� ������ ��������

        delete[] OriginalArray; // ����� ������� ������� �������� �������
        OriginalArray = _TempArray; // ����� �������� ������� ������� ����� �����
    }

    void Reverse() // ���� ���� ����� ������� �� ��������
    {
        _TempArray = new T[_Size]; // ����� ������ ����� ����� ���� ��� �������� �������

        int counter = 0; // ����� ���� ���� �������� ������� �� �������

        for (int i = _Size - 1; i >= 0; i--) // ���� ��� ��� ����� �������� ������� �� ������� ��� �������
        {
            _TempArray[counter] = OriginalArray[i]; // ��� ������ �� �������� ������� ��� �������
            counter++; // ����� ������
        }

        delete[] OriginalArray; // ����� ������� ������� �������� �������
        OriginalArray = _TempArray; // ����� �������� ������� ������� ����� �����
    }

    void Clear() // ���� ������ ��������
    {
        _Size = 0; // ����� ��� �������� ��� 0
        _TempArray = new T[0]; // ����� ������ ����� ���� 0
        delete[] OriginalArray; // ����� ������� ������� �������� �������
        OriginalArray = _TempArray; // ����� �������� ������� ������� ����� �����
    }

    T GetItem(int index) // ���� ������ ��� ���� �� �������� ��� ���� ����
    {
        return OriginalArray[index]; // ����� ������ ��� ������ ������
    }

    bool DeleteItemAt(int index) // ���� ���� ���� �� �������� ��� ���� ����
    {
        if (index >= _Size || index < 0) // ������ �� ��� ������
        {
            return false; // ����� false ��� ��� ������ ��� ����
        }

        _Size--; // ����� ��� �������� �����

        _TempArray = new T[_Size]; // ����� ������ ����� ����� ������ ������

        // ��� ������� ��� ������ ������
        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i]; // ��� ������ �� �������� ������� ��� �������
        }

        // ��� ������� ��� ������ ������
        for (int i = index + 1; i < _Size + 1; i++)
        {
            _TempArray[i - 1] = OriginalArray[i]; // ��� ������ �� �������� ������� ��� �������
        }

        delete[] OriginalArray; // ����� ������� ������� �������� �������
        OriginalArray = _TempArray; // ����� �������� ������� ������� ����� �����
        return true; // ����� true ��� �� ����� �����
    }

    void DeleteFirstItem() // ���� ���� ������ ����� �� ��������
    {
        DeleteItemAt(0); // ������� ���� DeleteItemAt �� ������ 0
    }

    void DeleteLastItem() // ���� ���� ������ ������ �� ��������
    {
        DeleteItemAt(_Size - 1); // ������� ���� DeleteItemAt �� ������ ������
    }

    int Find(T Value) // ���� ����� �� ���� �� ��������
    {
        for (int i = 0; i < _Size; i++) // ���� ��� ��� ����� ��������
        {
            if (OriginalArray[i] == Value) // ������ ������ ������� �� ����� ��������
            {
                return i; // ����� ������ ��� ���� ������
            }
        }
        return -1; // ����� -1 ��� �� ���� ������
    }

    bool DeleteItem(T Value) // ���� ���� ���� ����� �����
    {
        int index = Find(Value); // ����� �� ������ ���� ����� ��� ������

        if (index == -1) // ������ ��� ��� ���� ������ ������
        {
            return false; // ����� false ��� �� ���� ������
        }

        DeleteItemAt(index); // ��� ������ ��� ������ ������
        return true; // ����� true ��� �� ����� �����
    }

    bool InsertAt(int Index, T newValue) {
        // ������ �� ��� ������
        if (Index > _Size || Index < 0) {
            return false;
        }

        _Size++;
        T* _TempArray = new T[_Size];

        // ��� ������� ��� ������ Index
        for (int i = 0; i < Index; i++) {
            _TempArray[i] = OriginalArray[i];
        }

        // ����� ������ ������ ��� ������ Index
        _TempArray[Index] = newValue;

        // ��� ������� �������� ��� ������ Index
        for (int i = Index + 1; i < _Size; i++) {
            _TempArray[i] = OriginalArray[i - 1];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;

        return true;  // ����� true ������� ��� ���� �������
    }

    void InsertAtBeginning(T value) // ���� ������ ���� �� ����� ��������
    {
        InsertAt(0, value); // ������� ������ InsertAt ��� ������ 0 ������ ������ �� �������
    }

    bool InsertBefore(T index, T value) // ���� ������ ���� ��� ���� ����
    {
        if (index < 1) // ������ ��� ��� ��� ������ ��� �� 1
            return InsertAt(0, value); // ��� ��� ������ ��� �� 1� ��� ����� ������ �� �������
        else
            return InsertAt(index - 1, value); // ���� ��ߡ ��� ����� ������ ��� ������ ������
    }

    bool InsertAfter(T index, T value) // ���� ������ ���� ��� ���� ����
    {
        if (index >= _Size) // ������ ��� ��� ��� ������ ���� �� ����� ��� ��������
            return InsertAt(_Size - 1, value); // ��� ��� ������ ��� ���͡ ��� ����� ������ �� ����� ��������
        else
            return InsertAt(index + 1, value); // ���� ��ߡ ��� ����� ������ ��� ������ ������
    }

    bool InsertAtEnd(T value) // ���� ������ ���� �� ����� ��������
    {
        return InsertAt(_Size, value); // ������� ������ InsertAt ��� ������ _Size ������ ������ �� �������
    }
};
