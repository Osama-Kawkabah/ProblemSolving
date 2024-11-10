#include<iostream> // ÊÖãíä ãßÊÈÉ áÅãßÇäíÉ ÇÓÊÎÏÇã æÙÇÆİ ÇáÅÏÎÇá æÇáÅÎÑÇÌ ÇáŞíÇÓíÉ

using namespace std; // ÇÓÊÎÏÇã ÇáäØÇŞ ÇáŞíÇÓí ááÅÏÎÇá æÇáÅÎÑÇÌ áÊÌäÈ ßÊÇÈÉ std:: ŞÈá ßá ÇÓÊÎÏÇã

class clsPerson { // ÈÏÇíÉ ÊÚÑíİ ÇáİÆÉ clsPerson

    string _FullName; // ÊÚÑíİ ãÊÛíÑ ÎÇÕ áÍİÙ ÇáÇÓã ÇáßÇãá ááÔÎÕ

public: // ÊÚÑíİ ÇáÃÚÖÇÁ ÇáÚÇãÉ
    
    class clsAddress // ÈÏÇíÉ ÊÚÑíİ ÇáİÆÉ ÇáÏÇÎáíÉ clsAddress
    {

    private: // ÊÚÑíİ ÇáÃÚÖÇÁ ÇáÎÇÕÉ

        string _AddressLine1; // ÇáÎØ ÇáÃæá ááÚäæÇä
        string _AddressLine2; // ÇáÎØ ÇáËÇäí ááÚäæÇä
        string _City; // ÇÓã ÇáãÏíäÉ
        string _Country; // ÇÓã ÇáÈáÏ

    public: // ÊÚÑíİ ÇáÃÚÖÇÁ ÇáÚÇãÉ

        // constructor íÓÊŞÈá ãÚáæãÇÊ ÇáÚäæÇä æíŞæã ÈÊÚííäåÇ Åáì ÇáãÊÛíÑÇÊ ÇáÎÇÕÉ
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        // æÙíİÉ áÊÚííä ÇáÎØ ÇáÃæá ááÚäæÇä
        string setAddressLine1(string AddressLine1)
        {
            _AddressLine1 = AddressLine1;
        }

        // æÙíİÉ áÇÓÊÑÌÇÚ ÇáÎØ ÇáÃæá ááÚäæÇä
        string AddressLine1()
        {
            return _AddressLine1;
        }

        // æÙíİÉ áÊÚííä ÇáÎØ ÇáËÇäí ááÚäæÇä
        string setAddressLine2(string AddressLine2)
        {
            _AddressLine2 = AddressLine2;
        }

        // æÙíİÉ áÇÓÊÑÌÇÚ ÇáÎØ ÇáËÇäí ááÚäæÇä
        string AddressLine2()
        {
            return _AddressLine2;
        }

        // æÙíİÉ áÊÚííä ÇÓã ÇáãÏíäÉ
        void setCity(string City)
        {
            _City = City;
        }

        // æÙíİÉ áÇÓÊÑÌÇÚ ÇÓã ÇáãÏíäÉ
        string City()
        {
            return _City;
        }

        // æÙíİÉ áÊÚííä ÇÓã ÇáÈáÏ
        string setCountry(string Country)
        {
            _Country = Country;
        }

        // æÙíİÉ áÇÓÊÑÌÇÚ ÇÓã ÇáÈáÏ
        string Country()
        {
            return _Country;
        }

        // æÙíİÉ áØÈÇÚÉ ÇáãÚáæãÇÊ ÇáÎÇÕÉ ÈÇáÚäæÇä
        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

    // æÙíİÉ áÊÚííä ÇáÇÓã ÇáßÇãá ááÔÎÕ
    string setFullName(string FullName)
    {
        _FullName = FullName;
    }

    // æÙíİÉ áÇÓÊÑÌÇÚ ÇáÇÓã ÇáßÇãá ááÔÎÕ
    string FullName()
    {
        return _FullName;
    }

    // ÅäÔÇÁ ßÇÆä ãä ÇáİÆÉ clsAddress ÈÇÓÊÎÏÇã constructor ÈŞíã ÇİÊÑÇÖíÉ
    clsAddress Address = clsAddress("", "", "", "");

    // constructor íÓÊŞÈá ãÚáæãÇÊ ÇáÔÎÕ æãÚáæãÇÊ ÇáÚäæÇä æíŞæã ÈÊÚííäåÇ Åáì ÇáãÊÛíÑÇÊ ÇáÎÇÕÉ
    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
    {
        _FullName = FullName;

        // ÅäÔÇÁ ßÇÆä ãä ÇáİÆÉ clsAddress ÈÇÓÊÎÏÇã constructor ááİÆÉ ÇáÏÇÎáíÉ
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }
};

int main() // ÈÏÇíÉ ÏÇáÉ main
{

    // ÅäÔÇÁ ßÇÆä ãä ÇáİÆÉ clsPerson ÈÇÓÊÎÏÇã constructor ááİÆÉ ÇáÎÇÑÌíÉ
    clsPerson Person1("Osam Ali Kokabah", "Building 10", "Queen Rania Street", "Amman", "Jordan");

    // ØÈÇÚÉ ÇáÚäæÇä ÈÇÓÊÎÏÇã ÇáßÇÆä Person1
    Person1.Address.Print();

    // ÇÓÊÎÏÇã constructor áÅäÔÇÁ ßÇÆä clsAddress ãÈÇÔÑÉ ÏÇÎá main
    clsPerson::clsAddress Address("2F", "1BS", "SANAA", "YEMEN");
    Address.Print();

    system("pause>0"); // ÅíŞÇİ ÇáÈÑäÇãÌ ŞÈá ÇáÇäÊåÇÁ
    return 0; // ÇáÇäÊåÇÁ ãä ÇáÏÇáÉ main ÈäÌÇÍ
}
