#include <iostream> // ����� ������� �������� ������ ������ ��������

using namespace std; // ������� ���� ������� std

class clsA { // ����� ����� clsA
public:
    // dummy constructor (���� ������ �������)
    clsA() {}

    //Parametarized Constructor (���� ������ ��������)
    clsA(int value) { // ����� ���� ������ ��������
        x = value; // ����� ���� ������� x
    }

    int x; // ����� ����� ��� ���� x

    void Print() { // ����� ������ �������
        cout << "The value of X = " << x << endl; // ����� ���� ������� x
    }
};

int main() { // ����� ������ ��������
    int NumberOfObjects = 5; // ����� ����� ��� ��������

    // ����� ������ ���������
    // ���� ��� �������� �������� ���� �������� new
    clsA* arrA = new clsA[NumberOfObjects];

    // ������� ������ ��� ���� �� ��������
    for (int i = 0; i < NumberOfObjects; i++) { // ����� ������ ������� �� 0 ��� NumberOfObjects
        arrA[i] = clsA(i +1); // ������� ������ �������� ������ ������ �� ��������
    } // ����� ������

    // ����� ������� ��������
    for (int i = 0; i < NumberOfObjects; i++) { // ����� ������ ������� �� 0 ��� NumberOfObjects
        arrA[i].Print(); // ������� ������ ������ ���� x ��� ���� �� ��������
    } // ����� ������

    // ����� �������
    delete[] arrA; // ��� �������� �����������

    return 0; // �������� �� �������� �����
} // ����� ������ ��������
