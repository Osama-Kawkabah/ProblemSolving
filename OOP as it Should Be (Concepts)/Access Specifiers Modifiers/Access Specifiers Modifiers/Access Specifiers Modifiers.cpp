#include<iostream>
using namespace std;

class clsPerson {
private:
    // ›ﬁÿ Ì„ﬂ‰ «·Ê’Ê· ≈·ÌÂ« œ«Œ· Â–Â «·ﬂ·«”
    int Variable1 = 5;
    int Function1() {
        return 40;
    }

protected:
    // Ì„ﬂ‰ «·Ê’Ê· ≈·ÌÂ« œ«Œ· Â–Â «·ﬂ·«” ÊÃ„Ì⁄ «·ﬂ·«”«  «· Ì  Ê—À Â–« «·ﬂ·«”
    int Variable2 = 100;
    int Function2() {
        return 50;
    }

public:
    // Ì„ﬂ‰ «·Ê’Ê· ≈·ÌÂ« „‰ «·Œ«—Ã Ê«·œ«Œ· Ê«·ﬂ·«”«  «· Ì  Ê—À Â–« «·ﬂ·«”
    string FirstName;
    string LastName;
    string FullName() {
        return FirstName + " " + LastName;
    }
    float Function3() {
        return Function1() * Variable1 * Variable2;
    }
};
int main() {
    // ≈‰‘«¡ ﬂ«∆‰ „‰ «·ﬂ·«” clsPerson
    clsPerson Person1;

    //  ⁄ÌÌ‰ ﬁÌ„ ··„ €Ì—«  ›Ì «·ﬂ«∆‰
    Person1.FirstName = "Mohammed";
    Person1.LastName = "Abu-Hadhoud";

    // ÿ»«⁄… «·«”„ «·ﬂ«„· »«” Œœ«„ «·œ«·… FullName()
    cout << "Person1: " << Person1.FullName() << endl;

    // «” Œœ«„ «·œ«·… Function3() ·Õ”«» «·ﬁÌ„… Êÿ»«⁄ Â«
    cout << Person1.Function3();

    return 0;
}
