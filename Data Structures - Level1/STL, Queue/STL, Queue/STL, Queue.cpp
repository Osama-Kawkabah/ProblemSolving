#include <queue>
#include <iostream>
using namespace std;

int main()
{
    // ÊÚÑíİ åíßá ÈíÇäÇÊ Queue
    queue<int> MyQueue;

    // ÅÖÇİÉ ÇáÚäÇÕÑ Åáì ÇáØÇÈæÑ
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);

    // ØÈÇÚÉ ÚÏÏ ÇáÚäÇÕÑ İí ÇáØÇÈæÑ
    cout << "\nCount: " << MyQueue.size();
    
    // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃŞÏã İí ÇáØÇÈæÑ
    cout << "\nFront: " << MyQueue.front();
    
    // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃÍÏË İí ÇáØÇÈæÑ
    cout << "\nBack: " << MyQueue.back() << endl;

    // ØÈÇÚÉ ÇáÚäÇÕÑ İí ÇáØÇÈæÑ æÍĞİåÇ
    cout << "\nMyQueue = ";
    while (!MyQueue.empty())
    {
        cout << MyQueue.front() << " "; // ØÈÇÚÉ ÇáÚäÕÑ ÇáÃŞÏã
        MyQueue.pop(); // ÍĞİ ÇáÚäÕÑ ÇáÃŞÏã
    }

    system("pause>0"); // ÅíŞÇİ ÇáÊäİíĞ
    return 0; // ÅÔÇÑÉ Åáì äÌÇÍ ÇáÊäİíĞ
}
