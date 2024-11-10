#pragma once

#include <iostream>
#include <string>
using namespace std;

class clsString
{

private:
    string _Value;

public:

    clsString()
    {
        _Value = "";
    }

    clsString(string Value)
    {
        _Value = Value;
    }

    void SetValue(string Value) {
        _Value = Value;
    }

    string GetValue() {
        return _Value;
    }


    static short CountWords(string S1)
    {

        string delim = " "; // delimiter  
        short Counter = 0;
        short pos = 0;
        string sWord; // define a string variable  

        // use find() function to get the position of the delimiters  
        while ((pos = S1.find(delim)) != std::string::npos)
        {
            sWord = S1.substr(0, pos); // store the word   
            if (sWord != "")
            {
                Counter++;
            }

            //erase() until positon and move to next word.
            S1.erase(0, pos + delim.length());
        }

        if (S1 != "")
        {
            Counter++; // it counts the last word of the string.
        }

        return Counter;

    }

    short CountWords()
    {
        return CountWords(_Value);
    };
   
    //  ﬁÊ„ »ÿ»«⁄… «·Õ—› «·√Ê· „‰ ﬂ· ﬂ·„… ›Ì «·”·”·…
    static string PrintFirstLetterOfEachWord(string S1) {
        string result; //  Œ“Ì‰ «·‰ ÌÃ… Â‰«
        bool isFirstLetter = true;
        for (int i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter) {
                if (i != 0) {
                    result += ","; // Ê÷⁄ ›«’·… »Ì‰ ﬂ· Õ—› „« ·„ Ìﬂ‰ «·Õ—› «·√ŒÌ— ›Ì «·”·”·… √Ê «·Õ—› «·√Ê· „‰ ﬂ·„… ÃœÌœ…
                }
                result += (char)toupper(S1[i]); // ≈÷«›… «·Õ—› «·√Ê· „‰ ﬂ· ﬂ·„… »Õ—Ê› ﬂ»Ì—… ≈·Ï «·‰ ÌÃ…
            }
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
        return result;
    }

    string PrintFirstLetterOfEachWord() {
        return PrintFirstLetterOfEachWord(_Value);
    }


    // ÕÊÌ· ﬂ· Õ—› „‰ »œ«ÌÂ «·ﬂ·„Â «·Ï tolower
    static string LowerFirstLetterOfEachWord(string S1) {
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

    string LowerFirstLetterOfEachWord() {
        return LowerFirstLetterOfEachWord(_Value);
    }

    // ÕÊÌ· ﬂ· Õ—› „‰ »œ«ÌÂ «·ﬂ·„Â «·Ï toupper
    static string UpperFirstLetterOfEachWord(string S1) {
        bool isFirstLetter = true;
        for (int i = 0; i < S1.length(); i++)
        {
            if (S1[i] != ' ' && isFirstLetter) {

                S1[i] = (char)toupper(S1[i]);

            }
            isFirstLetter = (S1[i] == ' ' ? true : false);
        }
        return S1;
    }

    string UpperFirstLetterOfEachWord() {
        return UpperFirstLetterOfEachWord(_Value);
    }

    // Õ–› «·„”«›«  „‰ «·Ì„‰ 
    static string TrimLeft(string S1) {
        char delim = ' ';
        for (int i = 0; i < S1.length(); i++)
        {
            if (S1[i] != delim) {
                return S1.substr(i, S1.length() - i);
            }
        }
        return "";
    }
    
    string TrimLeft() {
        return TrimLeft(_Value);
    }

    // Õ–› «·„”«›«  „‰ «·‘„«· 
    static string TrimRight(string S1) {
        char delim = ' ';
        for (int i = S1.length() - 1; i >= 0; i--)
        {
            if (S1[i] != delim) {
                return S1.substr(0, i + 1);
            }
        }
        return "";
    }

    string TrimRight() {
        return TrimRight(_Value);
    }

    // ÕÊÌ· «·ﬂ·„Â „‰ Õ—› ’€Ì— ·ﬂ»Ì— Ê«·⁄ﬂ”
    static string InvertLetterstring(string S1) {
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

    string InvertLetterstring() {
        return InvertLetterstring(_Value);
    }

    static short Chainlength(string S1) {
        short Count = 0;
        for (int i = 0; i < S1.length(); i++) {
            Count++;
        }
        return Count;
    }

    short Chainlength() {
        return Chainlength(_Value);
    }

    __declspec(property(get = GetValue, put = SetValue)) string Value;
};

