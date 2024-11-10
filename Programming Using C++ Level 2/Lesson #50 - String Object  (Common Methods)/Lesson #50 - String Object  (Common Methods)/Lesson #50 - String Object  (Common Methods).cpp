#include <iostream>
using namespace std;

int main()
{
    string Osama = "Osama Ali Yahya Haseen Kokabah ";

    Osama.append(" Sniper");

    cout << Osama << endl;

    cout << Osama.length() << endl;
    cout << Osama.at(6) << endl;

    Osama.push_back('*');
    cout << Osama << endl;

    Osama.push_back('&');
    cout << Osama << endl;

    Osama.pop_back();
    cout << Osama<< endl;

    cout << Osama.substr(19, 5) << endl;
    Osama.clear();
    cout << Osama<< endl;


    return 0;
}
