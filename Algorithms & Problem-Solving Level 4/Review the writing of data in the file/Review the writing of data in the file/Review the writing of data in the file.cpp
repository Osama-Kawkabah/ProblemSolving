#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
string ClientsFileName = "Client.txt";

//-------------------------------------------------
// ����� �� Client ��� �� ������#//#
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
// ����� �� #//# ��� ������ Client
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
//    // ����� ����� ������ ������� ��������
//    vector<string> vString;
//
//    // ����� ������ ���� ������� �� �������
//    short pos = 0;
//
//    // ����� ������ ������ �������
//    string sWord;
//
//    // ������ ���� while ���� ������� ������ �������� ������� �������
//    while ((pos = S1.find(Delim)) != string::npos) {
//        // ������� ����� �� ������� �� ����� ������� ��� �������
//        sWord = S1.substr(0, pos);
//
//        // ������ ��� ��� ���� ������ ��� ����� ��� ������� ��� �������
//        if (sWord != "") {
//            vString.push_back(sWord);
//        }
//
//        // ��� ����� ���� �� ���� �� �������
//        S1.erase(0, pos + Delim.length());
//    }
//
//    // ��� �������� �� �����ɡ �� ���� ���� ���� ���� ���� ����ɡ ��� ����� ������ ��� ���� �������� ��� ���� ��� �����
//    if (S1 != "") {
//        vString.push_back(S1);
//    }
//
//    // ����� ������� �������� ������� ��������
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
//    Client.AccountBalance = stod(vClientData[4]); // ����� ������� ��� double
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
// ��� �������� �� ��� ���
//-------------------------------------------------
//// ����� ���� ������
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ���� ������ ������ ���� ����
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
//// ���� ������ ������ ������ ��� ����� ����
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
//// ���� ���� ������� �� ���
//void SaveLineInFile(string ClientFileName, string S1) {
//    // ����� ����� �� ��� fstream ���� �����
//    fstream File;
//
//    // ��� ����� "Client.txt" �� ��� ������� (ios::out)
//    File.open(ClientFileName, ios::out | ios::app);
//
//    // ������ �� ��� ����� �����
//    if (File.is_open()) {
//        // ����� ������� S1 ��� �����
//        File << S1 << endl;
//    }
//
//    File.close(); // ����� ����� ��� �������� �� �������
//
//}
//
//void WantAddLineInFile(string ClientFileName) {
//    char addFill = 'Y';
//
//    do {
//        system("cls"); // ����� ������
//        cout << "\nPlease Enter Client Data:\n\n";
//        sClient Client;
//        Client = ReadNewClient(); // ����� ������ ������
//
//        string TheLine = ConvertRecordToLine(Client); // ����� ������ ������ ��� ����� ����
//        SaveLineInFile(ClientFileName, TheLine); // ��� ������� �� ���
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
// ��� �������� �� ��� ���
//-------------------------------------------------
// ����� ���� sClient ������ ������ �������
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ���� ������ ����� ���� �������� ���� ���� ������ ������ ��������
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
//// ���� ������ ��� ���� �� ����� ���� ��� ���� sClient
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
//// ���� ������ ������ ������� �� ��� ���
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
//// ���� ������ ��� ���� ����
//void PrintClientRecord(sClient Client) {
//    cout << "| " << setw(15) << left << Client.AccountNumber;
//    cout << "| " << setw(10) << left << Client.PinCode;
//    cout << "| " << setw(40) << left << Client.Name;
//    cout << "| " << setw(12) << left << Client.Phone;
//    cout << "| " << setw(11) << left << Client.AccountBalance;
//    cout << "|";
//}
//
//// ���� ������ ���� ������ �������
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
//// ������ ��������
//int main() {
//
//    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName); // ����� ������ ������� �� �����
//    PrintAllClientsData(vClients); // ����� ������ �������
//    system("pause>0");
//    return 0;
//}

//-------------------------------------------------
// ��� �������� �� ��� ��� ��� ��� ������
//-------------------------------------------------
//// ����� ������ sClient ������ ������ �������
//struct sClient {
//    string AccountNumber;
//    string PinCode;
//    string Name;
//    string Phone;
//    double AccountBalance;
//};
//
//// ���� ������ ����� ���� ��� ����� ����� ��� ���� ����
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
//// ���� ������ ��� ��� ��� ��� sClient
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
//// ���� ������ ������ ������� �� ���
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
//// ���� ������ ������ ������
//void PrintClientCard(sClient Client) {
//    cout << "\nThe following are the client details:\n";
//    cout << "\nAccount Number: " << Client.AccountNumber;
//    cout << "\nPin Code      : " << Client.PinCode;
//    cout << "\nName          : " << Client.Name;
//    cout << "\nPhone         : " << Client.Phone;
//    cout << "\nAccount Balance: " << Client.AccountBalance;
//}
//
//// ���� ����� �� ���� ���� �����
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
//// ���� ������ ��� ���� ������ �� ��������
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
//    // ������ ��� ��� ��� ������ ������� �������� ��� �����
//    if (FindClientByAccountNumber(AccountNumber, Client)) {
//        // ��� �� ������ ��� ������ �� ������ �������
//        PrintClientCard(Client);
//    }
//    else {
//        // ��� �� ��� ������ ��� ������ ��� ����� ��� ������ ��� �����
//        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
//    }
//
//    system("pause>0");
//    return 0;
//}

//-------------------------------------------------
// ��� �������� �� ��� ��� ��� ��� ������
//-------------------------------------------------
//// ���� ���� ������ ������
//struct sClient {
//    string AccountNumber; // ��� ������
//    string PinCode; // ��� ������
//    string Name; // ��� ������
//    string Phone; // ��� ������
//    double AccountBalance; // ���� ������
//    bool MarkForDelete = false; // ����� ����� �����
//};
//
//// ���� ���� ������ ����� ���� ��� ��� ����� �������� ���� ����
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
//// ���� ����� ����� ���� ��� ������ ����
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
//// ���� ����� ������ ���� ��� ����� ����
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
//// ���� ������ ������ ������� �� ���
//vector<sClient> LoadClientsDataFromFile(string FileName) {
//    vector<sClient> vClients;
//    fstream MyFile;
//    MyFile.open(FileName, ios::in); // ��� �������
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
//// ���� ������ ������ ������ ��� ������
//void PrintClientCard(sClient Client) {
//    cout << "\nThe following are the client details:\n";
//    cout << "\nAccout Number: " << Client.AccountNumber;
//    cout << "\nPin Code     : " << Client.PinCode;
//    cout << "\nName         : " << Client.Name;
//    cout << "\nPhone        : " << Client.Phone;
//    cout << "\nAccount Balance: " << Client.AccountBalance;
//}
//
//// ���� ����� �� ���� �������� ��� ������
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
//// ���� ���� ����� ���� ���� �������� ��� ������
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
//// ���� ���� ������ ������� �� ���
//vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {
//    fstream MyFile;
//    MyFile.open(FileName, ios::out); // ��� ������� (���� ������� ��� ����� ��� ��� �������)
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
//// ���� ���� ���� �������� ��� ������
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
//// ���� ������ ��� ������ �� ��������
//string ReadClientAccountNumber() {
//    string AccountNumber = "";
//    cout << "\nPlease enter Account Number: ";
//    cin >> AccountNumber;
//    return AccountNumber;
//}
//
//// ������ ��������
//int main() {
//    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
//    string AccountNumber = ReadClientAccountNumber();
//    DeleteClientByAccountNumber(AccountNumber, vClients);
//    system("pause>0");
//    return 0;
//}


//-------------------------------------------------
// ����� �������� �� ��� ��� ��� ��� ������
//-------------------------------------------------

// ����� ���� ������ ������ ������
struct sClient {
    string AccountNumber; // ��� ������
    string PinCode; // ��� ������
    string Name; // ��� ������
    string Phone; // ��� ������
    double AccountBalance; // ���� ������
    bool MarkForDelete = false; // ����� ������� �� ��� ��� ������ ������� �� �� (��������� ��� �����)
};

// ���� ������ ����� ���� ��� ����� �������� ���� ����
vector<string> SplitString(string S1, string Delim) {
    vector<string> vString; // ����� ������ ������� �������
    short pos = 0; // ������� ������ ���� ������
    string sWord; // ����� ������ �� ���

    // ����� �� ����� ������� ��� �����
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // ������� �����
        if (sWord != "") { // ������ �� �� ����� ��� ����
            vString.push_back(sWord); // ����� ����� ��� �������
        }
        S1.erase(0, pos + Delim.length()); // ��� ����� �������� �� �������
    }

    if (S1 != "") { // ������ �� ���� ��� ��� �� ��� ������� ���
        vString.push_back(S1); // ����� ����� ������ ��� �������
    }

    return vString; // ����� ������� �������
}

// ���� ������ ����� ���� ��� ������ ����
sClient ConvertLineToRecord(string Line, string Seperator = "#//#") {
    sClient Client;
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator); // ����� ������� ��� ����� �������� ������ ������
    Client.AccountNumber = vClientData[0]; // ����� ��� ������
    Client.PinCode = vClientData[1]; // ����� ��� ������
    Client.Name = vClientData[2]; // ����� ��� ������
    Client.Phone = vClientData[3]; // ����� ��� ������
    Client.AccountBalance = stod(vClientData[4]); // ����� ����� ������ ��� double �������
    return Client; // ����� ������ ������
}

// ���� ������ ������ ���� ��� ����� ����
string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
    string stClientRecord = ""; // ����� ������ ������ ������
    stClientRecord += Client.AccountNumber + Seperator; // ����� ��� ������ �� ������
    stClientRecord += Client.PinCode + Seperator; // ����� ��� ������ �� ������
    stClientRecord += Client.Name + Seperator; // ����� ��� ������ �� ������
    stClientRecord += Client.Phone + Seperator; // ����� ��� ������ �� ������
    stClientRecord += to_string(Client.AccountBalance); // ����� ������ ��� ����� ���� ��������
    return stClientRecord; // ����� ����� ������ ������
}

// ���� ������ ������ ������� �� ���
vector<sClient> LoadClientsDataFromFile(string FileName) {
    vector<sClient> vClients; // ����� ������ ������ �������
    fstream MyFile; // ���� ���� �����
    MyFile.open(FileName, ios::in); // ��� ����� �� ��� �������
    if (MyFile.is_open()) { // ������ �� �� ����� ���
        string Line; // ����� ������ �� ��� �� �����
        sClient Client; // ���� ������ ������ �� ����
        while (getline(MyFile, Line)) { // ����� �������� ����� ����
            Client = ConvertLineToRecord(Line); // ����� ����� ��� ������ ����
            vClients.push_back(Client); // ����� ������ ������ ��� �������
        }
        MyFile.close(); // ����� ����� ��� �������� �� �������
    }
    return vClients; // ����� ����� ������ �������
}

// ���� ������ ������ ������
void PrintClientCard(sClient Client) {
    cout << "\nThe following are the client details:\n";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

// ���� ����� �� ���� �������� ��� ������
bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client) {
    for (sClient C : vClients) { // ����� ��� �� ���� �� �������
        if (C.AccountNumber == AccountNumber) { // ������ ��� ��� ��� ��� ������ �������
            Client = C; // ��� ��� ������ ������ǡ �� ������ ��� ������� ������ ������� �����
            return true; // ����� ���� ����� ������� ��� ������ ��� ������
        }
    }
    return false; // ����� ���� ����� ������� ��� ��� ������ ��� ������
}

// ���� ������ ������ ������
sClient ChangeClientRecord(string AccountNumber) {
    sClient Client; // ����� ���� ���� ����
    Client.AccountNumber = AccountNumber; // ����� ��� ������

    // ������� �������� ������� �� ��������
    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode); // ������� ��� ������ �� ������ �������� �������
    cout << "Enter Name? ";
    getline(cin, Client.Name); // ������� ��� ������
    cout << "Enter Phone? ";
    getline(cin, Client.Phone); // ������� ��� ������
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance; // ������� ���� ������

    return Client; // ����� ������ ��� ����� ��������
}
// ���� ���� ������ ������� �� ���
vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {
    fstream MyFile; // ���� ���� �����
    MyFile.open(FileName, ios::out); // ��� ����� �� ��� ������� (���� ������� ��� ����� ��� ��� �������)
    if (MyFile.is_open()) { // ������ �� �� ����� ���
        string DataLine; // ����� ������ �� ��� �� ������ �������
        for (sClient C : vClients) { // ����� ��� �� ���� �� �������
            if (!C.MarkForDelete) { // ������ ��� ��� ��� ������ ��� ������ �����
                DataLine = ConvertRecordToLine(C); // ����� ������ ������ ��� ����� ����
                MyFile << DataLine << endl; // ����� ����� ��� �����
            }
        }
        MyFile.close(); // ����� ����� ��� �������
    }
    return vClients; // ����� ������� ��� �������� �� �������
}

// ���� ������ ������ ���� �������� ��� ������
bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
    sClient Client; // ����� ���� ���� ������ ������ ������ ������� ������� ����
    char Answer = 'n'; // ����� ������ ����� ��������

    if (FindClientByAccountNumber(AccountNumber, vClients, Client)) { // ����� �� ������ �������� ��� ������
        PrintClientCard(Client); // ����� ������ ������
        cout << "\n\nAre you sure you want to update this client? y/n ? ";
        cin >> Answer; // ������� ����� ��������

        if (Answer == 'y' || Answer == 'Y') { // ������ ��� ��� ��� �������� ����� ��� �������
            for (sClient& C : vClients) { // ����� ��� �� ���� �� ������� ����� �� ������ ������� ������� ����
                if (C.AccountNumber == AccountNumber) { // ������ ��� ��� ��� ��� ������ �������
                    C = ChangeClientRecord(AccountNumber); // ����� ������ ������
                    break; // ������ �� ������ ����� ������ ��� ������ �������
                }
            }
            SaveClientsDataToFile(ClientsFileName, vClients); // ��� �������� ������� �� �����
            cout << "\n\nClient Updated Successfully.";
            return true; // ����� ���� ����� ������� ��� ���� �������
        }
    }
    else {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!"; // ����� ���� ������ ��� ������
        return false; // ����� ���� ����� ������� ��� ��� ������ ��� ������
    }
}

// ���� ������ ��� ������ �� ��������
string ReadClientAccountNumber() {
    string AccountNumber = ""; // ����� ����� ��� ������
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber; // ������� ��� ������ �� ��������
    return AccountNumber; // ����� ��� ������
}

// ������ ��������
int main() {
    // ����� ������ ������� �� �����
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    // ������� ��� ������ �� ��������
    string AccountNumber = ReadClientAccountNumber();

    // ����� ������ ������ �������� ��� ������
    UpdateClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");
    return 0;
}
