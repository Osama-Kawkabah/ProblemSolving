#pragma once // ���� �� ��� ����� ��� ����� ��� ����� ��� �� �� �����

#include <iostream> // ����� ������� �������� ������ ������ ��������
#include <string> // ����� ������� �������� ������
#include "clsPerson.h" // ����� ��� ����� ���� clsPerson
#include "clsString.h" // ����� ��� ����� ���� clsString
#include <vector> // ����� ������� �������� ������� �����������
#include <fstream> // ����� ������� �������� �������

string FILE_NAME = "Clients.txt";

using namespace std; // ������� ���� ������� std ����� ����� std:: ��� �� ���

class clsBankClient : public clsPerson // ����� �� clsBankClient ������� �� clsPerson
{
private:

    enum enMode { EmptyMode = 0, UpdateMode = 1 }; // ����� ����� ���� ������� ������� ��� ��� ������
    enMode _Mode; // ����� ��� ����� ������ ��� ������
    string _AccountNumber; // ��� ���� ������
    string _PinCode; // ���� ������ ����� ������
    float _AccountBalance; // ���� ���� ������

    // ���� ���� ����� ��� ���� ��� ���� clsBankClient
    static clsBankClient _ConvertLinetoClientObject(string Line, string Seperator = "#//#")
    {
        vector<string> vClientData; // ����� ������ ������ ������
        vClientData = clsString::Split(Line, Seperator); // ����� ���� ��� ����� �������� ������ ������

        // ����� ������ ���� clsBankClient ��������� �������
        return clsBankClient(
            enMode::UpdateMode,
            vClientData[0],
            vClientData[1],
            vClientData[2],
            vClientData[3],
            vClientData[4],
            vClientData[5],
            stod(vClientData[6]) // stod ����� �� ��� double
        );
    }

    // ���� ���� ������ ��� ���� clsBankClient ����
    static clsBankClient _GetEmptyClientObject()
    {
        return clsBankClient(
            enMode::EmptyMode,
            "", "", "", "", "", "", 0); // ����� ������ ���� clsBankClient ����
    }

public:

    clsBankClient(enMode Mode, string FirstName, string LastName,
        string Email, string Phone, string AccountNumber, string PinCode,
        float AccountBalance) :
        clsPerson(FirstName, LastName, Email, Phone) // ������� ���� ������� clsPerson

    {
        _Mode = Mode; // ����� ��� ������
        _AccountNumber = AccountNumber; // ����� ��� ������
        _PinCode = PinCode; // ����� ���� ������
        _AccountBalance = AccountBalance; // ����� ���� ������

    }

    bool IsEmpty() // ���� ������ ��� ��� ��� ������ ������
    {
        return (_Mode == enMode::EmptyMode); // ����� true ��� ��� ������ ������
    }

    string AccountNumber() // ���� ������ ��� ��� ������
    {
        return _AccountNumber; // ����� ��� ������
    }

    void SetPinCode(string PinCode) // ���� ������ ���� ������
    {
        _PinCode = PinCode; // ����� ���� ������
    }

    string GetPinCode() // ���� ������ ��� ���� ������
    {
        return _PinCode; // ����� ���� ������
    }

    // ����� ����� ������ ���� �� ������ ����� �������� ���� �����
    __declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;

    void SetAccountBalance(float AccountBalance) // ���� ������ ���� ������
    {
        _AccountBalance = AccountBalance; // ����� ���� ������
    }

    float GetAccountBalance() // ���� ������ ��� ���� ������
    {
        return _AccountBalance; // ����� ���� ������
    }

    // ����� ����� ������ ���� �� ������ ���� ������� ���� �����
    __declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance;

    void Print() // ���� ������ ������ ������
    {
        cout << "\nClient Card:"; // ����� ����� "����� ������"
        cout << "\n___________________"; // ����� �� ����
        cout << "\nFirstName   : " << FirstName; // ����� ����� �����
        cout << "\nLastName    : " << LastName; // ����� ����� ������
        cout << "\nFull Name   : " << FullName(); // ����� ����� ������
        cout << "\nEmail       : " << Email; // ����� ������ ����������
        cout << "\nPhone       : " << Phone; // ����� ��� ������
        cout << "\nAcc. Number : " << _AccountNumber; // ����� ��� ������
        cout << "\nPassword    : " << _PinCode; // ����� ���� ������
        cout << "\nBalance     : " << _AccountBalance; // ����� ���� ������
        cout << "\n___________________\n"; // ����� �� ����

    }

    // ���� ������� ����� �� ������ �������� ��� ������
    static clsBankClient Find(string AccountNumber)
    {
        fstream MyFile;
        MyFile.open(FILE_NAME, ios::in);//read Mode // ��� ����� �������

        if (MyFile.is_open()) // ������ ��� ��� �� ��� ����� �����
        {
            string Line; // ����� ������ �� ��� �� �����
            while (getline(MyFile, Line)) // ����� ����� ����� ����
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ����� ����� ��� ���� clsBankClient
                if (Client.AccountNumber() == AccountNumber) // ������ ��� ��� ��� ��� ������ �������
                {
                    MyFile.close(); // ����� ����� ��� ������ ��� ������
                    return Client; // ����� ������ �������
                }

            }

            MyFile.close(); // ����� ����� ��� �� ��� ������ ��� ������

        }

        return _GetEmptyClientObject(); // ����� ���� clsBankClient ���� ��� �� ��� ������ ��� ������
    }

    // ���� ������� ����� �� ������ �������� ��� ������ ����� ������
    static clsBankClient Find(string AccountNumber, string PinCode)
    {
        fstream MyFile;
        MyFile.open(FILE_NAME, ios::in);//read Mode // ��� ����� �������

        if (MyFile.is_open()) // ������ ��� ��� �� ��� ����� �����
        {
            string Line; // ����� ������ �� ��� �� �����
            while (getline(MyFile, Line)) // ����� ����� ����� ����
            {
                clsBankClient Client = _ConvertLinetoClientObject(Line); // ����� ����� ��� ���� clsBankClient
                if (Client.AccountNumber() == AccountNumber && Client.PinCode == PinCode) // ������ ��� ��� ��� ��� ������ ����� ������ �������
                {
                    MyFile.close(); // ����� ����� ��� ������ ��� ������
                    return Client; // ����� ������ �������
                }

            }

            MyFile.close(); // ����� ����� ��� �� ��� ������ ��� ������

        }

        return _GetEmptyClientObject(); // ����� ���� clsBankClient ���� ��� �� ��� ������ ��� ������
    }

    // ���� ������ ��� ��� ��� ������ ������� �������� ��� ������
    static bool IsClientExist(string AccountNumber)
    {
        clsBankClient Client1 = clsBankClient::Find(AccountNumber); // ����� �� ������ �������� ��� ������
        return (!Client1.IsEmpty()); // ����� ����� ������ �� ���� ������
    }
};