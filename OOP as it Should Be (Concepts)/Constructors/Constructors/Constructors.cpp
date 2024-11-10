#include <iostream>
using namespace std;

class clsAddress {
private:
    string _AddressLine1; // ÇáÓØÑ ÇáÃæá ááÚäæÇä
    string _AddressLine2; // ÇáÓØÑ ÇáËÇäí ááÚäæÇä
    string _POBox; // ÕäÏæŞ ÇáÈÑíÏ
    string _ZipCode; // ÇáÑãÒ ÇáÈÑíÏí

public:
    // ÏÇáÉ ÇáÈäÇÁ áÊÚííä Şíã ÇáÚäæÇä ÚäÏ ÅäÔÇÁ ÇáßÇÆä
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // ÏÇáÉ áÊÚííä ŞíãÉ ÇáÓØÑ ÇáÃæá ááÚäæÇä
    void SetAddressLine1(string AddressLine1) {
        _AddressLine1 = AddressLine1;
    }

    // ÏÇáÉ ááÍÕæá Úáì ŞíãÉ ÇáÓØÑ ÇáÃæá ááÚäæÇä
    string GetAddressLine1() {
        return _AddressLine1;
    }

    // ÏÇáÉ áÊÚííä ŞíãÉ ÇáÓØÑ ÇáËÇäí ááÚäæÇä
    void SetAddressLine2(string AddressLine2) {
        _AddressLine2 = AddressLine2;
    }

    // ÏÇáÉ ááÍÕæá Úáì ŞíãÉ ÇáÓØÑ ÇáËÇäí ááÚäæÇä
    string GetAddressLine2() {
        return _AddressLine2;
    }

    // ÏÇáÉ áÊÚííä ŞíãÉ ÕäÏæŞ ÇáÈÑíÏ
    void SetPOBox(string POBox) {
        _POBox = POBox;
    }

    // ÏÇáÉ ááÍÕæá Úáì ŞíãÉ ÕäÏæŞ ÇáÈÑíÏ
    string GetPOBox() {
        return _POBox;
    }

    // ÏÇáÉ áÊÚííä ŞíãÉ ÇáÑãÒ ÇáÈÑíÏí
    void SetZipCode(string ZipCode) {
        _ZipCode = ZipCode;
    }

    // ÏÇáÉ ááÍÕæá Úáì ŞíãÉ ÇáÑãÒ ÇáÈÑíÏí
    string GetZipCode() {
        return _ZipCode;
    }

    // ÏÇáÉ áØÈÇÚÉ ÊİÇÕíá ÇáÚäæÇä
    void Print() {
        cout << "\nAddress Details:\n";
        cout << "------------------------";
        cout << "\nAddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox       : " << _POBox << endl;
        cout << "ZipCode     : " << _ZipCode << endl;
    }
};

int main() {
    // ÅäÔÇÁ ßÇÆä ãä ÇáßáÇÓ clsAddress æÊãÑíÑ ÇáŞíã Åáíå
    clsAddress Address1("Queen Alia Street", "B 303", "11192", "5555");

    // ØÈÇÚÉ ÊİÇÕíá ÇáÚäæÇä
    Address1.Print();

    // ÅíŞÇİ ÇáÊäİíĞ ÍÊì íÊã ÇáÖÛØ Úáì Ãí ãİÊÇÍ
    system("pause>0");

    return 0;
}
