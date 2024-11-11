#include <iostream>
#include <stack>
using namespace std;

int main() {
    // ÅäÔÇÁ ßÇÆä stack ãä ÇáÃÚÏÇÏ ÇáÕÍíÍÉ
    stack<int> stkNumbers;

    // ÅÖÇİÉ ÇáÃÚÏÇÏ Åáì ÇáÜ Stack
    stkNumbers.push(10); // 10 Êã ÅÖÇİÊåÇ Åáì ÇáÃÚáì ááÜ Stack
    stkNumbers.push(20); // 20 Êã ÅÖÇİÊåÇ Åáì ÇáÃÚáì ááÜ Stack
    stkNumbers.push(30); // 30 Êã ÅÖÇİÊåÇ Åáì ÇáÃÚáì ááÜ Stack
    stkNumbers.push(40); // 40 Êã ÅÖÇİÊåÇ Åáì ÇáÃÚáì ááÜ Stack
    stkNumbers.push(50); // 50 Êã ÅÖÇİÊåÇ Åáì ÇáÃÚáì ááÜ Stack

    // ØÈÇÚÉ ÚÏÏ ÇáÚäÇÕÑ İí ÇáÜ Stack
    cout << "count=" << stkNumbers.size() << endl;

    // ØÈÇÚÉ ÇáÃÚÏÇÏ İí ÇáÜ Stack æÍĞİåÇ
    cout << "Numbers are : ";

    while (!stkNumbers.empty()) {
        // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃÚáì İí ÇáÜ Stack
        cout << stkNumbers.top() << " ";

        // ÍĞİ ÇáÚäÕÑ ÇáÃÚáì ãä ÇáÜ Stack
        stkNumbers.pop();
    }

    system("pause>0");
    return 0;
}
