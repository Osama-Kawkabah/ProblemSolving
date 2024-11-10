#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Text) {
    int Number;
    do {
        cout << Text << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int CheckNumber(int Number) {
    int Remonder = 0;
    int ReversNumber = 0;
    while (Number > 0) {
        Remonder = Number % 10;
        Number /= 10;
        ReversNumber = ReversNumber * 10 + Remonder;
    }
    return ReversNumber;
}

bool CheckNumberIsPalindromeOrNo(int Firs_tNum1) {
    return Firs_tNum1 == CheckNumber(Firs_tNum1);
}

int main() {

    if(CheckNumberIsPalindromeOrNo(ReadPositiveNumber("Please Enter a Number "))) {
        cout << "The Number Is Palindrome :)" << endl;
    }
    else {
        cout << "The Number Is Not Palindrome :(" << endl;
    }
    return 0;
}

//--------------------------------------------------------------------------
//-----------------------------------Íá ÇÝÖá--------------------------------
//--------------------------------------------------------------------------


///#include <iostream>
//#include <string>
//
//using namespace std;
//
//int ReadPositiveNumber(string Text) {
//    int Number;
//    do {
//        cout << Text << endl;
//        cin >> Number;
//    } while (Number < 0);
//    return Number;
//}
//
//int CheckNumber(int Number) {
//    int Remonder = 0;
//    int ReversNumber = 0;
//    while (Number > 0) {
//        Remonder = Number % 10;
//        Number /= 10;
//        ReversNumber = ReversNumber * 10 + Remonder;
//    }
//    return ReversNumber;
//}
//
//int CheckReversNumber(int Number) {
//    int Remonder = 0;
//    int ReversNumber = 0;
//    while (Number > 0) {
//        Remonder = Number % 10;
//        Number /= 10;
//        ReversNumber = ReversNumber * 10 + Remonder;
//    }
//    return ReversNumber;
//}
//
//void CheckNumberIsPalindromeOrNo(int Firs_tNum1, int Last_Num2) {
//    string Firs_tNum = to_string(Firs_tNum1);
//    string Last_Num = to_string(Last_Num2);
//
//    for (int i = 0; i <= Firs_tNum.length(); i++) {
//        if (i == Firs_tNum.length() / 2 && i == Last_Num.length() / 2) {
//            break;
//        }
//    }
//
//    if (Firs_tNum == Last_Num) {
//        cout << "The Number Is Palindrome :)" << endl;
//    }
//    else {
//        cout << "The Number Is Not Palindrome :(" << endl;
//    }
//}
//
//int main() {
//    int Number = ReadPositiveNumber("Please Enter a Number ");
//    int Firs_tNum = CheckNumber(Number);
//    int Last_Num = CheckReversNumber(CheckNumber(Number));
//    CheckNumberIsPalindromeOrNo(Firs_tNum, Last_Num);
//    return 0;
//}