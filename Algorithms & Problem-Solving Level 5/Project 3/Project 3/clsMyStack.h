#pragma once // ���� ����� ����� ���� �� ��� �� ��� ����� �����ѡ ��� ���� ������� ������� �� ������� �������

#include <iostream> // ����� ����� ������� �������� ��������
#include "clsMyQueue.h" // ����� ��� ����� ����� ��������
using namespace std; // ������� ���� ������� std ����� ����� std:: ��� �� ������� ����� �� ������ �� ����� ��������

template <class T> // ����� ���� (template) ���� �������� �� ��� ������ �� ����

class clsMyStack : public clsMyQueue<T> // ����� �� clsMyStack ����� �� clsMyQueue
{
public:
    void push(T Item) // ���� ������ ���� ��� ����� ������ (������)
    {
        clsMyQueue<T>::_MyList.InsertAtBeginning(Item); // ������� ���� ����� ���� �� ����� �������
    }

    T Top() // ���� ������ ��� ������ �� ��� ������ (������)
    {
        return clsMyQueue<T>::front(); // ������� ���� ������ ��� ������ ����� �� �������
    }

    T Bottom() // ���� ������ ��� ������ �� ��� ������ (������)
    {
        return clsMyQueue<T>::back(); // ������� ���� ������ ��� ������ ������ �� �������
    }
};
