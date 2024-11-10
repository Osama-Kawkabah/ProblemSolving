//////////////////////////////////////////////////////////////////////////////////////
 //����� ������� ��������
#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Text) {
    int Number;
    do {
        cout << Text << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void CheckNumberAndPrint(int Number) {
    int ReversedNumber = 0;
    while (Number > 0) {
        int Remainder = Number % 10;
        Number = Number / 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    cout << ReversedNumber << endl;  
}

int main() {
    int number = ReadNumber("Please enter a number");
    CheckNumberAndPrint(number);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
 // ������ ����� ���� ������ ������� ��������
//#include <iostream>
//#include <string>
//using namespace std;
//
//int ReadNumber(string Text) {
//    int Number;
//    do {
//        cout << Text << endl;
//        cin >> Number;
//    } while (Number <= 0);
//    return Number;
//}
//
//void CheckNumberAndPrint(int Number) {
//    string ReversedNumber = "";  // ������ ����� ���� ������ ������� ��������
//    while (Number > 0) {
//        int Remainder = Number % 10;
//        Number = Number / 10;
//        ReversedNumber += to_string(Remainder);  // ����� ����� ������� ��� �������
//    }
//    cout << ReversedNumber << endl;  // ����� ������� ��������
//}
//
//int main() {
//    int number = ReadNumber("Please enter a number");
//    CheckNumberAndPrint(number);
//    return 0;
//}


