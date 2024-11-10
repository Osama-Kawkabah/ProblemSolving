#pragma once // ÊÖãä Ãä íÊã ÊÖãíä åĞÇ Çáãáİ ãÑÉ æÇÍÏÉ İŞØ İí ßá ÊÑÌãÉ

#include <iostream> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ áÅÏÎÇá æÅÎÑÇÌ ÇáÈíÇäÇÊ
#include <string> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááäÕæÕ
#include "clsPerson.h" // ÊÖãíä ãáİ ÊÚÑíİ ÇáÕİ clsPerson
#include "clsString.h" // ÊÖãíä ãáİ ÊÚÑíİ ÇáÕİ clsString
#include <vector> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááŞæÇÆã ÇáÏíäÇãíßíÉ
#include <fstream> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ ááãáİÇÊ

string FILE_NAME = "Clients.txt";

using namespace std; // ÇÓÊÎÏÇã İÖÇÁ ÇáÃÓãÇÁ std áÊÌäÈ ßÊÇÈÉ std:: ŞÈá ßá ÇÓã

class clsBankClient : public clsPerson // ÊÚÑíİ Õİ clsBankClient æÇáãÔÊŞ ãä clsPerson
{
private:

    enum enMode { EmptyMode = 0, UpdateMode = 1 }; // ÊÚÑíİ ÊÚÏÇÏ íÓãÍ ÈÇáæÕæá ÇáãÈÇÔÑ Åáì æÖÚ ÇáßÇÆä
    enMode _Mode; // ãÊÛíÑ ÎÇÕ ÈÇáÕİ áÊÍÏíÏ æÖÚ ÇáßÇÆä
    string _AccountNumber; // ÑŞã ÍÓÇÈ ÇáÚãíá
    string _PinCode; // ßáãÉ ÇáãÑæÑ áÍÓÇÈ ÇáÚãíá
    float _AccountBalance; // ÑÕíÏ ÍÓÇÈ ÇáÚãíá

    // ÏÇáÉ ÎÇÕÉ ÊÍæíá ÓØÑ ÇáäÕ Åáì ßÇÆä clsBankClient
    static clsBankClient _ConvertLinetoClientObject(string Line, string Seperator = "#//#")
    {
        vector<string> vClientData; // ŞÇÆãÉ áÊÎÒíä ÈíÇäÇÊ ÇáÚãíá
        vClientData = clsString::Split(Line, Seperator); // ÊŞÓíã ÇáäÕ Åáì ÃÌÒÇÁ ÈÇÓÊÎÏÇã ÇáİÇÕá ÇáãÍÏÏ

        // ÅäÔÇÁ æÅÑÌÇÚ ßÇÆä clsBankClient ÈÇáÈíÇäÇÊ ÇáãÍÏÏÉ
        return clsBankClient(
            enMode::UpdateMode,
            vClientData[0],
            vClientData[1],
            vClientData[2],
            vClientData[3],
            vClientData[4],
            vClientData[5],
            stod(vClientData[6]) // stod ÊÍæíá äÕ Åáì double
        );
    }

    // ÏÇáÉ ÎÇÕÉ ááÍÕæá Úáì ßÇÆä clsBankClient İÇÑÛ
    static clsBankClient _GetEmptyClientObject()
    {
        return clsBankClient(
            enMode::EmptyMode,
            "", "", "", "", "", "", 0); // ÅäÔÇÁ æÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ
    }

public:

    clsBankClient(enMode Mode, string FirstName, string LastName,
        string Email, string Phone, string AccountNumber, string PinCode,
        float AccountBalance) :
        clsPerson(FirstName, LastName, Email, Phone) // ÇÓÊÏÚÇÁ ÈäÇÁ ÇáŞÇÚÏÉ clsPerson

    {
        _Mode = Mode; // ÊÚííä æÖÚ ÇáßÇÆä
        _AccountNumber = AccountNumber; // ÊÚííä ÑŞã ÇáÍÓÇÈ
        _PinCode = PinCode; // ÊÚííä ßáãÉ ÇáãÑæÑ
        _AccountBalance = AccountBalance; // ÊÚííä ÑÕíÏ ÇáÍÓÇÈ

    }

    bool IsEmpty() // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáßÇÆä İÇÑÛğÇ
    {
        return (_Mode == enMode::EmptyMode); // ÅÑÌÇÚ true ÅĞÇ ßÇä ÇáßÇÆä İÇÑÛğÇ
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

    // ÎÇÕíÉ áßáãÉ ÇáãÑæÑ Êãßä ãä ÇáæÕæá ÅáíåÇ æÊÚííäåÇ ÈÔßá ãÈÇÔÑ
    __declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;

    void SetAccountBalance(float AccountBalance) // ÏÇáÉ áÊÚííä ÑÕíÏ ÇáÍÓÇÈ
    {
        _AccountBalance = AccountBalance; // ÊÚííä ÑÕíÏ ÇáÍÓÇÈ
    }

    float GetAccountBalance() // ÏÇáÉ ááÍÕæá Úáì ÑÕíÏ ÇáÍÓÇÈ
    {
        return _AccountBalance; // ÅÑÌÇÚ ÑÕíÏ ÇáÍÓÇÈ
    }

    // ÎÇÕíÉ áÑÕíÏ ÇáÍÓÇÈ Êãßä ãä ÇáæÕæá Åáíå æÊÚííäå ÈÔßá ãÈÇÔÑ
    __declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance;

    void Print() // ÏÇáÉ áØÈÇÚÉ ÈíÇäÇÊ ÇáÚãíá
    {
        cout << "\nClient Card:"; // ØÈÇÚÉ ÚäæÇä "ÈØÇŞÉ ÇáÚãíá"
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

    // ÏÇáÉ ÇÓÊÚáÇã ááÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
    static clsBankClient Find(string AccountNumber)
    {
        fstream MyFile;
        MyFile.open(FILE_NAME, ios::in);//read Mode // İÊÍ Çáãáİ ááŞÑÇÁÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {
            string Line; // ãÊÛíÑ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
            while (getline(MyFile, Line)) // ŞÑÇÁÉ Çáãáİ ÓØÑğÇ ÈÓØÑ
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ÊÍæíá ÇáÓØÑ Åáì ßÇÆä clsBankClient
                if (Client.AccountNumber() == AccountNumber) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãØÇÈŞğÇ
                {
                    MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÚËæÑ Úáì ÇáÚãíá
                    return Client; // ÅÑÌÇÚ ÇáÚãíá ÇáãØÇÈŞ
                }

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚãíá

        }

        return _GetEmptyClientObject(); // ÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚãíá
    }

    // ÏÇáÉ ÇÓÊÚáÇã ááÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ æßáãÉ ÇáãÑæÑ
    static clsBankClient Find(string AccountNumber, string PinCode)
    {
        fstream MyFile;
        MyFile.open(FILE_NAME, ios::in);//read Mode // İÊÍ Çáãáİ ááŞÑÇÁÉ

        if (MyFile.is_open()) // ÇáÊÍŞŞ ããÇ ÅĞÇ Êã İÊÍ Çáãáİ ÈäÌÇÍ
        {
            string Line; // ãÊÛíÑ áÊÎÒíä ßá ÓØÑ ãä Çáãáİ
            while (getline(MyFile, Line)) // ŞÑÇÁÉ Çáãáİ ÓØÑğÇ ÈÓØÑ
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ÊÍæíá ÇáÓØÑ Åáì ßÇÆä clsBankClient
                if (Client.AccountNumber() == AccountNumber && Client.PinCode == PinCode) // ÇáÊÍŞŞ ããÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ æßáãÉ ÇáãÑæÑ ãØÇÈŞíä
                {
                    MyFile.close(); // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÚËæÑ Úáì ÇáÚãíá
                    return Client; // ÅÑÌÇÚ ÇáÚãíá ÇáãØÇÈŞ
                }

            }

            MyFile.close(); // ÅÛáÇŞ Çáãáİ ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚãíá

        }

        return _GetEmptyClientObject(); // ÅÑÌÇÚ ßÇÆä clsBankClient İÇÑÛ ÅĞÇ áã íÊã ÇáÚËæÑ Úáì ÇáÚãíá
    }

    // ÏÇáÉ ááÊÍŞŞ ããÇ ÅĞÇ ßÇä ÇáÚãíá ãæÌæÏğÇ ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
    static bool IsClientExist(string AccountNumber)
    {
        clsBankClient Client1 = clsBankClient::Find(AccountNumber); // ÇáÈÍË Úä ÇáÚãíá ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ
        return (!Client1.IsEmpty()); // ÅÑÌÇÚ äÊíÌÉ ÇáÊÍŞŞ ãä æÌæÏ ÇáÚãíá
    }
};
