#include<iostream>
using namespace std;

class clsA {
public:
    // ���� �������� ���� ������ ������ 10
    static int Function1() {
        return 10;
    }

    // ���� ��� �������� ���� ������ ������ 20
    int Function2() {
        return 20;
    }
};

int main() {
    // ��� ������� ������ ���������� ������ �� ���� �����
    cout << clsA::Function1() << endl;

    // ���� ����� ������� ������ ���������� ��� ������
    clsA A1, A2;
    cout << A1.Function1() << endl;

    // �� ���� ������� ������ ��� ���������� ������ �� ���� �����
    //cout << clsA::Function2() << endl; // ����� ��� ���

    // ���� ������� ������ ��� ���������� ��� ������
    cout << A1.Function2() << endl;
    cout << A2.Function1() << endl;

    return 0;
}
