#include<iostream>
using namespace std;

class clsA {
public:
    // œ«·… ” « ÌﬂÌ…  ﬁÊ„ »≈—Ã«⁄ «·ﬁÌ„… 10
    static int Function1() {
        return 10;
    }

    // œ«·… €Ì— ” « ÌﬂÌ…  ﬁÊ„ »≈—Ã«⁄ «·ﬁÌ„… 20
    int Function2() {
        return 20;
    }
};

int main() {
    // Ì „ «” œ⁄«¡ «·œ«·… «·” « ÌﬂÌ… „»«‘—… „‰ Œ·«· «·›∆…
    cout << clsA::Function1() << endl;

    // Ì„ﬂ‰ √Ì÷« «” œ⁄«¡ «·œ«·… «·” « ÌﬂÌ… ⁄»— «·ﬂ«∆‰
    clsA A1, A2;
    cout << A1.Function1() << endl;

    // ·« Ì„ﬂ‰ «” œ⁄«¡ «·œ«·… €Ì— «·” « ÌﬂÌ… „»«‘—… „‰ Œ·«· «·›∆…
    //cout << clsA::Function2() << endl; // ”ÌƒœÌ ≈·Ï Œÿ√

    // Ì„ﬂ‰ «” œ⁄«¡ «·œ«·… €Ì— «·” « ÌﬂÌ… ⁄»— «·ﬂ«∆‰
    cout << A1.Function2() << endl;
    cout << A2.Function1() << endl;

    return 0;
}
