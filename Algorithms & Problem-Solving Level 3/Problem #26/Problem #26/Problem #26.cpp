#include <iostream>
#include <string>
using namespace std;

// ���� ������ ����� �� ��������
string ReadString() {
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

//����� �� ��� �� ����� ������ ��� Lower
string LowerAllString(string S1) {

    for (int i = 0; i < S1.length(); i++)
    {
            S1[i] = tolower(S1[i]);
    }
    return S1;
}

//����� �� ��� �� ����� ������ ��� Upper
string UpperAllString(string S1) {
    for (int i = 0; i < S1.length(); i++)
    {
        S1[i] = (char)toupper(S1[i]);
    }

    return S1;
}


int main()
{
    string S1 = ReadString();


    cout << "Lower Letter Of Each Word : ";
    S1= LowerAllString(S1);
    cout << S1 << endl;


    cout << "Upper Letter Of Each Word : ";
    S1 = UpperAllString(S1);
    cout << S1 << endl;

    
    return 0;
}

