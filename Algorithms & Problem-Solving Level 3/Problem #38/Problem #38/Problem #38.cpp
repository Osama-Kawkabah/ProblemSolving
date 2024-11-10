#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string C1;
    cout << "Please Enter Your char:\n";
    getline(cin, C1);
    return C1;
}

string TrimLeft(string S1) {
    char delim = ' ';
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != delim) {
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}

string TrimRight(string S1) {
    char delim = ' ';
    for (int i = S1.length()-1; i >= 0; i--)
    {
        if (S1[i] != delim) {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

string Trim(string S1) {
    return  TrimLeft(TrimRight(S1));

}
int main()
{
    string S1 = ReadString();

    cout << "\nString     = " << S1; 
    cout << "\n\nTrim Left  = " << TrimLeft(S1);
    cout << "\nTrim Right = " << TrimRight(S1); 
    cout << "\nTrim       = " << Trim(S1);
    return 0;
}