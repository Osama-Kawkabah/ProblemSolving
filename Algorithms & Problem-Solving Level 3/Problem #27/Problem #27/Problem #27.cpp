#include <iostream>
#include <string>
using namespace std;

// ÊŞæã ÈŞÑÇÁÉ ÓáÓáÉ ãä ÇáãÓÊÎÏã
char ReadString() {
    char C1;
    cout << "Please Enter Your char?\n";
    cin >> C1;
    return C1;
}

//ÊÍæíá ÇáÍÑİ ãä ÍÑİ ÕÛíÑ áßÈíÑ æÇáÚßÓ
char InvertLetterCase(char S1) {
    return isupper(S1) ? tolower(S1) : toupper(S1);
}


int main()
{
    char C1 = ReadString();

    cout << "\nChar after inverting case:\n";

    C1 = InvertLetterCase(C1);

    cout << C1 << endl;

    return 0;
}

