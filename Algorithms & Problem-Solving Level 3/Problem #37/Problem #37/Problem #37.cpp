#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString() {
    string C1;
    cout << "Please Enter Your char:\n";
    getline(cin, C1);
    return C1;
}

vector<string> SplitString(string S1, string delim = " ") {
    vector <string> vAllWords;
    short pos = 0;
    string sWord;

    while ((pos = S1.find(delim)) != std::string::npos) {

        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vAllWords.push_back(sWord);
        }
        S1.erase(0, pos + delim.length());
    }

    if (S1 != "") {
        vAllWords.push_back(S1);
    }
    return vAllWords;
}


int main()
{
    vector <string> vWords;


    string S1 = ReadString();

    vWords = SplitString(S1);

    cout << "Tokens : " << vWords.size() << endl << endl;

    for (auto& i : vWords)
    {
        cout<< i << endl;
    }



    cout << endl;
    return 0;
}