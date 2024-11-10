#include <iostream>
#include "clsPerson.h" // ������� ��� ���� clsPerson
#include "clsBankClient.h" // ������� ��� ���� clsBankClient
#include "clsInputValidate.h" // ������� ��� ���� clsInputValidate

void ReadClientInfo(clsBankClient& Client)
{
    cout << "\nEnter FirstName: "; // ����� �� �������� ����� ����� �����
    Client.FirstName = clsInputValidate::ReadString(); // ��� ����� ����� �����

    cout << "\nEnter LastName: "; // ����� �� �������� ����� ����� ������
    Client.LastName = clsInputValidate::ReadString(); // ��� ����� ����� ������

    cout << "\nEnter Email: "; // ����� �� �������� ����� ������ ����������
    Client.Email = clsInputValidate::ReadString(); // ��� ����� ������ ����������

    cout << "\nEnter Phone: "; // ����� �� �������� ����� ��� ������
    Client.Phone = clsInputValidate::ReadString(); // ��� ����� ��� ������

    cout << "\nEnter PinCode: "; // ����� �� �������� ����� ����� �����
    Client.PinCode = clsInputValidate::ReadString(); // ��� ����� ����� �����

    cout << "\nEnter Account Balance: "; // ����� �� �������� ����� ���� ������
    Client.AccountBalance = clsInputValidate::ReadFloatNumber(); // ��� ����� ���� ������
}

void AddNewClient()
{
    string AccountNumber = ""; // ����� ����� ���� ������ ���� string

    cout << "\nPlease Enter Account Number: "; // ����� �� �������� ����� ��� ������
    AccountNumber = clsInputValidate::ReadString(); // ��� ����� ��� ������
    while (clsBankClient::IsClientExist(AccountNumber)) // ���� ���� �� ��� ��� ��� ������ ������� ������
    {
        system("color 40"); //���  ��� ������� ����
        cout << "\nAccount Number Is Already Used, Choose another one: "; // ����� ����� ��� ��� ������ ������ ������ ������ ������ ��� ����
        AccountNumber = clsInputValidate::ReadString(); // ��� ����� ��� ������ ������
    }

    system("color 7"); //����� ��� ������� ���������

    clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber); // ����� ���� ���� ����� ����� �������� ��� ������ ������

    ReadClientInfo(NewClient); // ������� ������ ������ ������� ������

    clsBankClient::enSaveResults SaveResult; // ����� ����� ������ ����� �����

    SaveResult = NewClient.Save(); // ��� ������ ������� ��� ����� �������

    switch (SaveResult) // ��� ����� ����� �����
    {
    case  clsBankClient::enSaveResults::svSucceeded: // �� ��� ���� �����
    {
        cout << "\nAccount Addeded Successfully :-)\n"; // ����� ��� ������ ��� ������ �����
        NewClient.Print(); // ����� ������� ������
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject: // �� ���� ��� ����� ���� ���� ����
    {
        cout << "\nError account was not saved because it's Empty"; // ����� ��� ������ �� ��� ���� ���� ����
        break;

    }
    case clsBankClient::enSaveResults::svFaildAccountNumberExists: // �� ���� ��� ����� ���� ���� ��� ���� ����
    {
        cout << "\nError account was not saved because account number is used!\n"; // ����� ��� ������ �� ��� ���� ��� ��� ������ ������ ������
        break;
    }
    }
}


int main()

{

    cout << "Add New Clients : ";
    AddNewClient(); // ������� ������ ������ ���� ����
    system("pause>0"); // ����� ������ ����� �������� ��� ������
    return 0;
}
