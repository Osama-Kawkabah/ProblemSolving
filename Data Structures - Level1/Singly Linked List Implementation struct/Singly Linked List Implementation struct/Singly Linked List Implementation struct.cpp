#include <iostream>
using namespace std;

class Mode
{
public:
    int Value;
    Mode* Next;

    // ���� ������
    Mode(int value) : Value(value), Next(nullptr) {} // ����� ����� ������ ���
};

int main()
{
    Mode* Strat = nullptr;

    Mode* Mode1 = new Mode(10);
    Mode* Mode2 = new Mode(20);
    Mode* Mode3 = new Mode(30);
    Mode* Mode4 = new Mode(40);
    Mode* Mode5 = new Mode(50);


    Mode1->Next = Mode2;
    Mode2->Next = Mode3;
    Mode3->Next = Mode4;
    Mode4->Next = Mode5;
    Mode5->Next = nullptr;

    Strat = Mode1; // ����� Strat ������ ����� �� ������� ������

    while (Strat != nullptr)
    {
        cout << Strat->Value << " "; // ����� ��� �������
        Strat = Strat->Next;
    }
    cout << endl;

    // ��� ������� ���� �� ������� ���������� ����� ���� �������
    delete Mode1;
    delete Mode2;
    delete Mode3;
    delete Mode4;
    delete Mode5;

    system("pause>0");
    return 0;
}
