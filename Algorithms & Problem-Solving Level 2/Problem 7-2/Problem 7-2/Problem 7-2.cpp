//////////////////////////////////////////////////////////////////////////////////////
 //ØÈÇÚÉ ÇáÃÑŞÇã ÇáãÚßæÓÉ
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
 // ÇÓÊÎÏã ÓáÓáÉ äÕíÉ áÊÎÒíä ÇáÃÑŞÇã ÇáãÚßæÓÉ
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
//    string ReversedNumber = "";  // ÇÓÊÎÏã ÓáÓáÉ äÕíÉ áÊÎÒíä ÇáÃÑŞÇã ÇáãÚßæÓÉ
//    while (Number > 0) {
//        int Remainder = Number % 10;
//        Number = Number / 10;
//        ReversedNumber += to_string(Remainder);  // ÅÖÇİÉ ÇáÑŞã ÇáãÚßæÓ Åáì ÇáÓáÓáÉ
//    }
//    cout << ReversedNumber << endl;  // ØÈÇÚÉ ÇáÃÑŞÇã ÇáãÚßæÓÉ
//}
//
//int main() {
//    int number = ReadNumber("Please enter a number");
//    CheckNumberAndPrint(number);
//    return 0;
//}


