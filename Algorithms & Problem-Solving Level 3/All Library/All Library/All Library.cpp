#include <iostream>
#include <vector>
#include <string>
using namespace std;

//  ﬁÊ„ »ÿ»«⁄… «·Õ—› «·√Ê· „‰ ﬂ· ﬂ·„… ›Ì «·”·”·…
void PrintFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = (char)toupper(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    cout << S1 << endl;
}

// ÕÊÌ· ﬂ· Õ—› „‰ »œ«ÌÂ «·ﬂ·„Â «·Ï Smoll
string LowerFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = tolower(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}

// ÕÊÌ· ﬂ· Õ—› „‰ »œ«ÌÂ «·ﬂ·„Â «·Ï Smoll
void UpperFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter) {

            S1[i] = (char)toupper(S1[i]);

        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    cout << S1 << endl;
}

// ÕÊÌ· «·Õ—› „‰ Õ—› ’€Ì— ·ﬂ»Ì— Ê«·⁄ﬂ”
char InvertLetterCase(char S1) {
    return isupper(S1) ? tolower(S1) : toupper(S1);
}

// Õ–› «·„”«›«  „‰ «·Ì„‰ 
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

// Õ–› «·„”«›«  „‰ «·‘„«· 
string TrimRight(string S1) {
    char delim = ' ';
    for (int i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != delim) {
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

// Õ–› «·„”«›«  „‰ «·ÃÂ Ì‰ 
string Trim(string S1) {
    return  TrimLeft(TrimRight(S1));

}

// ⁄œœ «·ﬂ·„«  ›Ì «·Ã„·Â
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

// ÿ»«⁄Â ﬂ· ﬂ„·Â ›Ì «·Ã„·Â
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

// Ê÷⁄ ﬂ· ﬂ·„Â „‰ «·‰’ ›Ì „’›Ê›Â Êÿ»«⁄Â Êﬂ„
//  ⁄œœ «·ﬂ·„«  À„ ÿ»«⁄Â «·ﬂ·„«  ﬂ· Ê«ÕœÂ ›Ì [] 
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

// ÕÊÌ· «·ﬂ·„Â „‰ Õ—› ’€Ì— ·ﬂ»Ì— Ê«·⁄ﬂ”
string InvertLetterstring(string S1) {
    for (int i = 0; i < S1.length(); i++) {
        if (isupper(S1[i])) {
            S1[i] = tolower(S1[i]);
        }
        else if (islower(S1[i])) {
            S1[i] = toupper(S1[i]);
        }
    }
    return S1;
}


//ﬂ·„«  ›Ì VECTOR À„ Ê÷⁄Â« ›Ì ‰’ »” ﬂ· ﬂ·„Â Ê ‰”ÌﬁÂ«
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

        S2 += vString[i] + " ";
    }

    return S2;
}

int main()
{
 
    cout << "String after conversion\n" << endl;




    return;
}

