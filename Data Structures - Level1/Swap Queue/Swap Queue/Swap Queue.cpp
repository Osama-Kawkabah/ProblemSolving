#include <queue>
#include <iostream>
using namespace std;

int main()
{
    // ÊÚÑíİ åíßá ÇáÈíÇäÇÊ queue
    queue<int> MyQueue1;
    queue<int> MyQueue2;

    // ÅÖÇİÉ ÚäÇÕÑ Åáì Çáqueue ÇáÃæáì
    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    // ÅÖÇİÉ ÚäÇÕÑ Åáì Çáqueue ÇáËÇäíÉ
    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    // ÇÓÊÎÏÇã ÏÇáÉ swap() áÊÈÇÏá ÚäÇÕÑ Çáqueues
    MyQueue1.swap(MyQueue2);

    // ØÈÇÚÉ Çáqueue ÇáÃæáì
    cout << "MyQueue1 = ";
    while (!MyQueue1.empty()) {
        cout << MyQueue1.front() << " ";
        MyQueue1.pop(); // ÍĞİ ÇáÚäÕÑ ÇáÃæá ãä Çáqueue ÇáÃæáì
    }

    // ØÈÇÚÉ Çáqueue ÇáËÇäíÉ
    cout << endl << "MyQueue2 = ";
    while (!MyQueue2.empty()) {
        cout << MyQueue2.front() << " ";
        MyQueue2.pop(); // ÍĞİ ÇáÚäÕÑ ÇáÃæá ãä Çáqueue ÇáËÇäíÉ
    }

    system("pause>0");

    return 0;
}
