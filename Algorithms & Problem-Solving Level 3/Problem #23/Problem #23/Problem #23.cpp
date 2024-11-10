#include <iostream>
#include <string>
using namespace std;

//  ﬁÊ„ »ﬁ—«¡… ”·”·… „‰ «·„” Œœ„
string ReadString() {
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

//  ﬁÊ„ »ÿ»«⁄… «·Õ—› «·√Ê· „‰ ﬂ· ﬂ·„… ›Ì «·”·”·…
void PrintFirstLetterOfEachWord(string S1) {
    bool isFirstLetter = true;
    cout << "\nFirst letters of this string: \n";
    for (int i = 0; i < S1.length(); i++)
    {
        // ≈–« ﬂ«‰ «·Õ—› «·Õ«·Ì ·Ì” „”«›… ÊÂÊ «·Õ—› «·√Ê· ›Ì «·ﬂ·„…
        if (S1[i] != ' ' && isFirstLetter) {
            cout << S1[i] << endl; // ÿ»«⁄… «·Õ—› «·√Ê·
        }
        isFirstLetter = (S1[i] == ' ' ? true : false); //  ÕœÌÀ ﬁÌ„… isFirstLetter
    }
}

int main()
{
    // ”·”·… ﬁÌ«”Ì…
    string MyName = "Osama Ali Yahya Haseen Kokabah";

    PrintFirstLetterOfEachWord(ReadString()); // «” œ⁄«¡ «·œ«·… ·ÿ»«⁄… «·Õ—› «·√Ê· „‰ ﬂ· ﬂ·„… ›Ì «·”·”·…

    return 0;
}