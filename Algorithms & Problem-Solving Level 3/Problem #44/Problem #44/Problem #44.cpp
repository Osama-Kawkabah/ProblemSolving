#include <iostream>
#include <cctype>
using namespace std;

string RemovePunctuationsFromString(string S1) {

    string S = "";

    for (int i = 0; i < S1.length(); i++)
    {
        if (!ispunct(S1[i])) {
            
            S += S1[i];
        }
    }
    return S;
}


int main()
{
   
    string S1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";
    cout << "Original String:\n" << S1; 
    cout << "\n\nPauncuations Removed:\n" << RemovePunctuationsFromString(S1);


    cout << endl;
    return 0;
}
