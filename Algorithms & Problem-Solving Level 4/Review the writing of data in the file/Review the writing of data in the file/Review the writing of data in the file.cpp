#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
string ClientsFileName = "Client.txt";

//-------------------------------------------------
// ÊÍæíá ãä Client Çáì äÕ æÚáÇãå#//#
//-------------------------------------------------
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//sClient ReadNewClient() {
//    sClient Client;
//    cout << "Enter Account Number? ";
//    getline(cin, Client.AccountNumber);
//    cout << "Enter PinCode? ";
//    getline(cin, Client.PinCode);
//    cout << "Enter Name? ";
//    getline(cin, Client.Name);
//    cout << "Enter Phone? ";
//    getline(cin, Client.Phone);
//    cout << "Enter AccountBalance? ";
//    cin >> Client.AccountBalance;
//    return Client;
//}
//string ConvertRecordToLine(sClient Client, string Separator = "#//#") {
//    string stClientRecord = "";
//    stClientRecord += Client.AccountNumber + Separator;
//    stClientRecord += Client.PinCode + Separator;
//    stClientRecord += Client.Name + Separator;
//    stClientRecord += Client.Phone + Separator;
//    stClientRecord += to_string(Client.AccountBalance);
//    return stClientRecord;
//}
//
//int main() {
//    cout << "\nPlease Enter Client Data: \n\n";
//    sClient Client;
//    Client = ReadNewClient();
//    cout << "\n\nClient Record for Saving is: \n";
//    cout << ConvertRecordToLine(Client);
//    system("pause>0");
//    return 0;
//}
//-------------------------------------------------
//-------------------------------------------------

//-------------------------------------------------
// ÊÍæíá ãä #//# Çáì ÈíÇäÇÊ Client
//-------------------------------------------------
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//vector<string> SplitString(string S1, string Delim) {
//    // ÅäÔÇÁ ŞÇÆãÉ áÊÎÒíä ÇáßáãÇÊ ÇáãİÕæáÉ
//    vector<string> vString;
//
//    // ãÊÛíÑ áÊÎÒíä ãæÖÚ ÇáİÇÕáÉ İí ÇáÓáÓáÉ
//    short pos = 0;
//
//    // ÓáÓáÉ áÊÎÒíä ÇáßáãÉ ÇáÍÇáíÉ
//    string sWord;
//
//    // ÇÓÊÎÏã ÍáŞÉ while áİÍÕ ÇáÓáÓáÉ æİÕáåÇ ÈÇÓÊÎÏÇã ÇáİÇÕáÉ ÇáãÍÏÏÉ
//    while ((pos = S1.find(Delim)) != string::npos) {
//        // ÇÓÊÎÑÇÌ ÇáÌÒÁ ãä ÇáÓáÓáÉ ãä ÈÏÇíÉ ÇáÓáÓáÉ ÍÊì ÇáİÇÕáÉ
//        sWord = S1.substr(0, pos);
//
//        // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇäÊ ÇáßáãÉ ÛíÑ İÇÑÛÉ ŞÈá ÅÖÇİÊåÇ Åáì ÇáŞÇÆãÉ
//        if (sWord != "") {
//            vString.push_back(sWord);
//        }
//
//        // ÍĞİ ÇáÌÒÁ ÇáĞí Êã İÕáå ãä ÇáÓáÓáÉ
//        S1.erase(0, pos + Delim.length());
//    }
//
//    // ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÍáŞÉ¡ ŞÏ Êßæä åäÇß ßáãÉ ÂÎÑì ÈÏæä İÇÕáÉ¡ áĞÇ äÍÊÇÌ ááÊÍŞŞ ãÑÉ ÃÎÑì æÅÖÇİÊåÇ ÅĞÇ ßÇäÊ ÛíÑ İÇÑÛÉ
//    if (S1 != "") {
//        vString.push_back(S1);
//    }
//
//    // ÅÑÌÇÚ ÇáŞÇÆãÉ ÇáäåÇÆíÉ ááßáãÇÊ ÇáãİÕæáÉ
//    return vString;
//}
//
//sClient ConvertLineToRecord(string Line, string Separator = "#//#") {
//    sClient Client;
//    vector<string> vClientData;
//    vClientData = SplitString(Line, Separator);
//    Client.AccountNumber = vClientData[0];
//    Client.PinCode = vClientData[1];
//    Client.Name = vClientData[2];
//    Client.Phone = vClientData[3];
//    Client.AccountBalance = stod(vClientData[4]); // ÊÍæíá ÇáÓáÓáÉ Åáì double
//    return Client;
//}
//
//void PrintClientRecord(sClient Client) {
//    cout << "\n\nThe following is the extracted client record:\n";
//    cout << "\nAccout Number: " << Client.AccountNumber;
//    cout << "\nPin Code     : " << Client.PinCode;
//    cout << "\nName         : " << Client.Name;
//    cout << "\nPhone        : " << Client.Phone;
//    cout << "\nAccount Balance: " << Client.AccountBalance;
//}
//
//int main() {
//    string stLine = "A150#//#1234#//#Osama Ali Yahya Haseen Kokabah#//#079999#//#5270.000000";
//    cout << "\nLine Record is:\n";
//    cout << stLine;
//    sClient Client = ConvertLineToRecord(stLine);
//    PrintClientRecord(Client);
//
//
//    cout << "\n";
//    system("pause>0");
//    return 0;
//}
//-------------------------------------------------
//-------------------------------------------------

//-------------------------------------------------
// ÍİÙ ÇáÈíÇäÇÊ İí ãáİ äÕí
//-------------------------------------------------
//// ÊÚÑíİ åíßá ÇáÚãíá
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ÏÇáÉ áŞÑÇÁÉ ÈíÇäÇÊ Úãíá ÌÏíÏ
//sClient ReadNewClient() {
//    sClient Client;
//    cout << "Enter Account Number? ";
//    getline(cin >> ws, Client.AccountNumber);
//    cout << "Enter PinCode? ";
//    getline(cin, Client.PinCode);
//    cout << "Enter Name? ";
//    getline(cin, Client.Name);
//    cout << "Enter Phone? ";
//    getline(cin, Client.Phone);
//    cout << "Enter AccountBalance? ";
//    cin >> Client.AccountBalance;
//    return Client;
//}
//
//// ÏÇáÉ áÊÍæíá ÈíÇäÇÊ ÇáÚãíá Åáì ÓáÓáÉ äÕíÉ
//string ConvertRecordToLine(sClient Client, string Separator = "#//#") {
//    string stClientRecord = "";
//    stClientRecord += Client.AccountNumber + Separator;
//    stClientRecord += Client.PinCode + Separator;
//    stClientRecord += Client.Name + Separator;
//    stClientRecord += Client.Phone + Separator;
//    stClientRecord += to_string(Client.AccountBalance);
//    return stClientRecord;
//}
//
//// ÏÇáÉ áÍİÙ ÇáÓáÓáÉ İí ãáİ
//void SaveLineInFile(string ClientFileName, string S1) {
//    // ÅäÔÇÁ ãÊÛíÑ ãä äæÚ fstream áİÊÍ Çáãáİ
//    fstream File;
//
//    // İÊÍ Çáãáİ "Client.txt" İí æÖÚ ÇáßÊÇÈÉ (ios::out)
//    File.open(ClientFileName, ios::out | ios::app);
//
//    // ÇáÊÍŞŞ ãä İÊÍ Çáãáİ ÈäÌÇÍ
//    if (File.is_open()) {
//        // ßÊÇÈÉ ÇáÓáÓáÉ S1 Åáì Çáãáİ
//        File << S1 << endl;
//    }
//
//    File.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáßÊÇÈÉ
//
//}
//
//void WantAddLineInFile(string ClientFileName) {
//    char addFill = 'Y';
//
//    do {
//        system("cls"); // ÊäÙíİ ÇáÔÇÔÉ
//        cout << "\nPlease Enter Client Data:\n\n";
//        sClient Client;
//        Client = ReadNewClient(); // ŞÑÇÁÉ ÈíÇäÇÊ ÇáÚãíá
//
//        string TheLine = ConvertRecordToLine(Client); // ÊÍæíá ÈíÇäÇÊ ÇáÚãíá Åáì ÓáÓáÉ äÕíÉ
//        SaveLineInFile(ClientFileName, TheLine); // ÍİÙ ÇáÓáÓáÉ İí ãáİ
//
//        cout << "\n\nDo You Want to Add More Clients? (Y/N): ";
//        cin >> addFill;
//    } while (addFill == 'Y' || addFill == 'y');
//}
//
//int main() {
//    
//    WantAddLineInFile(ClientFileName);
//
//    system("pause>0");
//    return 0;
//}
//-------------------------------------------------
//-------------------------------------------------

//-------------------------------------------------
// ÚÑÖ ÇáÈíÇäÇÊ ãä ãáİ äÕí
//-------------------------------------------------
// ÊÚÑíİ åíßá sClient áÊÎÒíä ÈíÇäÇÊ ÇáÚãáÇÁ
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ÏÇáÉ áÊŞÓíã ÓáÓáÉ äÕíÉ ÈÇÓÊÎÏÇã İÇÕá ãÚíä æÅÑÌÇÚ ÇáäÕæÕ ÇáãİÕæáÉ
//vector<string> SplitString(string S1, string Delim) {
//    vector<string> vString;
//    short pos = 0;
//    string sWord;
//
//    while ((pos = S1.find(Delim)) != string::npos) {
//        sWord = S1.substr(0, pos);
//        if (sWord != "") {
//            vString.push_back(sWord);
//        }
//        S1.erase(0, pos + Delim.length());
//    }
//
//    if (S1 != "") {
//        vString.push_back(S1);
//    }
//
//    return vString;
//}
//
//// ÏÇáÉ áÊÍæíá ÓÌá Úãíá ãä ÓáÓáÉ äÕíÉ Åáì åíßá sClient
//sClient ConvertLineToRecord(string Line, string Separator = "#//#") {
//    sClient Client;
//    vector<string> vClientData;
//    vClientData = SplitString(Line, Separator);
//    Client.AccountNumber = vClientData[0];
//    Client.PinCode = vClientData[1];
//    Client.Name = vClientData[2];
//    Client.Phone = vClientData[3];
//    Client.AccountBalance = stod(vClientData[4]);
//    return Client;
//}
//
//// ÏÇáÉ áÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä ãáİ äÕí
//vector<sClient> LoadClientsDataFromFile(string FileName) {
//    vector<sClient> vsClient;
//    ifstream MyFile;
//    MyFile.open(FileName, ios::in);
//
//    if (MyFile.is_open()) {
//        string Line;
//        sClient Client;
//
//        while (getline(MyFile, Line)) {
//            Client = ConvertLineToRecord(Line);
//            vsClient.push_back(Client);
//        }
//        MyFile.close();
//    }
//    return vsClient;
//}
//
//// ÏÇáÉ áØÈÇÚÉ ÓÌá Úãíá æÇÍÏ
//void PrintClientRecord(sClient Client) {
//    cout << "| " << setw(15) << left << Client.AccountNumber;
//    cout << "| " << setw(10) << left << Client.PinCode;
//    cout << "| " << setw(40) << left << Client.Name;
//    cout << "| " << setw(12) << left << Client.Phone;
//    cout << "| " << setw(11) << left << Client.AccountBalance;
//    cout << "|";
//}
//
//// ÏÇáÉ áØÈÇÚÉ ÌãíÚ ÈíÇäÇÊ ÇáÚãáÇÁ
//void PrintAllClientsData(vector<sClient> vClients) {
//    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).\n";
//    cout << "___________________________________________________________________________________________________\n" << endl;
//    cout << "| " << left << setw(15) << "Account Number";
//    cout << "| " << left << setw(10) << "Pin Code";
//    cout << "| " << left << setw(40) << "Client Name";
//    cout << "| " << left << setw(12) << "Phone";
//    cout << "| " << left << setw(11) << "Balance";
//    cout << "|";
//    cout << "\n___________________________________________________________________________________________________\n" << endl;
//
//    for (sClient Client : vClients) {
//        PrintClientRecord(Client);
//        cout << endl;
//    }
//    cout << "___________________________________________________________________________________________________\n" << endl;
//}
//
//// ÇáÏÇáÉ ÇáÑÆíÓíÉ
//int main() {
//
//    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName); // ÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä Çáãáİ
//    PrintAllClientsData(vClients); // ØÈÇÚÉ ÈíÇäÇÊ ÇáÚãáÇÁ
//    system("pause>0");
//    return 0;
//}

//-------------------------------------------------
// ÚÑÖ ÇáÈíÇäÇÊ ãä ãáİ äÕí ÍÓÈ ÑŞã ÇáÚãíá
//-------------------------------------------------
//// ÊÚÑíİ Çáåíßá sClient áÊÎÒíä ÈíÇäÇÊ ÇáÚãáÇÁ
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ÏÇáÉ áÊŞÓíã ÓáÓáÉ äÕíÉ Åáì ÃÌÒÇÁ ÈäÇÁğ Úáì İÇÕá ãÚíä
//vector<string> SplitString(string S1, string Delim) {
//    vector<string> vString;
//    short pos = 0;
//    string sWord;
//
//    while ((pos = S1.find(Delim)) != std::string::npos) {
//        sWord = S1.substr(0, pos); // Store the word
//        if (sWord != "") {
//            vString.push_back(sWord);
//        }
//        S1.erase(0, pos + Delim.length());
//    }
//
//    if (S1 != "") {
//        vString.push_back(S1); // Add the last word of the string
//    }
//
//    return vString;
//}
//
//// ÏÇáÉ áÊÍæíá ÓØÑ äÕí Åáì ÓÌá sClient
//sClient ConvertLineToRecord(string Line, string Separator = "#//#") {
//    sClient Client;
//    vector<string> vClientData;
//    vClientData = SplitString(Line, Separator);
//    Client.AccountNumber = vClientData[0];
//    Client.PinCode = vClientData[1];
//    Client.Name = vClientData[2];
//    Client.Phone = vClientData[3];
//    Client.AccountBalance = stod(vClientData[4]); // Convert string to double
//    return Client;
//}
//
//// ÏÇáÉ áÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä ãáİ
//vector<sClient> LoadClientsDataFromFile(string FileName) {
//    vector<sClient> vClients;
//    ifstream MyFile;
//    MyFile.open(FileName, ios::in); // Open the file in read mode
//
//    if (MyFile.is_open()) {
//        string Line;
//        sClient Client;
//        while (getline(MyFile, Line)) {
//            Client = ConvertLineToRecord(Line);
//            vClients.push_back(Client);
//        }
//        MyFile.close();
//    }
//    return vClients;
//}
//
//// ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÇáÚãíá
//void PrintClientCard(sClient Client) {
//    cout << "\nThe following are the client details:\n";
//    cout << "\nAccount Number: " << Client.AccountNumber;
//    cout << "\nPin Code      : " << Client.PinCode;
//    cout << "\nName          : " << Client.Name;
//    cout << "\nPhone         : " << Client.Phone;
//    cout << "\nAccount Balance: " << Client.AccountBalance;
//}
//
//// ÏÇáÉ ááÈÍË Úä Úãíá ÈÑŞã ÍÓÇÈå
//bool FindClientByAccountNumber(string AccountNumber, sClient& Client) {
//    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
//    for (sClient C : vClients) {
//        if (C.AccountNumber == AccountNumber) {
//            Client = C;
//            return true;
//        }
//    }
//    return false;
//}
//
//// ÏÇáÉ áŞÑÇÁÉ ÑŞã ÍÓÇÈ ÇáÚãíá ãä ÇáãÓÊÎÏã
//string ReadClientAccountNumber() {
//    string AccountNumber = "";
//    cout << "\nPlease enter Account Number: ";
//    cin >> AccountNumber;
//    return AccountNumber;
//}
//
//int main() {
//    sClient Client;
//    string AccountNumber = ReadClientAccountNumber(); // Read client's account number
//
//    // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚãíá ãæÌæÏğÇ ÈÇÓÊÎÏÇã ÑŞã ÍÓÇÈå
//    if (FindClientByAccountNumber(AccountNumber, Client)) {
//        // ÅĞÇ Êã ÇáÚËæÑ Úáì ÇáÚãíá¡ Şã ÈØÈÇÚÉ ÊİÇÕíáå
//        PrintClientCard(Client);
//    }
//    else {
//        // ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚãíá¡ ÚÑÖ ÑÓÇáÉ ÈÃä ÇáÚãíá ÛíÑ ãæÌæÏ
//        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
//    }
//
//    system("pause>0");
//    return 0;
//}

//-------------------------------------------------
// ÍĞİ ÇáÈíÇäÇÊ ãä ãáİ äÕí ÍÓÈ ÑŞã ÇáÚãíá
//-------------------------------------------------
//// åíßá íãËá ÈíÇäÇÊ ÇáÚãíá
//struct sClient {
//    string AccountNumber; // ÑŞã ÇáÍÓÇÈ
//    string PinCode; // ÑãÒ ÇáãÑæÑ
//    string Name; // ÇÓã ÇáÚãíá
//    string Phone; // ÑŞã ÇáåÇÊİ
//    double AccountBalance; // ÑÕíÏ ÇáÍÓÇÈ
//    bool MarkForDelete = false; // ÊãííÒ ÇáÓÌá ááÍĞİ
//};
//
//// ÏÇáÉ ÊŞæã ÈÊŞÓíã ÓáÓáÉ äÕíÉ Åáì ÚÏÉ ÃÌÒÇÁ ÈÇÓÊÎÏÇã İÇÕá ãÚíä
//vector<string> SplitString(string S1, string Delim) {
//    vector<string> vString;
//    short pos = 0;
//    string sWord;
//
//    while ((pos = S1.find(Delim)) != std::string::npos) {
//        sWord = S1.substr(0, pos);
//        if (sWord != "") {
//            vString.push_back(sWord);
//        }
//        S1.erase(0, pos + Delim.length());
//    }
//
//    if (S1 != "") {
//        vString.push_back(S1);
//    }
//
//    return vString;
//}
//
//// ÏÇáÉ ÊÍæíá ÓáÓáÉ äÕíÉ Åáì ÈíÇäÇÊ Úãíá
//sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {
//    sClient Client;
//    vector<string> vClientData;
//    vClientData = SplitString(Line, Seperator);
//    Client.AccountNumber = vClientData[0];
//    Client.PinCode = vClientData[1];
//    Client.Name = vClientData[2];
//    Client.Phone = vClientData[3];
//    Client.AccountBalance = stod(vClientData[4]);
//    return Client;
//}
//
//// ÏÇáÉ ÊÍæíá ÈíÇäÇÊ Úãíá Åáì ÓáÓáÉ äÕíÉ
//string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
//    string stClientRecord = "";
//    stClientRecord += Client.AccountNumber + Seperator;
//    stClientRecord += Client.PinCode + Seperator;
//    stClientRecord += Client.Name + Seperator;
//    stClientRecord += Client.Phone + Seperator;
//    stClientRecord += to_string(Client.AccountBalance);
//    return stClientRecord;
//}
//
//// ÏÇáÉ áÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä ãáİ
//vector<sClient> LoadClientsDataFromFile(string FileName) {
//    vector<sClient> vClients;
//    fstream MyFile;
//    MyFile.open(FileName, ios::in); // æÖÚ ÇáŞÑÇÁÉ
//    if (MyFile.is_open()) {
//        string Line;
//        sClient Client;
//        while (getline(MyFile, Line)) {
//            Client = ConvertLineToRecord(Line);
//            vClients.push_back(Client);
//        }
//        MyFile.close();
//    }
//    return vClients;
//}
//
//// ÏÇáÉ áØÈÇÚÉ ÈíÇäÇÊ ÇáÚãíá Úáì ÇáÔÇÔÉ
//void PrintClientCard(sClient Client) {
//    cout << "\nThe following are the client details:\n";
//    cout << "\nAccout Number: " << Client.AccountNumber;
//    cout << "\nPin Code     : " << Client.PinCode;
//    cout << "\nName         : " << Client.Name;
//    cout << "\nPhone        : " << Client.Phone;
//    cout << "\nAccount Balance: " << Client.AccountBalance;
//}
//
//// ÏÇáÉ ááÈÍË Úä Úãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
//bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client) {
//    for (sClient C : vClients) {
//        if (C.AccountNumber == AccountNumber) {
//            Client = C;
//            return true;
//        }
//    }
//    return false;
//}
//
//// ÏÇáÉ áæÖÚ ÚáÇãÉ áÍĞİ Úãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
//bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
//    for (sClient& C : vClients) {
//        if (C.AccountNumber == AccountNumber) {
//            C.MarkForDelete = true;
//            return true;
//        }
//    }
//    return false;
//}
//
//// ÏÇáÉ áÍİÙ ÈíÇäÇÊ ÇáÚãáÇÁ İí ãáİ
//vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {
//    fstream MyFile;
//    MyFile.open(FileName, ios::out); // æÖÚ ÇáßÊÇÈÉ (ÓíÊã ÇáßÊÇÈÉ İæŞ Çáãáİ ÅĞÇ ßÇä ãæÌæÏğÇ)
//    if (MyFile.is_open()) {
//        for (sClient C : vClients) {
//            if (!C.MarkForDelete) {
//                string DataLine = ConvertRecordToLine(C);
//                MyFile << DataLine << endl;
//            }
//        }
//        MyFile.close();
//    }
//    return vClients;
//}
//
//// ÏÇáÉ áÍĞİ Úãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
//bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
//    sClient Client;
//    char Answer = 'n';
//
//    if (FindClientByAccountNumber(AccountNumber, vClients, Client)) {
//        PrintClientCard(Client);
//        cout << "\n\nAre you sure you want to delete this client? y/n ? ";
//        cin >> Answer;
//
//        if (Answer == 'y' || Answer == 'Y') {
//            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
//            SaveClientsDataToFile(ClientsFileName, vClients);
//            vClients = LoadClientsDataFromFile(ClientsFileName);
//            cout << "\n\nClient Deleted Successfully.";
//            return true;
//        }
//    }
//    else {
//        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
//        return false;
//    }
//}
//
//// ÏÇáÉ áŞÑÇÁÉ ÑŞã ÇáÍÓÇÈ ãä ÇáãÓÊÎÏã
//string ReadClientAccountNumber() {
//    string AccountNumber = "";
//    cout << "\nPlease enter Account Number: ";
//    cin >> AccountNumber;
//    return AccountNumber;
//}
//
//// ÇáÏÇáÉ ÇáÑÆíÓíÉ
//int main() {
//    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
//    string AccountNumber = ReadClientAccountNumber();
//    DeleteClientByAccountNumber(AccountNumber, vClients);
//    system("pause>0");
//    return 0;
//}


//-------------------------------------------------
// ÊÚÏíá ÇáÈíÇäÇÊ ãä ãáİ äÕí ÍÓÈ ÑŞã ÇáÚãíá
//-------------------------------------------------

// ÊÚÑíİ åíßá áÊãËíá ÈíÇäÇÊ ÇáÚãíá
struct sClient {
    string AccountNumber; // ÑŞã ÇáÍÓÇÈ
    string PinCode; // ÑãÒ ÇáãÑæÑ
    string Name; // ÇÓã ÇáÚãíá
    string Phone; // ÑŞã ÇáåÇÊİ
    double AccountBalance; // ÑÕíÏ ÇáÍÓÇÈ
    bool MarkForDelete = false; // ÚáÇãÉ ááÊÍÏíÏ ãÇ ÅĞÇ ßÇä ÇáÚãíá ãÍĞæİğÇ Ãã áÇ (ÇáÇİÊÑÇÖí ÛíÑ ãÍĞæİ)
};

// ÏÇáÉ áÊŞÓíã ÓáÓáÉ äÕíÉ Åáì ÃÌÒÇÁ ÈÇÓÊÎÏÇã İÇÕá ãÍÏÏ
vector<string> SplitString(string S1, string Delim) {
    vector<string> vString; // ŞÇÆãÉ áÊÎÒíä ÇáÃÌÒÇÁ ÇáãŞÓãÉ
    short pos = 0; // ÇáãÊÛíÑ áÊÎÒíä ãæÖÚ ÇáİÇÕá
    string sWord; // ÓáÓáÉ áÊÎÒíä ßá ÌÒÁ

    // ÇáÈÏÁ İí ÊŞÓíã ÇáÓáÓáÉ Åáì ÃÌÒÇÁ
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // ÇÓÊÎÑÇÌ ÇáÌÒÁ
        if (sWord != "") { // ÇáÊÃßÏ ãä Ãä ÇáÌÒÁ ÛíÑ İÇÑÛ
            vString.push_back(sWord); // ÅÖÇİÉ ÇáÌÒÁ Åáì ÇáŞÇÆãÉ
        }
        S1.erase(0, pos + Delim.length()); // ÍĞİ ÇáÌÒÁ ÇáãÓÊÎÑÌ ãä ÇáÓáÓáÉ
    }

    if (S1 != "") { // ÇáÊÃßÏ ãä æÌæÏ ÌÒÁ ÂÎÑ áã íÊã ãÚÇáÌÊå ÈÚÏ
        vString.push_back(S1); // ÅÖÇİÉ ÇáÌÒÁ ÇáÃÎíÑ Åáì ÇáŞÇÆãÉ
    }

    return vString; // ÅÑÌÇÚ ÇáÃÌÒÇÁ ÇáãŞÓãÉ
}

// ÏÇáÉ áÊÍæíá ÓáÓáÉ äÕíÉ Åáì ÈíÇäÇÊ Úãíá
sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {
    sClient Client;
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator); // ÊŞÓíã ÇáÓáÓáÉ Åáì ÃÌÒÇÁ ÈÇÓÊÎÏÇã ÇáİÇÕá ÇáãÚØì
    Client.AccountNumber = vClientData[0]; // ÊÚííä ÑŞã ÇáÍÓÇÈ
    Client.PinCode = vClientData[1]; // ÊÚííä ÑãÒ ÇáãÑæÑ
    Client.Name = vClientData[2]; // ÊÚííä ÇÓã ÇáÚãíá
    Client.Phone = vClientData[3]; // ÊÚííä ÑŞã ÇáåÇÊİ
    Client.AccountBalance = stod(vClientData[4]); // ÊÍæíá ÓáÓáÉ ÇáÑÕíÏ Åáì double æÊÚííäå
    return Client; // ÅÑÌÇÚ ÈíÇäÇÊ ÇáÚãíá
}

// ÏÇáÉ áÊÍæíá ÈíÇäÇÊ Úãíá Åáì ÓáÓáÉ äÕíÉ
string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
    string stClientRecord = ""; // ÓáÓáÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãíá
    stClientRecord += Client.AccountNumber + Seperator; // ÅÖÇİÉ ÑŞã ÇáÍÓÇÈ ãÚ ÇáİÇÕá
    stClientRecord += Client.PinCode + Seperator; // ÅÖÇİÉ ÑãÒ ÇáãÑæÑ ãÚ ÇáİÇÕá
    stClientRecord += Client.Name + Seperator; // ÅÖÇİÉ ÇÓã ÇáÚãíá ãÚ ÇáİÇÕá
    stClientRecord += Client.Phone + Seperator; // ÅÖÇİÉ ÑŞã ÇáåÇÊİ ãÚ ÇáİÇÕá
    stClientRecord += to_string(Client.AccountBalance); // ÊÍæíá ÇáÑÕíÏ Åáì ÓáÓáÉ äÕíÉ æÅÖÇİÊåÇ
    return stClientRecord; // ÅÑÌÇÚ ÓáÓáÉ ÈíÇäÇÊ ÇáÚãíá
}

// ÏÇáÉ áÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä ãáİ
vector<sClient> LoadClientsDataFromFile(string FileName) {
    vector<sClient> vClients; // ŞÇÆãÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãáÇÁ
    fstream MyFile; // ßÇÆä áİÊÍ Çáãáİ
    MyFile.open(FileName, ios::in); // İÊÍ Çáãáİ İí æÖÚ ÇáŞÑÇÁÉ
    if (MyFile.is_open()) { // ÇáÊÃßÏ ãä Ãä ÇáİÊÍ äÌÍ
        string Line; // ÓáÓáÉ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
        sClient Client; // ßÇÆä áÊÎÒíä ÈíÇäÇÊ ßá Úãíá
        while (getline(MyFile, Line)) { // ŞÑÇÁÉ ÇáÈíÇäÇÊ ÓØÑğÇ ÈÓØÑ
            Client = ConvertLineToRecord(Line); // ÊÍæíá ÇáÓØÑ Åáì ÈíÇäÇÊ Úãíá
            vClients.push_back(Client); // ÅÖÇİÉ ÈíÇäÇÊ ÇáÚãíá Åáì ÇáŞÇÆãÉ
        }
        MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáŞÑÇÁÉ
    }
    return vClients; // ÅÑÌÇÚ ŞÇÆãÉ ÈíÇäÇÊ ÇáÚãáÇÁ
}

// ÏÇáÉ áØÈÇÚÉ ÈíÇäÇÊ ÇáÚãíá
void PrintClientCard(sClient Client) {
    cout << "\nThe following are the client details:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

// ÏÇáÉ ááÈÍË Úä Úãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client) {
    for (sClient C : vClients) { // ÇáÚãá Úáì ßá Úãíá İí ÇáŞÇÆãÉ
        if (C.AccountNumber == AccountNumber) { // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãØÇÈŞğÇ
            Client = C; // ÅĞÇ ßÇä ÇáÚãíá ãæÌæÏğÇ¡ Şã ÈÊÚííä Şíã ÈíÇäÇÊå ááÚãíá ÇáãõÚØì ßãÑÌÚ
            return true; // ÅÑÌÇÚ ŞíãÉ ÕÍíÍÉ ááÅÔÇÑÉ Åáì ÇáÚËæÑ Úáì ÇáÚãíá
        }
    }
    return false; // ÅÑÌÇÚ ŞíãÉ ÎÇØÆÉ ááÅÔÇÑÉ Åáì ÚÏã ÇáÚËæÑ Úáì ÇáÚãíá
}

// ÏÇáÉ áÊÛííÑ ÈíÇäÇÊ ÇáÚãíá
sClient ChangeClientRecord(string AccountNumber) {
    sClient Client; // ÅäÔÇÁ ßÇÆä Úãíá ÌÏíÏ
    Client.AccountNumber = AccountNumber; // ÊÚííä ÑŞã ÇáÍÓÇÈ

    // ÇÓÊŞÈÇá ÇáÈíÇäÇÊ ÇáÌÏíÏÉ ãä ÇáãÓÊÎÏã
    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode); // ÇÓÊŞÈÇá ÑãÒ ÇáãÑæÑ ãÚ ãÑÇÚÇÉ ÇáİÑÇÛÇÊ ÇáÈíÖÇÁ
    cout << "Enter Name? ";
    getline(cin, Client.Name); // ÇÓÊŞÈÇá ÇÓã ÇáÚãíá
    cout << "Enter Phone? ";
    getline(cin, Client.Phone); // ÇÓÊŞÈÇá ÑŞã ÇáåÇÊİ
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance; // ÇÓÊŞÈÇá ÑÕíÏ ÇáÍÓÇÈ

    return Client; // ÅÑÌÇÚ ÇáÚãíá ÈÚÏ ÊÛííÑ ÇáÈíÇäÇÊ
}
// ÏÇáÉ áÍİÙ ÈíÇäÇÊ ÇáÚãáÇÁ İí ãáİ
vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {
    fstream MyFile; // ßÇÆä áİÊÍ Çáãáİ
    MyFile.open(FileName, ios::out); // İÊÍ Çáãáİ İí æÖÚ ÇáßÊÇÈÉ (ÓíÊã ÇáßÊÇÈÉ İæŞ Çáãáİ ÅĞÇ ßÇä ãæÌæÏğÇ)
    if (MyFile.is_open()) { // ÇáÊÃßÏ ãä Ãä ÇáİÊÍ äÌÍ
        string DataLine; // ÓáÓáÉ áÊÎÒíä ßá ÓØÑ ãä ÈíÇäÇÊ ÇáÚãáÇÁ
        for (sClient C : vClients) { // ÇáÚãá Úáì ßá Úãíá İí ÇáŞÇÆãÉ
            if (!C.MarkForDelete) { // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚãíá áíÓ ãÚáãğÇ ááÍĞİ
                DataLine = ConvertRecordToLine(C); // ÊÍæíá ÈíÇäÇÊ ÇáÚãíá Åáì ÓáÓáÉ äÕíÉ
                MyFile << DataLine << endl; // ßÊÇÈÉ ÇáÓØÑ Åáì Çáãáİ
            }
        }
        MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáßÊÇÈÉ
    }
    return vClients; // ÅÑÌÇÚ ÇáŞÇÆãÉ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÚãáíÉ
}

// ÏÇáÉ áÊÍÏíË ÈíÇäÇÊ Úãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
    sClient Client; // ÅäÔÇÁ ßÇÆä Úãíá áÊÎÒíä ÈíÇäÇÊ ÇáÚãíá ÇáãØáæÈ ÇáÊÍÏíË Úáíå
    char Answer = 'n'; // ãÊÛíÑ áÊÎÒíä ÅÌÇÈÉ ÇáãÓÊÎÏã

    if (FindClientByAccountNumber(AccountNumber, vClients, Client)) { // ÇáÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
        PrintClientCard(Client); // ØÈÇÚÉ ÈíÇäÇÊ ÇáÚãíá
        cout << "\n\nAre you sure you want to update this client? y/n ? ";
        cin >> Answer; // ÇÓÊŞÈÇá ÅÌÇÈÉ ÇáãÓÊÎÏã

        if (Answer == 'y' || Answer == 'Y') { // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáãÓÊÎÏã ãæÇİŞ Úáì ÇáÊÍÏíË
            for (sClient& C : vClients) { // ÇáÚãá Úáì ßá Úãíá İí ÇáŞÇÆãÉ ÈÍËğÇ Úä ÇáÚãíá ÇáãØáæÈ ÇáÊÍÏíË Úáíå
                if (C.AccountNumber == AccountNumber) { // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãØÇÈŞğÇ
                    C = ChangeClientRecord(AccountNumber); // ÊÍÏíË ÈíÇäÇÊ ÇáÚãíá
                    break; // ÇáÎÑæÌ ãä ÇáÍáŞÉ ÈãÌÑÏ ÇáÚËæÑ Úáì ÇáÚãíá ÇáãØáæÈ
                }
            }
            SaveClientsDataToFile(ClientsFileName, vClients); // ÍİÙ ÇáÈíÇäÇÊ ÇáãÍÏËÉ İí Çáãáİ
            cout << "\n\nClient Updated Successfully.";
            return true; // ÅÑÌÇÚ ŞíãÉ ÕÍíÍÉ ááÅÔÇÑÉ Åáì äÌÇÍ ÇáÊÍÏíË
        }
    }
    else {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!"; // ÅÔÚÇÑ ÈÚÏã ÇáÚËæÑ Úáì ÇáÚãíá
        return false; // ÅÑÌÇÚ ŞíãÉ ÎÇØÆÉ ááÅÔÇÑÉ Åáì İÔá ÇáÚËæÑ Úáì ÇáÚãíá
    }
}

// ÏÇáÉ áŞÑÇÁÉ ÑŞã ÇáÍÓÇÈ ãä ÇáãÓÊÎÏã
string ReadClientAccountNumber() {
    string AccountNumber = ""; // ÊåíÆÉ ãÊÛíÑ ÑŞã ÇáÍÓÇÈ
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber; // ÇÓÊŞÈÇá ÑŞã ÇáÍÓÇÈ ãä ÇáãÓÊÎÏã
    return AccountNumber; // ÅÑÌÇÚ ÑŞã ÇáÍÓÇÈ
}

// ÇáÏÇáÉ ÇáÑÆíÓíÉ
int main() {
    // ÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä Çáãáİ
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    // ÇÓÊŞÈÇá ÑŞã ÇáÍÓÇÈ ãä ÇáãÓÊÎÏã
    string AccountNumber = ReadClientAccountNumber();

    // ÊÍÏíË ÈíÇäÇÊ ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
    UpdateClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");
    return 0;
}
