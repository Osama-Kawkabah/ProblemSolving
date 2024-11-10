#include <iostream>
#include <string>
using namespace std;

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

sClient ReadNewClient() {
    sClient Inf;
    cout << "Enter Account Number ? ";
    getline(cin >> ws, Inf.AccountNumber);
    cout << "Enter Pin Code ? ";
    getline(cin, Inf.PinCode);
    cout << "Enter Name ? ";
    getline(cin, Inf.Name);
    cout << "Enter Phone ? ";
    getline(cin, Inf.Phone);
    cout << "Enter Account Balance ? ";
    cin >> Inf.AccountBalance;

    return Inf;
}


string PrintInfToClinet(sClient Client, string Seperator = "#//#") {

    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator; 
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    
    return stClientRecord;

}

int main()
{
    sClient Osama;

    Osama = ReadNewClient();
    cout << "\n\nClient Record for Saving is: \n";
    cout << PrintInfToClinet(Osama);


    cout << "\n";
    return 0;
}
