#include <iostream>
#include <vector>
using namespace std;

string JoinString(vector <string> Words, string delim = ",") {
    string S1 = "";
    for (string& i : Words) {

        S1 = S1 + i + delim;
    }
    return S1.substr(0, S1.length() - delim.length());
}

int main()
{
    vector <string> Myword{ "OSAMA","ALI","YAHYA","HASEEN" ,"KOKABAH" };
    cout << JoinString(Myword, "*");

    return 0;
}

