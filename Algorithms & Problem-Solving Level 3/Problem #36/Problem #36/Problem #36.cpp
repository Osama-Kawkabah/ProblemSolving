#include <iostream>
#include <string>
using namespace std;

string ReadString() {
    string C1;
    cout << "Please Enter Your char:\n";
    getline(cin, C1);
    return C1;
}

int CountWords(string S1) {
    string delim = " ";
    int Counter = 0;
    cout << "\nYour string wrords are: \n\n";
    short pos = 0; 
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            Counter++;
        }

        S1.erase(0, pos + delim.length());

    }
    if (S1 != "") {
        Counter++;    
    }
    return Counter;
}


int main()
{
    string S1 = ReadString();
    cout << "\nThe number of words in your string is: ";
    cout << CountWords(S1);

    cout << endl;
    return 0;
}