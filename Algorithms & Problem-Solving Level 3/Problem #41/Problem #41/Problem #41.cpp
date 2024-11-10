#include <iostream>
#include <vector>
using namespace std;

// œ«·… · Ã“∆… «·‰’ ≈·Ï ﬂ·„«  „” Œœ„… «·›«’·… «·„Õœœ…
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

// œ«·… ·⁄ﬂ”  — Ì» «·ﬂ·„«  ›Ì «·‰’
string ReverseWords(string S1) {
    vector<string> vString;
    string S2 = "";

    vString = SplitString(S1, " "); //  Ã“∆… «·‰’ ≈·Ï ﬂ·„«  »«” Œœ«„ «·›«’·… «·„”«›…

    vector<string>::iterator iter = vString.end();

    //  ﬂ—«— „‰ «·‰Â«Ì… ≈·Ï «·»œ«Ì… ·≈⁄«œ…  — Ì» «·ﬂ·„« 
    while (iter != vString.begin()) {
        --iter;
        S2 += *iter + " "; // ≈÷«›… «·ﬂ·„… ≈·Ï «·‰’ «·„⁄ﬂÊ” „⁄ ≈÷«›… ›«’·… „”«›…
    }
    S2 = S2.substr(0, S2.length() - 1); // ≈“«·… «·›«’·… «·„”«›… «·√ŒÌ—….

    return S2; // ≈—Ã«⁄ «·‰’ «·„⁄ﬂÊ”
}

int main() {
    //cout << ReverseWords("Osama ALAI yAGY jhxvl");

    vector <string>Words{ "Osama", "Ali", "Yahya","Haseen", "Kokabah" };


    vector <string>::iterator item = Words.end();


    while (item != Words.begin())
    {
        item--;
        cout << *item << " ";
    }

    return 0;
}