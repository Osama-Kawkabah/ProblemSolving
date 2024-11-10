#include<iostream> // ����� ����� �������� ������� ����� ������� �������� ��������

using namespace std; // ������� ������ ������� ������� �������� ����� ����� std:: ��� �� �������

class clsPerson { // ����� ����� ����� clsPerson

    string _FullName; // ����� ����� ��� ���� ����� ������ �����

public: // ����� ������� ������
    
    class clsAddress // ����� ����� ����� �������� clsAddress
    {

    private: // ����� ������� ������

        string _AddressLine1; // ���� ����� �������
        string _AddressLine2; // ���� ������ �������
        string _City; // ��� �������
        string _Country; // ��� �����

    public: // ����� ������� ������

        // constructor ������ ������� ������� ����� �������� ��� ��������� ������
        clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
        {
            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;
        }

        // ����� ������ ���� ����� �������
        string setAddressLine1(string AddressLine1)
        {
            _AddressLine1 = AddressLine1;
        }

        // ����� �������� ���� ����� �������
        string AddressLine1()
        {
            return _AddressLine1;
        }

        // ����� ������ ���� ������ �������
        string setAddressLine2(string AddressLine2)
        {
            _AddressLine2 = AddressLine2;
        }

        // ����� �������� ���� ������ �������
        string AddressLine2()
        {
            return _AddressLine2;
        }

        // ����� ������ ��� �������
        void setCity(string City)
        {
            _City = City;
        }

        // ����� �������� ��� �������
        string City()
        {
            return _City;
        }

        // ����� ������ ��� �����
        string setCountry(string Country)
        {
            _Country = Country;
        }

        // ����� �������� ��� �����
        string Country()
        {
            return _Country;
        }

        // ����� ������ ��������� ������ ��������
        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }
    };

    // ����� ������ ����� ������ �����
    string setFullName(string FullName)
    {
        _FullName = FullName;
    }

    // ����� �������� ����� ������ �����
    string FullName()
    {
        return _FullName;
    }

    // ����� ���� �� ����� clsAddress �������� constructor ���� ��������
    clsAddress Address = clsAddress("", "", "", "");

    // constructor ������ ������� ����� �������� ������� ����� �������� ��� ��������� ������
    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
    {
        _FullName = FullName;

        // ����� ���� �� ����� clsAddress �������� constructor ����� ��������
        Address = clsAddress(AddressLine1, AddressLine2, City, Country);
    }
};

int main() // ����� ���� main
{

    // ����� ���� �� ����� clsPerson �������� constructor ����� ��������
    clsPerson Person1("Osam Ali Kokabah", "Building 10", "Queen Rania Street", "Amman", "Jordan");

    // ����� ������� �������� ������ Person1
    Person1.Address.Print();

    // ������� constructor ������ ���� clsAddress ������ ���� main
    clsPerson::clsAddress Address("2F", "1BS", "SANAA", "YEMEN");
    Address.Print();

    system("pause>0"); // ����� �������� ��� ��������
    return 0; // �������� �� ������ main �����
}
