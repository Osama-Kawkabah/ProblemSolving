#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

const string ClientsFileName = "Clients.text";
const string UsersFileName = "Users.text";

void ShowMainMenue();
void ShowTransactionsMenue();
void ShowMangeUsersMenue();
void Logout();

struct sUser {
    string NameUser;
    string Password;
    short permissions;
    bool MarkForDelete = false;
};

struct sClient {
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    bool MarkForDelete = false;
};

vector<string> SplitString(string S1, string Delim) {
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position of the delimiters
    while ((pos = S1.find(Delim)) != std::string::npos) {
        sWord = S1.substr(0, pos); // store the word

        if (sWord != "") {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length()); /* erase() until positon and move to next word. */
    }

    if (S1 != "") {
        vString.push_back(S1); // it adds last word of the string.
    }

    return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#") {
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // cast string to double

    return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator = "#//#") {
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

bool ClientExistsByAccountNumber(string AccountNumber, string FileName) {
    vector<sClient> vClients;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sClient Client;

        while (getline(MyFile, Line)) {
            Client = ConvertLinetoRecord(Line);

            if (Client.AccountNumber == AccountNumber) {
                MyFile.close();
                return true;
            }

            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return false;
}

sClient ReadNewClient() {
    sClient Client;

    cout << "Enter Account Number? ";
    // Usage of std::ws will extract all the whitespace characters
    getline(cin >> ws, Client.AccountNumber);

    while (ClientExistsByAccountNumber(Client.AccountNumber, ClientsFileName)) {
        cout << "\nClient with [" << Client.AccountNumber << "] already exists, Enter another Account Number? ";
        getline(cin >> ws, Client.AccountNumber);
    }

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

vector<sClient> LoadClientsDataFromFile(string FileName) {
    vector<sClient> vClients;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sClient Client;

        while (getline(MyFile, Line)) {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

void PrintClientRecordLine(sClient Client) {
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(10) << left << Client.PinCode;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.Phone;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintClientRecordBalanceLine(sClient Client) {
    cout << "| " << setw(15) << left << Client.AccountNumber;
    cout << "| " << setw(40) << left << Client.Name;
    cout << "| " << setw(12) << left << Client.AccountBalance;
}

void ShowAllClientsScreen() {
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(10) << "Pin Code";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Phone";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else
        for (sClient Client : vClients) {
            PrintClientRecordLine(Client);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

void ShowTotalBalances() {
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Accout Number";
    cout << "| " << left << setw(40) << "Client Name";
    cout << "| " << left << setw(12) << "Balance";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    double TotalBalances = 0;

    if (vClients.size() == 0)
        cout << "\t\t\t\tNo Clients Available In the System!";
    else
        for (sClient Client : vClients) {
            PrintClientRecordBalanceLine(Client);
            TotalBalances += Client.AccountBalance;
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "\t\t\t\t\t   Total Balances = " << TotalBalances;
}

void PrintClientCard(sClient Client) {
    cout << "\nThe following are the client details:\n";
    cout << "-----------------------------------";
    cout << "\nAccout Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";
}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client) {
    for (sClient C : vClients) {
        if (C.AccountNumber == AccountNumber) {
            Client = C;
            return true;
        }
    }
    return false;
}

sClient ChangeClientRecord(string AccountNumber) {
    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
    for (sClient& C : vClients) {
        if (C.AccountNumber == AccountNumber) {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients) {
    fstream MyFile;
    MyFile.open(FileName, ios::out); // overwrite
    string DataLine;

    if (MyFile.is_open()) {
        for (sClient C : vClients) {
            if (C.MarkForDelete == false) {
                // we only write records that are not marked for delete.
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }

    return vClients;
}

void AddDataLineToFile(string FileName, string stDataLine) {
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open()) {
        MyFile << stDataLine << endl;
        MyFile.close();
    }
}

void AddNewClient() {
    sClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddNewClients() {
    char AddMore = 'Y';

    do {
        // system("cls");
        cout << "Adding New Client:\n\n";
        AddNewClient();
        cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
}

bool DeleteClientByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client)) {
        PrintClientCard(Client);
        cout << "\n\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y') {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveClientsDataToFile(ClientsFileName, vClients); // Refresh Clients
            vClients = LoadClientsDataFromFile(ClientsFileName);
            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
    }
    else {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient>& vClients) {
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client)) {
        PrintClientCard(Client);
        cout << "\n\nAre you sure you want update this client? y/n ? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y') {
            for (sClient& C : vClients) {
                if (C.AccountNumber == AccountNumber) {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }

            SaveClientsDataToFile(ClientsFileName, vClients);
            cout << "\n\nClient Updated Successfully.";
            return true;
        }
    }
    else {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
        return false;
    }
}

bool DepositBalanceToClientByAccountNumber(string AccountNumber, double Amount, vector<sClient>& vClients) {
    char Answer = 'n';

    cout << "\n\nAre you sure you want perfrom this transaction? y/n ? ";
    cin >> Answer;

    if (Answer == 'y' || Answer == 'Y') {
        for (sClient& C : vClients) {
            if (C.AccountNumber == AccountNumber) {
                C.AccountBalance += Amount;
                SaveClientsDataToFile(ClientsFileName, vClients);
                cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;
                return true;
            }
        }
        return false;
    }
}

string ReadClientAccountNumber() {
    string AccountNumber = "";
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

void ShowDeleteClientScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tDelete Client Screen";
    cout << "\n-----------------------------------\n";
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(AccountNumber, vClients);
}

void ShowUpdateClientScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tUpdate Client Info Screen";
    cout << "\n-----------------------------------\n";
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);
}

void ShowAddNewClientsScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tAdd New Clients Screen";
    cout << "\n-----------------------------------\n";
    AddNewClients();
}

void ShowFindClientScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tFind Client Screen";
    cout << "\n-----------------------------------\n";

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    sClient Client;
    string AccountNumber = ReadClientAccountNumber();

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
        PrintClientCard(Client);
    else
        cout << "\nClient with Account Number[" << AccountNumber << "] is not found!";
}

void ShowDepositScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tDeposit Screen";
    cout << "\n-----------------------------------\n";

    sClient Client;
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    while (!FindClientByAccountNumber(AccountNumber, vClients, Client)) {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }

    PrintClientCard(Client);
    double Amount = 0;

    cout << "\nPlease enter deposit amount? ";
    cin >> Amount;

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount, vClients);
}

void ShowWithdrawScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tWithdraw Screen";
    cout << "\n-----------------------------------\n";

    sClient Client;
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    while (!FindClientByAccountNumber(AccountNumber, vClients, Client)) {
        cout << "\nClient with [" << AccountNumber << "] does not exist.\n";
        AccountNumber = ReadClientAccountNumber();
    }

    PrintClientCard(Client);
    double Amount = 0;

    cout << "\nPlease enter withdraw amount? ";
    cin >> Amount;

    // Validate that the amount does not exceed the balance
    while (Amount > Client.AccountBalance) {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << Client.AccountBalance << endl;
        cout << "Please enter another amount? ";
        cin >> Amount;
    }

    DepositBalanceToClientByAccountNumber(AccountNumber, Amount * -1, vClients);
}

void ShowTotalBalancesScreen() {
    ShowTotalBalances();
}

//-------------ShowAllUsers------------------
sUser ConvertLinetoRecordUsers(string Line, string Seperator = "#//#") {
    sUser User;
    vector<string> vUsertData;

    vUsertData = SplitString(Line, Seperator);

    User.NameUser = vUsertData[0];
    User.Password = vUsertData[1];
    User.permissions = stoi(vUsertData[2]); // cast string to double

    return User;
}

vector<sUser> LoadUserDataFromFile(string FileName) {
    vector<sUser> vUser;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sUser User;

        while (getline(MyFile, Line)) {
            User = ConvertLinetoRecordUsers(Line);
            vUser.push_back(User);
        }

        MyFile.close();
    }

    return vUser;
}

void PrintUserRecordLine(sUser User) {
    cout << "| " << setw(15) << left << User.NameUser;
    cout << "| " << setw(10) << left << User.Password;
    cout << "| " << setw(10) << left << User.permissions;
}

void ShowAllUsersScreen() {
    vector<sUser> vsUser = LoadUserDataFromFile(UsersFileName);

    cout << "\n\t\t\t\t\tUser List (" << vsUser.size() << ") User(s).";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
    cout << "| " << left << setw(15) << "Name User";
    cout << "| " << left << setw(10) << "Password";
    cout << "| " << left << setw(40) << "permissions";
    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;

    if (vsUser.size() == 0)
        cout << "\t\t\t\tNo User Available In the System!";
    else
        for (sUser User : vsUser) {
            PrintUserRecordLine(User);
            cout << endl;
        }

    cout << "\n_______________________________________________________";
    cout << "_________________________________________\n" << endl;
}

//----------------Add-----------------------

string ConvertRecordToLineUser(sUser User, string Seperator = "#//#") {
    string stUserRecord = "";

    stUserRecord += User.NameUser + Seperator;
    stUserRecord += User.Password + Seperator;
    stUserRecord += to_string(User.permissions);

    return stUserRecord;
}

bool UserExistsByAccountNumber(string UserName, string FileName) {
    vector<sUser> vUser;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sUser User;

        while (getline(MyFile, Line)) {
            User = ConvertLinetoRecordUsers(Line);

            if (User.NameUser == UserName) {
                MyFile.close();
                return true;
            }

            vUser.push_back(User);
        }

        MyFile.close();
    }

    return false;
}

bool UserExistsByUserName(string UserName, string FileName) {
    vector<sUser> vUser;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sUser User;

        while (getline(MyFile, Line)) {
            User = ConvertLinetoRecordUsers(Line);

            if (User.NameUser == UserName) {
                MyFile.close();
                return true;
            }

            vUser.push_back(User);
        }

        MyFile.close();
    }

    return false;
}

sUser ReadNewUser() {
    sUser User;

    cout << "Enter User Name? ";
    // Usage of std::ws will extract all the whitespace characters
    getline(cin >> ws, User.NameUser);
    while (UserExistsByUserName(User.NameUser, UsersFileName)) {
        cout << "\nUser with [" << User.NameUser << "] already exists, Enter another User Name? ";
        getline(cin >> ws, User.NameUser);
    }
    cout << "Enter Password? ";
    getline(cin, User.Password);

    cout << "Enter Permissions? ";
    char FullPermissions = 'Y';
    cout << "Do You Want Give Full access? (Y/N) : ";
    cin >> FullPermissions;
    if (FullPermissions == 'Y' || FullPermissions == 'y')
    {
        User.permissions = -1;
    }
   

    return User;
}

void AddNewUser() {
    sUser User;
    User = ReadNewUser();
    AddDataLineToFile(UsersFileName, ConvertRecordToLineUser(User));
}

void AddNewUsers() {
    char AddMore = 'Y';

    do {
        // system("cls");
        cout << "Adding New User:\n\n";
        AddNewUser();
        cout << "\nUser Added Successfully, do you want to add more Users? Y/N? ";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
}

//-------------Delete----------------------
void PrintUserCard(sUser User) {
    cout << "\nThe following are the User details:\n";
    cout << "-----------------------------------";
    cout << "\nName User  : " << User.NameUser;
    cout << "\nPassword   : " << User.Password;
    cout << "\npermissions : " << User.permissions;
    cout << "\n-----------------------------------\n";
}

bool MarkClientForDeleteByAccountNumber(string NameUser, vector<sUser>& vUser) {
    for (sUser& C : vUser) {
        if (C.NameUser == NameUser) {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

vector<sUser> SaveUsersDataToFile(string FileName, vector<sUser> vUser) {
    fstream MyFile;
    MyFile.open(FileName, ios::out); // overwrite
    string DataLine;

    if (MyFile.is_open()) {
        for (sUser Us : vUser) {
            if (Us.MarkForDelete == false) {
                // we only write records that are not marked for delete.
                DataLine = ConvertRecordToLineUser(Us);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }

    return vUser;
}

bool FindUserByUserName(string UserName, vector<sUser> vUsers, sUser& User) {
    for (sUser C : vUsers) {
        if (C.NameUser == UserName) {
            User = C;
            return true;
        }
    }
    return false;
}

bool DeleteClientByAccountNumber(string UseName, vector<sUser>& vUser) {
    sUser User;
    char Answer = 'n';

    if (FindUserByUserName(UseName, vUser, User)) {
        PrintUserCard(User);
        cout << "\n\nAre you sure you want delete this User? y/n ? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y') {
            MarkClientForDeleteByAccountNumber(UseName, vUser);
            SaveUsersDataToFile(UsersFileName, vUser); // Refresh Clients
            vUser = LoadUserDataFromFile(UsersFileName);
            cout << "\n\nUser Deleted Successfully.";
            return true;
        }
    }
    else {
        cout << "\nUser with Account Number (" << UseName << ") is Not Found!";
        return false;
    }
}

vector<sUser> LoadUsersDataFromFile(string FileName) {
    vector<sUser> vUser;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sUser User;

        while (getline(MyFile, Line)) {
            User = ConvertLinetoRecordUsers(Line);
            vUser.push_back(User);
        }

        MyFile.close();
    }

    return vUser;
}

string ReadUsersNameUser() {
    string UserName = "";
    cout << "\nPlease enter User Name? ";
    cin >> UserName;
    return UserName;
}

void ShowDeleteUserScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tDelete User Screen";
    cout << "\n-----------------------------------\n";
    vector<sUser> vUser = LoadUsersDataFromFile(UsersFileName);
    string AccountNumber = ReadUsersNameUser();
    DeleteClientByAccountNumber(AccountNumber, vUser);
}
//---------------Updata----------------------
sUser ChangeUserRecord(string UserName) {
    sUser User;

    User.NameUser = UserName;

    cout << "\n\nEnter Password? ";
    getline(cin >> ws, User.Password);

    cout << "Enter permissions? ";
    cin >> User.permissions;

    return User;
}

bool UpdateUserByUserName(string UserName, vector<sUser>& vUser) {
    sUser User;
    char Answer = 'n';

    if (FindUserByUserName(UserName, vUser, User)) {
        PrintUserCard(User);
        cout << "\n\nAre you sure you want update this User? y/n ? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y') {
            for (sUser& C : vUser) {
                if (C.NameUser == UserName) {
                    C = ChangeUserRecord(UserName);
                    break;
                }
            }

            SaveUsersDataToFile(UsersFileName, vUser);
            cout << "\n\nUser Updated Successfully.";
            return true;
        }
    }
    else {
        cout << "\nUser with Account Number (" << UserName << ") is Not Found!";
        return false;
    }
}

void ShowUpdateUserScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tUpdate User Info Screen";
    cout << "\n-----------------------------------\n";
    vector<sUser> VUser = LoadUsersDataFromFile(UsersFileName);
    string UserName = ReadUsersNameUser();
    UpdateUserByUserName(UserName, VUser);
}
//---------------Find------------------------
void ShowFindUserScreen() {
    cout << "\n-----------------------------------\n";
    cout << "\tFind Client Screen";
    cout << "\n-----------------------------------\n";

    vector<sUser> vUser = LoadUserDataFromFile(UsersFileName);
    sUser User;
    string UserName = ReadUsersNameUser();

    if (FindUserByUserName(UserName, vUser, User))
        PrintUserCard(User);
    else
        cout << "\nUser with Account Number[" << UserName << "] is not found!";
}

//----------------Main-----------------------
enum MangeUsersMenueOptions {
    ListUser = 1,
    AddUser = 2,
    DeleteUser = 3,
    UpdateUser = 4,
    FindUser = 5,
    MainMenue = 6
};

void GoBackToMangeUsersMenue() {
    cout << "\n\nPress any key to go back to Mange Users Menue...";
    system("pause>0");
    ShowMangeUsersMenue();
}

short MangeUsersMenueOption() {
    cout << "Choose what do you want to do? [1 to 6]? ";
    short Choice = 0;
    cin >> Choice;
    return Choice;
}

void PerfromMangeUsersMenueOption(MangeUsersMenueOptions MangeUsersMenueOption) {
    switch (MangeUsersMenueOption) {
    case ListUser: {
        system("cls");
        ShowAllUsersScreen();
        GoBackToMangeUsersMenue();
        break;
    }
    case AddUser: {
        system("cls");
        AddNewUsers();
        GoBackToMangeUsersMenue();
        break;
    }
    case DeleteUser: {
        system("cls");
        ShowDeleteUserScreen();
        GoBackToMangeUsersMenue();
        break;
    }
    case UpdateUser: {
        system("cls");
        ShowUpdateUserScreen();
        GoBackToMangeUsersMenue();
        break;
    }
    case FindUser: {
        system("cls");
        ShowFindUserScreen();
        GoBackToMangeUsersMenue();
        break;
    }
    case MainMenue: {
        ShowMainMenue();
        break;
    }
    }
}
//--------------------------------------------

enum TransactionsMenueOptions {
    eDeposit = 1,
    eWithdraw = 2,
    eShowTotalBalance = 3,
    eShowMainMenue = 4
};

enum MainMenueOptions {
    eListClients = 1,
    eAddNewClient = 2,
    eDeleteClient = 3,
    eUpdateClient = 4,
    eFindClient = 5,
    eShowTransactionsMenue = 6,
    MangeUsers = 7,
    Exit = 8
};

void GoBackToMainMenue() {
    cout << "\n\nPress any key to go back to Main Menue...";
    system("pause>0");
    ShowMainMenue();
}

void GoBackToTransactionsMenue() {
    cout << "\n\nPress any key to go back to Transactions Menue...";
    system("pause>0");
    ShowTransactionsMenue();
}

short ReadTransactionsMenueOption() {
    cout << "Choose what do you want to do? [1 to 4]? ";
    short Choice = 0;
    cin >> Choice;
    return Choice;
}

void PerfromTranactionsMenueOption(TransactionsMenueOptions TransactionMenueOption) {
    switch (TransactionMenueOption) {
    case eDeposit: {
        system("cls");
        ShowDepositScreen();
        GoBackToTransactionsMenue();
        break;
    }
    case eWithdraw: {
        system("cls");
        ShowWithdrawScreen();
        GoBackToTransactionsMenue();
        break;
    }
    case eShowTotalBalance: {
        system("cls");
        ShowTotalBalancesScreen();
        GoBackToTransactionsMenue();
        break;
    }
    case eShowMainMenue: {
        ShowMainMenue();
        break;
    }
    }
}

void ShowTransactionsMenue() {
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tTransactions Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Deposit.\n";
    cout << "\t[2] Withdraw.\n";
    cout << "\t[3] Total Balances.\n";
    cout << "\t[4] Main Menue.\n";
    cout << "===========================================\n";
    PerfromTranactionsMenueOption(static_cast<TransactionsMenueOptions>(ReadTransactionsMenueOption()));
}

void ShowMangeUsersMenue() {
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tMange Users Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] List User.\n";
    cout << "\t[2] Add New User.\n";
    cout << "\t[3] Delete User.\n";
    cout << "\t[4] Update User.\n";
    cout << "\t[5] Find User.\n";
    cout << "\t[6] Main Menue.\n";
    cout << "===========================================\n";
    PerfromMangeUsersMenueOption(static_cast<MangeUsersMenueOptions>(MangeUsersMenueOption()));
}

short ReadMainMenueOption() {
    cout << "Choose what do you want to do? [1 to 7]? ";
    short Choice = 0;
    cin >> Choice;
    return Choice;
}

void PerfromMainMenueOption(MainMenueOptions MainMenueOption) {
    switch (MainMenueOption) {
    case eListClients: {
        system("cls");
        ShowAllClientsScreen();
        GoBackToMainMenue();
        break;
    }
    case eAddNewClient: {
        system("cls");
        ShowAddNewClientsScreen();
        GoBackToMainMenue();
        break;
    }
    case eDeleteClient: {
        system("cls");
        ShowDeleteClientScreen();
        GoBackToMainMenue();
        break;
    }
    case eUpdateClient: {
        system("cls");
        ShowUpdateClientScreen();
        GoBackToMainMenue();
        break;
    }
    case eFindClient: {
        system("cls");
        ShowFindClientScreen();
        GoBackToMainMenue();
        break;
    }
    case eShowTransactionsMenue: {
        system("cls");
        ShowTransactionsMenue();
        break;
    }
    case MangeUsers: {
        system("cls");
        ShowMangeUsersMenue();
        break;
    }
    case Exit: {
        system("cls");
        Logout();
        break;
    }
    }
}

void ShowMainMenue() {
    system("cls");
    cout << "===========================================\n";
    cout << "\t\tMain Menue Screen\n";
    cout << "===========================================\n";
    cout << "\t[1] Show Client List.\n";
    cout << "\t[2] Add New Client.\n";
    cout << "\t[3] Delete Client.\n";
    cout << "\t[4] Update Client Info.\n";
    cout << "\t[5] Find Client.\n";
    cout << "\t[6] Transactions.\n";
    cout << "\t[7] Mange Users.\n";
    cout << "\t[8] Logout.\n";
    cout << "===========================================\n";
    PerfromMainMenueOption(static_cast<MainMenueOptions>(ReadMainMenueOption()));
}

//----------------LogIn--------------------

string CheckUsersNameUser() {
    string UserName = "";
    cout << "\nPlease enter User Name? ";
    cin >> UserName;
    return UserName;
}
string CheckUsersPassword() {
    string Password = "";
    cout << "\nPlease enter Password? ";
    cin >> Password;
    return Password;
}
sUser CheackLinetoUsers(string Line, string Seperator = "#//#") {
    sUser User;
    vector<string> vUsertData;

    vUsertData = SplitString(Line, Seperator);

    User.NameUser = vUsertData[0];
    User.Password = vUsertData[1];

    return User;
}
bool CHeckFindUser(string UserName, string Password, vector<sUser> vUsers) {
    for (sUser Us : vUsers) {
        if (UserName == Us.NameUser && Password == Us.Password) {
            return true;
        }
    }
    return false;
}
vector<sUser> CheckLoadUserDataFromFile(string FileName) {
    vector<sUser> vUser;
    fstream MyFile;

    MyFile.open(FileName, ios::in); // read Mode

    if (MyFile.is_open()) {
        string Line;
        sUser User;

        while (getline(MyFile, Line)) {
            User = CheackLinetoUsers(Line);
            vUser.push_back(User);
        }

        MyFile.close();
    }

    return vUser;
}
void CheckUserNameAndPassword() {

    vector<sUser> vUser = CheckLoadUserDataFromFile(UsersFileName);
    string UserName = CheckUsersNameUser();
    string Password = CheckUsersPassword();

    while (!CHeckFindUser(UserName, Password, vUser)) {

        cout << "\nInvalid UserName/Password!\n";

        cout << "\nPlease enter User Name? ";
        cin >> UserName;
        cout << "\nPlease enter Password? ";
        cin >> Password;
    }
}

void Logout() {
    cout << "===========================================\n";
    cout << "\t\tLogIn Screen\n";
    cout << "===========================================\n";

    CheckUserNameAndPassword();
    ShowMainMenue();
}

int main() {
    Logout();
    system("pause>0");
    return 0;
}
