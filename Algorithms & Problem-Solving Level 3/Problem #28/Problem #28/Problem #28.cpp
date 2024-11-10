#include <iostream>
#include <string>
using namespace std;

//  ﬁÊ„ »ﬁ—«¡… ”·”·… „‰ «·„” Œœ„
string ReadString() {
    string S1;
    cout << "Please Enter Your char?\n";
    getline(cin, S1);
    return S1;
}

string InvertAllStringLettersCase(string S1) {

    for (int i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
            S1[i]= toupper(S1[i]);
        else if (isupper(S1[i]))
            S1[i]= tolower(S1[i]);
    }
    return S1;
}


int main()
{

    cout << "\nString after Inverting All Letters Case:\n";
    cout<<InvertAllStringLettersCase(ReadString());


    return 0;
}

