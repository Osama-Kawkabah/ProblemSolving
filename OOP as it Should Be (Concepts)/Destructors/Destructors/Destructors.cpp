#include <iostream>
using namespace std;

class clsPerson {
public:
    string FullName;

    // ����������: ��� �������� ��� ���� ������.
    clsPerson() {
        FullName = "Osama Ali Kokabah";
        cout << "\nMy Nmae Is : " << FullName << endl;;
        cout << "\nHi, I'm Constructor";
    }

    // ���������: ��� �������� ��� ��� ������.
    ~clsPerson() {
        cout << "\nHi, I'm Destructor";
    }
};

void Fun1() {
    clsPerson Person1; // ��� �������� �� �����ɡ ���� ��� ������ Person1 �������� �����������.
}

void Fun2() {
    clsPerson* Person2 = new clsPerson; // ������ ������ delete ��� ������� new� ���� ����� ������ �� �������.
    cout << "\nMy Nmae Is : " << Person2->FullName << endl;
    delete Person2;
    Person2 = nullptr; // ����� ������ ��� nullptr ��� ��� ������

    if (Person2 != nullptr) {
        // ���� �� ������ �� ��� ������� ��� ��� ����
        cout << "\nFullName: " << Person2->FullName << endl;
    }
    else {
        // ���� �� ������ �� �� ���� ��� ��� �������
        cout << "\nNo Data !" << endl;
    }
}


int main() {
    Fun1();
    Fun2();
    system("pause>0"); // ����� ������� ��� ��� ����� ��� �� ����� ��� �������.
    return 0;
}

