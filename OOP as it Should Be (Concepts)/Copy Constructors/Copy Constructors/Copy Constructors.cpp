#include <iostream>
using namespace std;

class clsAddress {
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    // Constructor
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // Copy Constructor
    clsAddress(const clsAddress& old_obj) {
        _AddressLine1 = old_obj._AddressLine1;
        _AddressLine2 = old_obj._AddressLine2;
        _POBox = old_obj._POBox;
        _ZipCode = old_obj._ZipCode;
    }

    // Setter function for AddressLine1
    void SetAddressLine1(string AddressLine1) {
        _AddressLine1 = AddressLine1;
    }

    // Getter function for AddressLine1
    string AddressLine1() {
        return _AddressLine1;
    }

    void SetAddressLine2(string AddressLine2) {
        _AddressLine2 = AddressLine2;
    }

    string AddressLine2() {
        return _AddressLine2;
    }

    void SetPOBox(string POBox) {
        _POBox = POBox;
    }

    string POBox() {
        return _POBox;
    }

    void SetZipCode(string ZipCode) {
        _ZipCode = ZipCode;
    }

    string ZipCode() {
        return _ZipCode;
    }

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
    // ÅäÔÇÁ ßÇÆä Address1 æØÈÇÚÉ ÊÝÇÕíáå
    clsAddress Address1("Osama Ali Kokabah", "B 303", "11192", "5555");
    Address1.Print();

    // ÅäÔÇÁ ßÇÆä Address2 ÈÇÓÊÎÏÇã ÇáäÓÎÉ ÇáÚãíÞÉ ãä Address1 æØÈÇÚÉ ÊÝÇÕíáå
    clsAddress Address2 = Address1;
    Address2.Print();

    // ÅíÞÇÝ ÇáÊäÝíÐ ÍÊì íÊã ÇáÖÛØ Úáì Ãí ãÝÊÇÍ
    system("pause>0");

    return 0;
}
