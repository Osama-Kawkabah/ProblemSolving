#include <iostream>
#include <vector>
using namespace std;

string ConvertToUppercase(string S1) {
    for (int i = 0; i < S1.length(); i++) {
        S1[i] = toupper(S1[i]);
    }
    return S1;
}

vector<string> SplitString(string S1, string delim = " ") {
    vector<string> vAllWords; // „’›Ê›… · Œ“Ì‰ «·ﬂ·„«  «·‰« Ã…
    short pos = 0;
    string sWord;

    //  ﬂ—«— Õ Ï ‰Â«Ì… «·‰’
    while ((pos = S1.find(delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // «” Œ—«Ã «·ﬂ·„… „‰ »œ«Ì… «·‰’ ≈·Ï «·›«’·…
        if (sWord != "") {
            vAllWords.push_back(sWord); // ≈÷«›… «·ﬂ·„… ≈·Ï «·„’›Ê›… ≈–« ﬂ«‰  €Ì— ›«—€…
        }
        S1.erase(0, pos + delim.length()); // Õ–› «·ﬂ·„… «·„” Œ—Ã… „‰ «·‰’
    }

    if (S1 != "") {
        vAllWords.push_back(S1); // ≈÷«›… «·ﬂ·„… «·√ŒÌ—… ≈–« ﬂ«‰  €Ì— ›«—€…
    }
    return vAllWords; // ≈—Ã«⁄ «·„’›Ê›… «·‰« Ã…
}

string ReplaceWord(string S1, string W1, string W2, bool MatchCase = true) {
    vector<string> vString;
    string S2 = "";
    vString = SplitString(S1, " ");

    for (int i = 0; i < vString.size(); i++) {
        if (MatchCase)
        {
            if (vString[i] == W1) {

                vString[i] = W2;
            }
            S2 += vString[i] + " ";
        }
        else
        {
            if (ConvertToUppercase(vString[i]) == ConvertToUppercase(W1)) {
                vString[i] = W2;
            }
            S2 += vString[i] + " ";
        }
    }

    return S2;
}

int main()
{
    string S1 = "Welcome to Yemen , Yemen is a nice country";
    string StringToReplace = "yemen";
    string ReplaceTo = "USA";

    cout << endl;
    cout << ReplaceWord(S1, StringToReplace, ReplaceTo);
    cout << endl;
    cout << endl;
    cout << ReplaceWord(S1, StringToReplace, ReplaceTo, false);
    cout << endl;

    return 0;
}
