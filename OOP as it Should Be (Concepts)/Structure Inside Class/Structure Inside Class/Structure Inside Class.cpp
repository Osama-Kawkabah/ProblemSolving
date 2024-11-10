#include<iostream>
using namespace std;

class clsPerson {
    struct stAddress
    {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    };

public:
    string FullName;
    stAddress Address;

    clsPerson()
    {
        FullName = "Mohammed Abu-Hadhoud";
        Address.AddressLine1 = "Building 10";
        Address.AddressLine2 = "Queen Rania Street";
        Address.City = "Amman";
        Address.Country = "Jordan";
    }

    void SetAddressLine1(string AddressLine1) {
        Address.AddressLine1 = AddressLine1;
    }
    void SetAddressLine2(string AddressLine2) {
        Address.AddressLine2 = AddressLine2;
    }
    void SetCountry(string Country) {
        Address.Country = Country;
    }
    void SetCity(string City) {
        Address.City = City;
    }

    void PrintAddress()
    {
        cout << "\nAddress:\n";
        cout <<"AddressLine1 : " << Address.AddressLine1 << endl;
        cout << "AddressLine2 : " << Address.AddressLine2 << endl;
        cout << "City : " << Address.City << endl;
        cout << "Country : "<<Address.Country << endl;
    }

};

int main()

{
    clsPerson Person1;
    Person1.PrintAddress();
    cout << Person1.Address.Country << "\n";


    Person1.SetAddressLine1("Building 300");
    Person1.SetAddressLine2("Hazez Street");
    Person1.SetCountry("Yemen");
    Person1.SetCity("Sana");


    Person1.PrintAddress();

    cout << Person1.Address.Country<<"\n";

    system("pause>0");
    return 0;
}