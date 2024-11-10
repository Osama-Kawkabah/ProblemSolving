#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string delim = "#//#") {
    vector<string> vAllWords; 
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); 
        if (sWord != "") {
            vAllWords.push_back(sWord);
        }
        S1.erase(0, pos + delim.length()); 
    }

    if (S1 != "") {
        vAllWords.push_back(S1); 
    }
    return vAllWords; 
}

void PrintInf(string S1) {

    vector <string> vInf; 
    vInf = SplitString(S1);

    cout << "Account Number  : " << vInf.at(0) << endl;
    cout << "PinCode         : " << vInf.at(1) << endl;
    cout << "Name            : " << vInf.at(2) << endl;
    cout << "Phone           : " << vInf.at(3) << endl;
    cout << "Account Balance : " << vInf.at(4) << endl;
}

int main()
{
    string stLine = "W34#//#1234#//#Osama Ali#//#778033464#//#5270";

    cout << "Line Recard Is : " << endl;;
    cout << stLine << "\n\n";
    
    PrintInf(stLine);

    return 0;
}
