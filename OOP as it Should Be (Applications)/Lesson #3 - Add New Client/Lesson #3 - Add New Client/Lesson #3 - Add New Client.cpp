#include <iostream>
#include "clsPerson.h" // ÇÓÊÏÚÇÁ ãáİ ÇáÕİ clsPerson
#include "clsBankClient.h" // ÇÓÊÏÚÇÁ ãáİ ÇáÕİ clsBankClient
#include "clsInputValidate.h" // ÇÓÊÏÚÇÁ ãáİ ÇáÕİ clsInputValidate

void ReadClientInfo(clsBankClient& Client)
{
    cout << "\nEnter FirstName: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÇáÇÓã ÇáÃæá
    Client.FirstName = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÇáÇÓã ÇáÃæá

    cout << "\nEnter LastName: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÇáÇÓã ÇáÃÎíÑ
    Client.LastName = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÇáÇÓã ÇáÃÎíÑ

    cout << "\nEnter Email: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÇáÈÑíÏ ÇáÅáßÊÑæäí
    Client.Email = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÇáÈÑíÏ ÇáÅáßÊÑæäí

    cout << "\nEnter Phone: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÑŞã ÇáåÇÊİ
    Client.Phone = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÑŞã ÇáåÇÊİ

    cout << "\nEnter PinCode: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÇáÑŞã ÇáÓÑí
    Client.PinCode = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÇáÑŞã ÇáÓÑí

    cout << "\nEnter Account Balance: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÑÕíÏ ÇáÍÓÇÈ
    Client.AccountBalance = clsInputValidate::ReadFloatNumber(); // íÊã ŞÑÇÁÉ ÑÕíÏ ÇáÍÓÇÈ
}

void AddNewClient()
{
    string AccountNumber = ""; // ÊÚÑíİ ãÊÛíÑ áÑŞã ÇáÍÓÇÈ ÈäæÚ string

    cout << "\nPlease Enter Account Number: "; // íõØáÈ ãä ÇáãÓÊÎÏã ÅÏÎÇá ÑŞã ÇáÍÓÇÈ
    AccountNumber = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÑŞã ÇáÍÓÇÈ
    while (clsBankClient::IsClientExist(AccountNumber)) // ÍáŞÉ ÊÍŞŞ ãÇ ÅĞÇ ßÇä ÑŞã ÇáÍÓÇÈ ãæÌæÏğÇ ÈÇáİÚá
    {
        system("color 40"); //æÖÚ  áæä ÇáÎáİíå ÇÍãÑ
        cout << "\nAccount Number Is Already Used, Choose another one: "; // ÅÔÚÇÑ íõİíÏ ÈÃä ÑŞã ÇáÍÓÇÈ ãÓÊÎÏã ÈÇáİÚá¡ æíõØáÈ ÇÎÊíÇÑ ÑŞã ÌÏíÏ
        AccountNumber = clsInputValidate::ReadString(); // íÊã ŞÑÇÁÉ ÑŞã ÇáÍÓÇÈ ÇáÌÏíÏ
    }

    system("color 7"); //ÇÑÌÇÚ áæä ÇáÎáİíå ááÇİÊÑÇÖí

    clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber); // ÅäÔÇÁ ßÇÆä ÌÏíÏ áÚãíá ÇáÈäß ÈÇÓÊÎÏÇã ÑŞã ÇáÍÓÇÈ ÇáãÏÎá

    ReadClientInfo(NewClient); // ÇÓÊÏÚÇÁ ÇáÏÇáÉ áŞÑÇÁÉ ãÚáæãÇÊ ÇáÚãíá

    clsBankClient::enSaveResults SaveResult; // ÊÚÑíİ ãÊÛíÑ áäÊíÌÉ ÚãáíÉ ÇáÍİÙ

    SaveResult = NewClient.Save(); // ÍİÙ ÇáÚãíá æÇáÍÕæá Úáì äÊíÌÉ ÇáÚãáíÉ

    switch (SaveResult) // İÍÕ äÊíÌÉ ÚãáíÉ ÇáÍİÙ
    {
    case  clsBankClient::enSaveResults::svSucceeded: // İí ÍÇá äÌÇÍ ÇáÍİÙ
    {
        cout << "\nAccount Addeded Successfully :-)\n"; // ÅÔÚÇÑ ÈÃä ÇáÍÓÇÈ ÊãÊ ÅÖÇİÊå ÈäÌÇÍ
        NewClient.Print(); // ØÈÇÚÉ ãÚáæãÇÊ ÇáÚãíá
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject: // İí ÍÇáÉ İÔá ÇáÍİÙ ÈÓÈÈ ßÇÆä İÇÑÛ
    {
        cout << "\nError account was not saved because it's Empty"; // ÅÔÚÇÑ ÈÃä ÇáÍÓÇÈ áã íÊã ÍİÙå áÃäå İÇÑÛ
        break;

    }
    case clsBankClient::enSaveResults::svFaildAccountNumberExists: // İí ÍÇáÉ İÔá ÇáÍİÙ ÈÓÈÈ æÌæÏ ÑŞã ÍÓÇÈ ãßÑÑ
    {
        cout << "\nError account was not saved because account number is used!\n"; // ÅÔÚÇÑ ÈÃä ÇáÍÓÇÈ áã íÊã ÍİÙå áÃä ÑŞã ÇáÍÓÇÈ ãÓÊÎÏã ÈÇáİÚá
        break;
    }
    }
}


int main()

{

    cout << "Add New Clients : ";
    AddNewClient(); // ÇÓÊÏÚÇÁ ÇáÏÇáÉ áÅÖÇİÉ Úãíá ÌÏíÏ
    system("pause>0"); // ÊÃÎíÑ áÅÙåÇÑ äÊíÌÉ ÇáÈÑäÇãÌ ŞÈá ÇáÎÑæÌ
    return 0;
}
