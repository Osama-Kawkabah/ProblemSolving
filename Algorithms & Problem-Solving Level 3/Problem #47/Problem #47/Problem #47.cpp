#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//»Ì«‰«  «·⁄„Ì·
struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

//«·«œŒ«· «·»Ì«‰«  ﬂ‰ «·⁄„Ì·
sClient ReadNewClient() {
    sClient Client;
    cout << "Enter Account Number? " ;
    getline(cin >> ws, Client.AccountNumber);
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

//«—Ã«⁄ «·„⁄·Ê„«  ›Ì ”ÿ— Ê«Õœ
string ConvertRecordToLine(sClient S1, string G = "#//#") {
    string Informaction = "";
    Informaction += S1.AccountNumber + G;
    Informaction += S1.PinCode + G;
    Informaction += S1.Name + G;
    Informaction += S1.Phone + G;
    Informaction += to_string(S1.AccountBalance);

    return Informaction;
}

//Õ›Ÿ «·„·›
void SaveVectortoFile(string Text) {

    fstream MyCode;
    MyCode.open("Client.text", ios::out | ios::app);

    if (MyCode.is_open())
    {
        MyCode << Text << "\n";

        MyCode.close();
    }
}

void AddClients() {
    char AddMore = 'Y';
    do { system("cls");
    cout << "Adding New Client:\n\n";
    SaveVectortoFile(ConvertRecordToLine(ReadNewClient()));
    cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";         cin >> AddMore; } while (toupper(AddMore) == 'Y'); }

int main()
{

    AddClients();

    return 0;
}
