#include <iostream> // ÊÖãíä ÇáãßÊÈÉ ÇáŞíÇÓíÉ áÅÏÎÇá æÅÎÑÇÌ ÇáÈíÇäÇÊ

using namespace std; // ÇÓÊÎÏÇã İÖÇÁ ÇáÃÓãÇÁ std

class clsA { // ÊÚÑíİ ÇáİÆÉ clsA
public:
    // dummy constructor (ÈäÇÁ ÇáÏÇáÉ ÇáÒÇÆİÉ)
    clsA() {}

    //Parametarized Constructor (ÈäÇÁ ÇáÏÇáÉ ÈãÚÇãáÇÊ)
    clsA(int value) { // ÊÚÑíİ ÈäÇÁ ÇáÏÇáÉ ÈãÚÇãáÇÊ
        x = value; // ÊÚííä ŞíãÉ ÇáãÊÛíÑ x
    }

    int x; // ÊÚÑíİ ãÊÛíÑ ÚÏÏ ÕÍíÍ x

    void Print() { // ÊÚÑíİ ÇáÏÇáÉ ááØÈÇÚÉ
        cout << "The value of X = " << x << endl; // ØÈÇÚÉ ŞíãÉ ÇáãÊÛíÑ x
    }
};

int main() { // ÈÏÇíÉ ÇáÏÇáÉ ÇáÑÆíÓíÉ
    int NumberOfObjects = 5; // ÊÚÑíİ ãÊÛíÑ ÚÏÏ ÇáßÇÆäÇÊ

    // ÊÎÕíÕ ãÕİæİÉ ÏíäÇãíßíÉ
    // ÈÍÌã ÚÏÏ ÇáßÇÆäÇÊ ÈÇÓÊÎÏÇã ßáãÉ ÇáÑÆíÓíÉ new
    clsA* arrA = new clsA[NumberOfObjects];

    // ÇÓÊÏÚÇÁ ÇáÈäÇÁ áßá ÚäÕÑ İí ÇáãÕİæİÉ
    for (int i = 0; i < NumberOfObjects; i++) { // ÈÏÇíÉ ÇáÍáŞÉ ááÊßÑÇÑ ãä 0 Åáì NumberOfObjects
        arrA[i] = clsA(i +1); // ÇÓÊÏÚÇÁ ÇáÈäÇÁ ÈãÚÇãáÇÊ æÊÎÒíä ÇáßÇÆä İí ÇáãÕİæİÉ
    } // äåÇíÉ ÇáÍáŞÉ

    // ØÈÇÚÉ ãÍÊæíÇÊ ÇáãÕİæİÉ
    for (int i = 0; i < NumberOfObjects; i++) { // ÈÏÇíÉ ÇáÍáŞÉ ááÊßÑÇÑ ãä 0 Åáì NumberOfObjects
        arrA[i].Print(); // ÇÓÊÏÚÇÁ ÇáÏÇáÉ áØÈÇÚÉ ŞíãÉ x áßá ßÇÆä İí ÇáãÕİæİÉ
    } // äåÇíÉ ÇáÍáŞÉ

    // ÊÍÑíÑ ÇáĞÇßÑÉ
    delete[] arrA; // ÍĞİ ÇáãÕİæİÉ ÇáÏíäÇãíßíÉ

    return 0; // ÇáÇäÊåÇÁ ãä ÇáÈÑäÇãÌ ÈäÌÇÍ
} // äåÇíÉ ÇáÏÇáÉ ÇáÑÆíÓíÉ
