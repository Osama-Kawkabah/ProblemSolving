#include <iostream>
#include "clsBankClient.h"

int main()

{

    clsBankClient Client1 = clsBankClient::Find("A101");
    Client1.Print();

    clsBankClient Client2 = clsBankClient::Find("A101", "1234");
    Client2.Print();


    system("pause>0");
    return 0;
}