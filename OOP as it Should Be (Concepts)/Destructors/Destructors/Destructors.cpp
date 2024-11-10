#include <iostream>
using namespace std;

class clsPerson {
public:
    string FullName;

    // ßæäÓÊÑßÊæÑ: íÊã ÇÓÊÏÚÇÄå ÚäÏ ÈäÇÁ ÇáßÇÆä.
    clsPerson() {
        FullName = "Osama Ali Kokabah";
        cout << "\nMy Nmae Is : " << FullName << endl;;
        cout << "\nHi, I'm Constructor";
    }

    // ÏíÓÊÑßÊæÑ: íÊã ÇÓÊÏÚÇÄå ÚäÏ åÏã ÇáßÇÆä.
    ~clsPerson() {
        cout << "\nHi, I'm Destructor";
    }
};

void Fun1() {
    clsPerson Person1; // ÈÚÏ ÇáÇäÊåÇÁ ãä ÇáÏÇáÉ¡ ÓíÊã åÏã ÇáßÇÆä Person1 æÇÓÊÏÚÇÁ ÇáÏíÓÊÑßÊæÑ.
}

void Fun2() {
    clsPerson* Person2 = new clsPerson; // ÏÇÆãğÇ ÇÓÊÎÏã delete ÚäÏ ÇÓÊÎÏÇã new¡ æÅáÇ ÓíÈŞì ÇáßÇÆä İí ÇáĞÇßÑÉ.
    cout << "\nMy Nmae Is : " << Person2->FullName << endl;
    delete Person2;
    Person2 = nullptr; // ÊÚííä ÇáãÄÔÑ Åáì nullptr ÈÚÏ ÍĞİ ÇáßÇÆä

    if (Person2 != nullptr) {
        // íÚäí Ãä ÇáßÇÆä ãÇ ÒÇá ãæÌæÏğÇ æáã íÊã åÏãå
        cout << "\nFullName: " << Person2->FullName << endl;
    }
    else {
        // íÚäí Ãä ÇáßÇÆä ŞÏ Êã åÏãå æáã íÚÏ ãæÌæÏğÇ
        cout << "\nNo Data !" << endl;
    }
}


int main() {
    Fun1();
    Fun2();
    system("pause>0"); // ÅíŞÇİ ÇáäÇİĞÉ ÍÊì íÊã ÇáÖÛØ Úáì Ãí ãİÊÇÍ ŞÈá ÇáÅÛáÇŞ.
    return 0;
}

