#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string C1;
    cout << "Please Enter Your char:\n";
    getline(cin, C1);
    return C1;
}

void PrintEachWordInString(string S1) {
    string delim = " ";

    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length());

    }

    if (S1 != "") {
        cout << S1 << endl;
    }
}


int main()
{

    PrintEachWordInString(ReadString());

     cout << endl;
    return 0;
}