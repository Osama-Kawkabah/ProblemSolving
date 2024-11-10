#include <iostream>  // «” Ì—«œ „ﬂ »… «·≈œŒ«· Ê«·≈Œ—«Ã
#include <string>    // «” Ì—«œ „ﬂ »… «·”·«”· «·‰’Ì…
#include <vector>    // «” Ì—«œ „ﬂ »… «·›Ìﬂ Ê—

using namespace std;

//  ⁄—Ì› ÂÌﬂ· »Ì«‰«  · Œ“Ì‰ «· «—ÌŒ
struct stDate {
    short Year;   // «·”‰…
    short Month;  // «·‘Â—
    short Day;    // «·ÌÊ„
};

// œ«·… · ﬁ”Ì„ «·‰’ ≈·Ï √Ã“«¡ »«” Œœ«„ ›«’·… „Õœœ… Ê Œ“Ì‰Â« ›Ì vector
vector<string> SplitString(string S1, string Delim) {
    vector<string> vString;  //  Œ“Ì‰ «·√Ã“«¡ «·„›’Ê·… Â‰«
    short pos = 0;           // „ €Ì— · Œ“Ì‰ „Êﬁ⁄ «·›«’·…
    string sWord;            //  Œ“Ì‰ ﬂ· Ã“¡ „›’Ê· Â‰«

    // Õ·ﬁ… · ﬁ”Ì„ «·‰’
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos);  // «” Œ—«Ã «·Ã“¡ «·„›’Ê·
        if (sWord != "") {
            vString.push_back(sWord);  // ≈÷«›… «·Ã“¡ «·„›’Ê· ≈·Ï vector
        }
        S1.erase(0, pos + Delim.length());  // Õ–› «·Ã“¡ «·„›’Ê· „‰ «·‰’
    }

    // ≈÷«›… √Ì Ã“¡ „ »ﬁÌ ›Ì «·‰’ ≈·Ï vector
    if (S1 != "") {
        vString.push_back(S1);
    }

    return vString;  // ≈—Ã«⁄ vector «·–Ì ÌÕ ÊÌ ⁄·Ï «·√Ã“«¡ «·„›’Ê·…
}

// œ«·… · ÕÊÌ· «· «—ÌŒ „‰ ‘ﬂ· stDate ≈·Ï ‘ﬂ· ‰’Ì "dd/mm/yyyy"
string DateToString(stDate Date) {
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

// œ«·… · ÕÊÌ· «·‰’ ≈·Ï ‘ﬂ· stDate
stDate StringToDate(string DateString) {
    stDate Date;            //  Œ“Ì‰ «· «—ÌŒ Â‰«
    vector<string> vDate;   //  Œ“Ì‰ «·√Ã“«¡ «·„›’Ê·… „‰ «· «—ÌŒ Â‰«
    vDate = SplitString(DateString, "/");  //  ﬁ”Ì„ «· «—ÌŒ ≈·Ï «·√Ã“«¡

    //  ÕÊÌ· «·√Ã“«¡ «·„›’Ê·… ≈·Ï √⁄œ«œ ’ÕÌÕ… Ê Œ“Ì‰Â« ›Ì ÂÌﬂ· «·»Ì«‰« 
    Date.Day = stoi(vDate[0]);
    Date.Month = stoi(vDate[1]);
    Date.Year = stoi(vDate[2]);

    return Date;  // ≈—Ã«⁄ «· «—ÌŒ ›Ì ‘ﬂ· stDate
}

// œ«·… ·ﬁ—«¡… «· «—ÌŒ „‰ «·„” Œœ„
string ReadStringDate(string Message) {
    string DateString;  //  Œ“Ì‰ «· «—ÌŒ «·„œŒ· Â‰«
    cout << Message;    // ÿ»«⁄… —”«·… ··„” Œœ„
    getline(cin >> ws, DateString);  // ﬁ—«¡… «· «—ÌŒ «·„œŒ·

    return DateString;  // ≈—Ã«⁄ «· «—ÌŒ «·„œŒ· ﬂ‰’
}

// «·œ«·… «·—∆Ì”Ì…
int main() {
    // ﬁ—«¡… «· «—ÌŒ «·„œŒ· „‰ «·„” Œœ„
    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? ");

    //  ÕÊÌ· «·‰’ ≈·Ï ‘ﬂ· stDate
    stDate Date = StringToDate(DateString);

    // ÿ»«⁄… «·ÌÊ„ Ê«·‘Â— Ê«·”‰…
    cout << "\nDay: " << Date.Day << endl;
    cout << "Month: " << Date.Month << endl;
    cout << "Year: " << Date.Year << endl;

    // ÿ»«⁄… «· «—ÌŒ » ‰”Ìﬁ "dd/mm/yyyy"
    cout << "\nYou Entered: " << DateToString(Date) << "\n";

    system("pause>0");  // ≈Ìﬁ«› «·»—‰«„Ã
    return 0;           // «·«‰ Â«¡ „‰ «·»—‰«„Ã »‰Ã«Õ
}
