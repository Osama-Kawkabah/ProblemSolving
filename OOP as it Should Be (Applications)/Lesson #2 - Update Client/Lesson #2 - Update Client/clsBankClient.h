#pragma once // ÊÃßíÏ Úáì Ãä åĞÇ Çáãáİ ÓíÊã ÊÖãíäå ãÑÉ æÇÍÏÉ İŞØ İí ßá ÚãáíÉ ÊÑÌãÉ

#include <iostream> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ áÅÏÎÇá æÅÎÑÇÌ ÇáÈíÇäÇÊ
#include <string> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááäÕæÕ
#include "clsPerson.h" // ÊÖãíä ãáİ ÊÚÑíİ ÇáÕİ clsPerson
#include "clsString.h" // ÊÖãíä ãáİ ÊÚÑíİ ÇáÕİ clsString
#include <vector> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááŞæÇÆã ÇáÏíäÇãíßíÉ
#include <fstream> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááãáİÇÊ

using namespace std; // ÇÓÊÎÏÇã İÖÇÁ ÇáÃÓãÇÁ std áÊÌäÈ ßÊÇÈÉ std:: ŞÈá ßá ÇÓã

class clsBankClient : public clsPerson // ÊÚÑíİ Õİ clsBankClient æÇáãÔÊŞ ãä clsPerson
{
private:

    enum enMode { EmptyMode = 0, UpdateMode = 1 }; // ÊÚÑíİ ÊÚÏÇÏ íÓãÍ ÈÇáæÕæá ÇáãÈÇÔÑ Åáì æÖÚ ÇáßÇÆä
    enMode _Mode; // ãÊÛíÑ ÎÇÕ ÈÇáÕİ áÊÍÏíÏ æÖÚ ÇáßÇÆä
    string _AccountNumber; // ÑŞã ÍÓÇÈ ÇáÚãíá
    string _PinCode; // ßáãÉ ÇáãÑæÑ áÍÓÇÈ ÇáÚãíá
    float _AccountBalance; // ÑÕíÏ ÍÓÇÈ ÇáÚãíá

    // ÏÇáÉ ÎÇÕÉ áÊÍæíá ÓØÑ ÇáäÕ Åáì ßÇÆä clsBankClient
    static clsBankClient _ConvertLinetoClientObject(string Line, string Seperator = "#//#")
    {
        vector<string> vClientData; // ŞÇÆãÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãíá
        vClientData = clsString::Split(Line, Seperator); // ÊŞÓíã ÇáäÕ Åáì ÃÌÒÇÁ ÈÇÓÊÎÏÇã ÇáİÇÕá ÇáãÍÏÏ

        // ÅäÔÇÁ æÅÑÌÇÚ ßÇÆä clsBankClient ÈÇáÈíÇäÇÊ ÇáãÍÏÏÉ
        return clsBankClient(enMode::UpdateMode, vClientData[0], vClientData[1], vClientData[2],
            vClientData[3], vClientData[4], vClientData[5], stod(vClientData[6])); // stod ÊÍæíá äÕ Åáì double

    }

    // ÏÇáÉ ÎÇÕÉ áÊÍæíá ßÇÆä clsBankClient Åáì ÓØÑ äÕí
    static string _ConverClientObjectToLine(clsBankClient Client, string Seperator = "#//#")
    {

        string stClientRecord = ""; // äÕ áÊÎÒíä ÈíÇäÇÊ ÇáÚãíá
        stClientRecord += Client.FirstName + Seperator; // ÅÖÇİÉ ÇÓã ÇáÚãíá ÇáÃæá ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += Client.LastName + Seperator; // ÅÖÇİÉ ÇÓã ÇáÚãíá ÇáÃÎíÑ ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += Client.Email + Seperator; // ÅÖÇİÉ ÇáÈÑíÏ ÇáÅáßÊÑæäí ááÚãíá ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += Client.Phone + Seperator; // ÅÖÇİÉ ÑŞã ÇáåÇÊİ ááÚãíá ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += Client.AccountNumber() + Seperator; // ÅÖÇİÉ ÑŞã ÇáÍÓÇÈ ááÚãíá ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += Client.PinCode + Seperator; // ÅÖÇİÉ ßáãÉ ÇáãÑæÑ ááÚãíá ãÚ ÇáİÇÕá ÇáãÍÏÏ
        stClientRecord += to_string(Client.AccountBalance); // ÅÖÇİÉ ÑÕíÏ ÇáÍÓÇÈ ááÚãíá ãÚ ÇáİÇÕá ÇáãÍÏÏ

        return stClientRecord; // ÅÑÌÇÚ ÇáÓÌá ÇáäÕí ááÚãíá

    }

    // ÏÇáÉ ÎÇÕÉ áÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä Çáãáİ
    static  vector <clsBankClient> _LoadClientsDataFromFile()
    {

        vector <clsBankClient> vClients; // ŞÇÆãÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãáÇÁ

        fstream MyFile;
        MyFile.open("Clients.txt", ios::in);//read Mode // İÊÍ Çáãáİ ááŞÑÇÁÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {

            string Line; // ãÊÛíÑ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
            while (getline(MyFile, Line)) // ŞÑÇÁÉ Çáãáİ ÓØÑğÇ ÈÓØÑ
            {

                clsBankClient Client = _ConvertLinetoClientObject(Line); // ÊÍæíá ÇáÓØÑ Åáì ßÇÆä clsBankClient
                vClients.push_back(Client); // ÅÖÇİÉ ÇáÚãíá Åáì ŞÇÆãÉ ÇáÚãáÇÁ

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáŞÑÇÁÉ

        }

        return vClients; // ÅÑÌÇÚ ŞÇÆãÉ ÇáÚãáÇÁ ÇáãÍãáÉ ãä Çáãáİ

    }

    // ÏÇáÉ ÎÇÕÉ áÍİÙ ÈíÇäÇÊ ÇáÚãáÇÁ İí Çáãáİ
    static void _SaveCleintsDataToFile(vector <clsBankClient> vClients)
    {

        fstream MyFile;
        MyFile.open("Clients.txt", ios::out);//overwrite // İÊÍ Çáãáİ ááßÊÇÈÉ æÇáÊÌÇæÒ İí ÍÇáÉ æÌæÏå

        string DataLine; // ÓáÓáÉ äÕíÉ áÊÎÒíä ßá ÓØÑ ãä ÈíÇäÇÊ ÇáÚãáÇÁ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {

            for (clsBankClient C : vClients) // ÍáŞÉ ááÇäÊŞÇá ÚÈÑ ŞÇÆãÉ ÇáÚãáÇÁ
            {
                DataLine = _ConverClientObjectToLine(C); // ÊÍæíá ßÇÆä ÇáÚãíá Åáì ÓØÑ äÕí
                MyFile << DataLine << endl; // ßÊÇÈÉ ÇáÓØÑ İí Çáãáİ

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáßÊÇÈÉ

        }

    }

    // ÏÇáÉ ÎÇÕÉ áÊÍÏíË ÈíÇäÇÊ ÇáÚãíá İí Çáãáİ
    void _Update()
    {
        vector <clsBankClient> _vClients; // ŞÇÆãÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãáÇÁ
        _vClients = _LoadClientsDataFromFile(); // ÊÍãíá ÈíÇäÇÊ ÇáÚãáÇÁ ãä Çáãáİ

        for (clsBankClient& C : _vClients) // ÍáŞÉ ááÇäÊŞÇá ÚÈÑ ŞÇÆãÉ ÇáÚãáÇÁ
        {
            if (C.AccountNumber() == AccountNumber()) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãÊØÇÈŞğÇ
            {
                C = *this; // ÊÍÏíË ÈíÇäÇÊ ÇáÚãíá
                break; // ÇáÎÑæÌ ãä ÇáÍáŞÉ ÈÚÏ ÇáÊÍÏíË
            }

        }

        _SaveCleintsDataToFile(_vClients); // ÍİÙ ÈíÇäÇÊ ÇáÚãáÇÁ ÇáãÍÏËÉ İí Çáãáİ

    }

    // ÏÇáÉ ÎÇÕÉ áÅÖÇİÉ ÓØÑ ÈíÇäÇÊ ÌÏíÏ Åáì Çáãáİ
    void _AddDataLineToFile(string  stDataLine)
    {
        fstream MyFile;
        MyFile.open("Clients.txt", ios::out | ios::app); // İÊÍ Çáãáİ ááßÊÇÈÉ æÅÖÇİÉ ÈíÇäÇÊ ÌÏíÏÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {

            MyFile << stDataLine << endl; // ßÊÇÈÉ ÇáÓØÑ İí Çáãáİ

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáßÊÇÈÉ
        }

    }

    // ÏÇáÉ ÎÇÕÉ áÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ
    static clsBankClient _GetEmptyClientObject()
    {
        return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0); // ÅäÔÇÁ ßÇÆä İÇÑÛ
    }

public:


    clsBankClient(enMode Mode, string FirstName, string LastName,
        string Email, string Phone, string AccountNumber, string PinCode,
        float AccountBalance) :
        clsPerson(FirstName, LastName, Email, Phone) // ÇÓÊÏÚÇÁ ãõäÔÆ ÇáÕİ ÇáÃÓÇÓí

    {
        _Mode = Mode; // ÊÚííä æÖÚ ÇáßÇÆä
        _AccountNumber = AccountNumber; // ÊÚííä ÑŞã ÇáÍÓÇÈ
        _PinCode = PinCode; // ÊÚííä ßáãÉ ÇáãÑæÑ
        _AccountBalance = AccountBalance; // ÊÚííä ÑÕíÏ ÇáÍÓÇÈ

    }

    bool IsEmpty() // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáßÇÆä İÇÑÛğÇ
    {
        return (_Mode == enMode::EmptyMode); // ÅÑÌÇÚ äÊíÌÉ ÇáÊÍŞŞ
    }


    string AccountNumber() // ÏÇáÉ ááÍÕæá Úáì ÑŞã ÇáÍÓÇÈ
    {
        return _AccountNumber; // ÅÑÌÇÚ ÑŞã ÇáÍÓÇÈ
    }

    void SetPinCode(string PinCode) // ÏÇáÉ áÊÚííä ßáãÉ ÇáãÑæÑ
    {
        _PinCode = PinCode; // ÊÚííä ßáãÉ ÇáãÑæÑ
    }

    string GetPinCode() // ÏÇáÉ ááÍÕæá Úáì ßáãÉ ÇáãÑæÑ
    {
        return _PinCode; // ÅÑÌÇÚ ßáãÉ ÇáãÑæÑ
    }
    __declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode; // ÊÚÑíİ ÎÇÕíÉ áßáãÉ ÇáãÑæÑ

    void SetAccountBalance(float AccountBalance) // ÏÇáÉ áÊÚííä ÑÕíÏ ÇáÍÓÇÈ
    {
        _AccountBalance = AccountBalance; // ÊÚííä ÑÕíÏ ÇáÍÓÇÈ
    }

    float GetAccountBalance() // ÏÇáÉ ááÍÕæá Úáì ÑÕíÏ ÇáÍÓÇÈ
    {
        return _AccountBalance; // ÅÑÌÇÚ ÑÕíÏ ÇáÍÓÇÈ
    }
    __declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance; // ÊÚÑíİ ÎÇÕíÉ áÑÕíÏ ÇáÍÓÇÈ

    void Print() // ÏÇáÉ áØÈÇÚÉ ÈíÇäÇÊ ÇáÚãíá
    {
        cout << "\nClient Card:"; // ØÈÇÚÉ ÈÏÇíÉ ÈØÇŞÉ ÇáÚãíá
        cout << "\n___________________"; // ØÈÇÚÉ ÎØ İÇÕá
        cout << "\nFirstName   : " << FirstName; // ØÈÇÚÉ ÇáÇÓã ÇáÃæá
        cout << "\nLastName    : " << LastName; // ØÈÇÚÉ ÇáÇÓã ÇáÃÎíÑ
        cout << "\nFull Name   : " << FullName(); // ØÈÇÚÉ ÇáÇÓã ÇáßÇãá
        cout << "\nEmail       : " << Email; // ØÈÇÚÉ ÇáÈÑíÏ ÇáÅáßÊÑæäí
        cout << "\nPhone       : " << Phone; // ØÈÇÚÉ ÑŞã ÇáåÇÊİ
        cout << "\nAcc. Number : " << _AccountNumber; // ØÈÇÚÉ ÑŞã ÇáÍÓÇÈ
        cout << "\nPassword    : " << _PinCode; // ØÈÇÚÉ ßáãÉ ÇáãÑæÑ
        cout << "\nBalance     : " << _AccountBalance; // ØÈÇÚÉ ÑÕíÏ ÇáÍÓÇÈ
        cout << "\n___________________\n"; // ØÈÇÚÉ ÎØ İÇÕá

    }

    // ÏÇáÉ ááÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
    static clsBankClient Find(string AccountNumber)
    {


        fstream MyFile;
        MyFile.open("Clients.txt", ios::in);//read Mode // İÊÍ Çáãáİ ááŞÑÇÁÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {
            string Line; // ãÊÛíÑ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
            while (getline(MyFile, Line)) // ŞÑÇÁÉ Çáãáİ ÓØÑğÇ ÈÓØÑ
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ÊÍæíá ÇáÓØÑ Åáì ßÇÆä clsBankClient
                if (Client.AccountNumber() == AccountNumber) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãÊØÇÈŞğÇ
                {
                    MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÈÍË
                    return Client; // ÅÑÌÇÚ ÇáÚãíá ÇáãØÇÈŞ
                }

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÈÍË

        }

        return _GetEmptyClientObject(); // ÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáÚãíá

    }

    // ÏÇáÉ ááÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ æßáãÉ ÇáãÑæÑ
    static clsBankClient Find(string AccountNumber, string PinCode)
    {



        fstream MyFile;
        MyFile.open("Clients.txt", ios::in);//read Mode // İÊÍ Çáãáİ ááŞÑÇÁÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {
            string Line; // ãÊÛíÑ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
            while (getline(MyFile, Line)) // ŞÑÇÁÉ Çáãáİ ÓØÑğÇ ÈÓØÑ
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ÊÍæíá ÇáÓØÑ Åáì ßÇÆä clsBankClient
                if (Client.AccountNumber() == AccountNumber && Client.PinCode == PinCode) // ÇáÊÍŞŞ ãä ãØÇÈŞÉ ÑŞã ÇáÍÓÇÈ æßáãÉ ÇáãÑæÑ
                {
                    MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÈÍË
                    return Client; // ÅÑÌÇÚ ÇáÚãíá ÇáãØÇÈŞ
                }

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÈÍË

        }
        return _GetEmptyClientObject(); // ÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ İí ÍÇáÉ ÚÏã ÇáÚËæÑ Úáì ÇáÚãíá

    }

    // ÊÚÑíİ ÊÚÏÇÏ áäÊÇÆÌ ÍİÙ ÇáÈíÇäÇÊ
    enum enSaveResults { svFaildEmptyObject = 0, svSucceeded = 1 };

    // ÏÇáÉ áÍİÙ ÈíÇäÇÊ ÇáÚãíá İí Çáãáİ
    enSaveResults Save()
    {

        switch (_Mode) // ÇáÊÍŞŞ ãä æÖÚ ÇáßÇÆä
        {
        case enMode::EmptyMode: // İí ÍÇáÉ ßÇä ÇáßÇÆä İÇÑÛğÇ
        {

            return enSaveResults::svFaildEmptyObject; // ÅÑÌÇÚ äÊíÌÉ İÔá ÇáÍİÙ
        }

        case enMode::UpdateMode: // İí ÍÇáÉ ßÇä ÇáßÇÆä ãÍÏËğÇ
        {
            _Update(); // ÊÍÏíË ÈíÇäÇÊ ÇáÚãíá İí Çáãáİ

            return enSaveResults::svSucceeded; // ÅÑÌÇÚ äÊíÌÉ äÌÇÍ ÇáÍİÙ

            break;
        }
        }

    }

    // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚãíá ãæÌæÏğÇ ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
    static bool IsClientExist(string AccountNumber)
    {
        clsBankClient Client1 = clsBankClient::Find(AccountNumber); // ÇáÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
        return (!Client1.IsEmpty()); // ÅÑÌÇÚ äÊíÌÉ ÇáÊÍŞŞ ãä æÌæÏ ÇáÚãíá
    }

};

