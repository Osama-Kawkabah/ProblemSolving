#include <iostream>
using namespace std;

//������ �� ����� ������ �� �� ��� �� �� 
int ReadNumber()
{
    int Number;
    cout << "Please enter a number: " << endl;
    cin >> Number;

    while (cin.fail())
    {
        // �������� �� ���� ����� ������
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }

    return Number;
}
//�� ����� ����� �� ��
bool isLeapYear(short year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


short NumberOfDaysInAMonth(short Month, short Year) {
    if (Month < 1 || Month > 12)
        return 0;

    short days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

int main()
{
  

    return 0;
}

