#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct ClientInfo {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

const string NameClientFile = "Client.txt";

ClientInfo ReadNewClient() {
    ClientInfo Info;
    cout << "Enter Account Number: ";
    getline(cin >> ws, Info.AccountNumber);
    cout << "Enter Pin Code: ";
    getline(cin, Info.PinCode);
    cout << "Enter Name: ";
    getline(cin, Info.Name);
    cout << "Enter Phone: ";
    getline(cin, Info.Phone);
    cout << "Enter Account Balance: ";
    cin >> Info.AccountBalance;

    return Info;
}

string ClientToInfo(const ClientInfo& client, const string& separator = "#//#") {
    string clientRecord = "";
    clientRecord += client.AccountNumber + separator;
    clientRecord += client.PinCode + separator;
    clientRecord += client.Name + separator;
    clientRecord += client.Phone + separator;
    clientRecord += to_string(client.AccountBalance);

    return clientRecord;
}


//  ﬁ”Ì„ «·‰’ ≈·Ï ﬂ·„«  »«” Œœ«„ «·›«’·… «·„Õœœ…
vector<string> SplitString(string S1, string delim = "#//#")
{
    vector<string> vAllWords;
    short pos = 0;
    string sWord;

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

    Info.AccountNumber = vString[0];
    Info.PinCode = vString[1];
    Info.Name = vString[2];
    Info.Phone = vString[3];
    Info.AccountBalance = stod(vString[4]);

    return Info;
}

void PrintClientInfo()
{
    ClientInfo Client;
    cout << "\n________________________________________________________________________" << endl;
    cout << "|\t\t|\t    | \t\t   |\t\t|\t\t|" << endl;
    cout << setw(15) << "|Account Number |" << setw(12) << "Pin Code |" <<
        setw(15) << "Name |" << setw(13) << "Phone |" <<
        setw(15) << "Account Balance|";
    cout << "\n|_______________|___________|______________|____________|_______________|" << endl;


    cout << setw(15) << Client.AccountNumber << setw(12) << Client.PinCode
        << setw(15) << Client.Name << setw(13) << Client.Phone
        << setw(15) << Client.AccountBalance << endl;;




}

void SaveInfoToFile(string fileName, string text) {
    fstream file;
    file.open(fileName, ios::in);

    string fileToText = "";
    if (file.is_open()) {
        
        file << text << endl;
        
        while (getline(file, fileToText))
        {
            SplitString(fileToText);
            ReadNewClient(fileToText);
        }

        file.close();
    }

}

int main() {


    PrintClientInfo();


    cout << "\n";
    return 0;
}
