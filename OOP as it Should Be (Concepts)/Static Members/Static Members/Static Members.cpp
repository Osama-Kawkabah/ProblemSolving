#include<iostream>
#include<string>
using namespace std;

class clsA {
public:
    int var;
    static int counter;

    // ﬂÊ‰” —ﬂ Ê—: Ì „ “Ì«œ… ﬁÌ„… «·„ €Ì— «·” « ÌﬂÌ ›Ì ﬂ· „—… Ì „ ›ÌÂ« ≈‰‘«¡ ﬂ«∆‰
    clsA() {
        counter++;
    }

    // ÿ»«⁄… ﬁÌ„… «·„ €Ì—«  «·⁄«œÌ… Ê«·„ €Ì— «·” « ÌﬂÌ
    void Print() {
        cout << "\nvar     = " << var << endl;
        cout << "counter = " << counter << endl;
    }
};

//  ÂÌ∆… «·„ €Ì— «·” « ÌﬂÌ Œ«—Ã «·›∆… „⁄ ﬁÌ„… «» œ«∆Ì…
int clsA::counter = 0;

int main() {
    // ≈‰‘«¡ «·ﬂ«∆‰« 
    clsA A1, A2, A3;

    //  ⁄ÌÌ‰ «·ﬁÌ„ ··„ €Ì—«  «·⁄«œÌ…
    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    // ÿ»«⁄… «·ﬁÌ„ ﬁ»·  €ÌÌ— «·„ €Ì— «·” « ÌﬂÌ
    cout << "Before changing the static member counter:\n";
    A1.Print();
    A2.Print();
    A3.Print();

    //  €ÌÌ— ﬁÌ„… «·„ €Ì— «·” « ÌﬂÌ ›Ì ﬂ«∆‰ Ê«Õœ
    A1.counter = 500;

    // ÿ»«⁄… «·ﬁÌ„ »⁄œ «· €ÌÌ—
    cout << "\nAfter changing the static member counter in one object:\n";
    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}
