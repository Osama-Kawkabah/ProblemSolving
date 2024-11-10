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

string JoinString(string Myword[], short Length, string delim = ",") {
    string S1 = "";
    for (int i = 0; i < Length; i++) {

        S1 = S1 + Myword[i] + delim;
    }
    return S1.substr(0, S1.length() - delim.length());
}

int main()
{
    vector <string> Mywor{ "OSAMA","ALI","YAHYA","HASEEN" ,"KOKABAH" };
    const int Length = 5;
    string Mywors[Length] = { "OSAMA","ALI","YAHYA","HASEEN" ,"KOKABAH" };

    cout << "Join In Vector : ";
    cout << JoinString(Mywor, "*") << endl;

    cout << "Join In Array  : ";
    cout << JoinString(Mywors, Length, "%") << endl;

    return 0;
}

