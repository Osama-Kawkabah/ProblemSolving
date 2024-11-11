#include <stack> // ÊÖãíä ãßÊÈÉ ÇáÜ stack
#include <iostream> // ÊÖãíä ãßÊÈÉ ááÅÏÎÇá æÇáÅÎÑÇÌ
using namespace std; // ÇÓÊÎÏÇã ãÓÇÍÉ ÇáÃÓãÇÁ ÇáŞíÇÓíÉ

int main() // ÏÇáÉ ÇáÈÑäÇãÌ ÇáÑÆíÓíÉ
{
    // ÊÚÑíİ ãÊÛíÑÇÊ ãä äæÚ stack áÊÎÒíä ÇáÃÚÏÇÏ ÇáÕÍíÍÉ
    stack<int> MyStack1;
    stack<int> MyStack2;

    // ÅÖÇİÉ ÚäÇÕÑ Åáì ÇáÜ Stacks ÇáÃæá æÇáËÇäí
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    // ÇÓÊÎÏÇã ÇáÏÇáÉ swap() áÊÈÏíá ÚäÇÕÑ ÇáÜ Stacks
    MyStack1.swap(MyStack2);

    // ØÈÇÚÉ ÇáÚäÇÕÑ İí ÇáÜ Stack ÇáÃæá
    cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        cout << MyStack1.top() << " "; // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃÚáì
        MyStack1.pop(); // ÍĞİ ÇáÚäÕÑ ÇáÃÚáì
    }

    // ØÈÇÚÉ ÇáÚäÇÕÑ İí ÇáÜ Stack ÇáËÇäí
    cout << endl << "MyStack2 = ";
    while (!MyStack2.empty()) {
        cout << MyStack2.top() << " "; // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃÚáì
        MyStack2.pop(); // ÍĞİ ÇáÚäÕÑ ÇáÃÚáì
    }

    MyStack2.emplace

    system("pause>0"); // ÅíŞÇİ ÇáÈÑäÇãÌ áİÊÑÉ ãÚíäÉ

    return 0; // ÅÑÌÇÚ ÇáŞíãÉ 0 ááÅÔÇÑÉ Åáì äÌÇÍ ÇáÊäİíĞ
}
