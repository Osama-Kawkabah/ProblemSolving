#include <iostream>
#include <string>
using namespace std;

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient() {
    sClient Client;
    cout << "Enter Account Number? ";
    getline(cin, Client.AccountNumber);
    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(sClient S1 ,string G = "#//#") {
    string Informaction = "";
    Informaction+= S1.AccountNumber + G;
    Informaction+= S1.PinCode + G;
    Informaction+= S1.Name + G;
    Informaction += S1.Phone + G;
    Informaction += to_string(S1.AccountBalance);

    return Informaction;
}

int main()
{
    sClient Client;
    Client = ReadNewClient();


    cout << ConvertRecordToLine(Client);

    return 0;
}
