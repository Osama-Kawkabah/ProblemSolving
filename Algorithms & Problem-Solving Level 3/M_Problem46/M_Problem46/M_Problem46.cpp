#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ClientInfo
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

vector<string> SplitString(string S1, string delim = "#//#")
{
    vector<string> vAllWords;
    short pos = 0;
    string sWord;

    //  ﬁ”Ì„ «·‰’ ≈·Ï ﬂ·„«  »«” Œœ«„ «·›«’·… «·„Õœœ…
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vAllWords.push_back(sWord);
        }
        S1.erase(0, pos + delim.length());
    }

    // ≈÷«›… «·ﬂ·„… «·√ŒÌ—… ≈–« ﬂ«‰  €Ì— ›«—€…
    if (S1 != "")
    {
        vAllWords.push_back(S1);
    }

    return vAllWords;
}

ClientInfo ReadNewClient(string S1)
{
    ClientInfo Info;
    vector<string> vString;
    vString = SplitString(S1);

    // «” Œ—«Ã «·„⁄·Ê„«  „‰ «·‰’ «·„ﬁ”„
    Info.AccountNumber = vString[0];
    Info.PinCode = vString[1];
    Info.Name = vString[2];
    Info.Phone = vString[3];
    Info.AccountBalance = stod(vString[4]);

    return Info;
}

void PrintClientInfo(ClientInfo Client)
{
    // ÿ»«⁄… „⁄·Ê„«  «·⁄„Ì·
     //  €ÌÌ— ·Ê‰ «·‰’ ≈·Ï «·Œ÷—…
    cout << "\033[1;32m"; // »œ«Ì… «··Ê‰ «·√Œ÷—
    cout << "Account Number : " << Client.AccountNumber << endl;
    cout << "Pin Code       : " << Client.PinCode << endl;
    cout << "Name           : " << Client.Name << endl;
    cout << "Phone          : " << Client.Phone << endl;
    cout << "Account Balance: " << Client.AccountBalance << endl;
    cout << "\033[0m"; // «” ⁄«œ… «··Ê‰ «·«› —«÷Ì
}

int main()
{
    string S1 = "A67#//#737#//#Osama Ali Yahya Haseen Kokabah#//#778033464#//#9000";

    ClientInfo Client;
    // ﬁ—«¡… „⁄·Ê„«  «·⁄„Ì· «·ÃœÌœ „‰ «·‰’
    Client = ReadNewClient(S1);

    cout << "\nLine Record is:\n";
    // ÿ»«⁄… „⁄·Ê„«  «·⁄„Ì·
    PrintClientInfo(Client);

    cout << "\n";
    return 0;
}