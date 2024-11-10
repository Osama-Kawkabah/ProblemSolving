#pragma once //  Ã‰»  ÷„Ì‰ «·„·› √ﬂÀ— „‰ „—…

#include <iostream>
#include <string>
using namespace std;

class clsPerson
{

private:

    string _FirstName; // «·«”„ «·√Ê· ··‘Œ’
    string _LastName; // «·«”„ «·√ŒÌ— ··‘Œ’
    string _Email; // «·»—Ìœ «·≈·ﬂ —Ê‰Ì ··‘Œ’
    string _Phone; // —ﬁ„ «·Â« › ··‘Œ’

public:

    // «·„ı‰‘∆ ··’‰› Ì” ﬁ»· «·»Ì«‰«  «·‘Œ’Ì… ··‘Œ’ ÊÌı⁄Ì¯ˆ‰Â« ··„ €Ì—«  «·„‰«”»…
    clsPerson(string FirstName, string LastName, string Email, string Phone)
    {
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // «·œ«·… · ⁄ÌÌ‰ ﬁÌ„… «·«”„ «·√Ê·
    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    // «·œ«·… ··Õ’Ê· ⁄·Ï ﬁÌ„… «·«”„ «·√Ê·
    string GetFirstName()
    {
        return _FirstName;
    }
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName; // Œ«’Ì… «·«”„ «·√Ê·

    // «·œ«·… · ⁄ÌÌ‰ ﬁÌ„… «·«”„ «·√ŒÌ—
    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    // «·œ«·… ··Õ’Ê· ⁄·Ï ﬁÌ„… «·«”„ «·√ŒÌ—
    string GetLastName()
    {
        return _LastName;
    }
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName; // Œ«’Ì… «·«”„ «·√ŒÌ—

    // «·œ«·… · ⁄ÌÌ‰ ﬁÌ„… «·»—Ìœ «·≈·ﬂ —Ê‰Ì
    void SetEmail(string Email)
    {
        _Email = Email;
    }

    // «·œ«·… ··Õ’Ê· ⁄·Ï ﬁÌ„… «·»—Ìœ «·≈·ﬂ —Ê‰Ì
    string GetEmail()
    {
        return _Email;
    }
    __declspec(property(get = GetEmail, put = SetEmail)) string Email; // Œ«’Ì… «·»—Ìœ «·≈·ﬂ —Ê‰Ì

    // «·œ«·… · ⁄ÌÌ‰ ﬁÌ„… —ﬁ„ «·Â« ›
    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    // «·œ«·… ··Õ’Ê· ⁄·Ï ﬁÌ„… —ﬁ„ «·Â« ›
    string GetPhone()
    {
        return _Phone;
    }
    __declspec(property(get = GetPhone, put = SetPhone)) string Phone; // Œ«’Ì… —ﬁ„ «·Â« ›

    // œ«·… ·≈—Ã«⁄ «·«”„ «·ﬂ«„·
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

};
