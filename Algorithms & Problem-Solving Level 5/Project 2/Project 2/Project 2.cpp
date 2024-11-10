#include <iostream> //  ÷„Ì‰ „ﬂ »… «·≈œŒ«· Ê«·≈Œ—«Ã «·√”«”Ì…
#include "clsMyQueue.h" //  ÷„Ì‰ „·› «·—√” «·Œ«’ »«·ÿ«»Ê—

using namespace std; // «” Œœ«„ ›÷«¡ «·√”„«¡ std · Ã‰» ﬂ «»… std:: ﬁ»· ﬂ· «” Œœ«„ ·œÊ«· √Ê ﬂ«∆‰«  „‰ „ﬂ »… «·ﬁÌ«”Ì…

int main()
{
    clsMyQueue <int> MyQueue; // ≈‰‘«¡ ﬂ«∆‰ „‰ ‰Ê⁄ clsMyQueue · Œ“Ì‰ √⁄œ«œ ’ÕÌÕ…

    MyQueue.push(10); // ≈÷«›… «·—ﬁ„ 10 ≈·Ï «·ÿ«»Ê—
    MyQueue.push(20); // ≈÷«›… «·—ﬁ„ 20 ≈·Ï «·ÿ«»Ê—
    MyQueue.push(30); // ≈÷«›… «·—ﬁ„ 30 ≈·Ï «·ÿ«»Ê—
    MyQueue.push(40); // ≈÷«›… «·—ﬁ„ 40 ≈·Ï «·ÿ«»Ê—
    MyQueue.push(50); // ≈÷«›… «·—ﬁ„ 50 ≈·Ï «·ÿ«»Ê—

    cout << "\nQueue: \n";
    MyQueue.Print(); // ÿ»«⁄… „Õ ÊÌ«  «·ÿ«»Ê—

    cout << "\nQueue Size: " << MyQueue.Size(); // ÿ»«⁄… ÕÃ„ «·ÿ«»Ê—
    cout << "\nQueue Front: " << MyQueue.front(); // ÿ»«⁄… «·⁄‰’— «·√Ê· ›Ì «·ÿ«»Ê—
    cout << "\nQueue Back: " << MyQueue.back(); // ÿ»«⁄… «·⁄‰’— «·√ŒÌ— ›Ì «·ÿ«»Ê—

    MyQueue.pop(); // ≈“«·… «·⁄‰’— «·√Ê· „‰ «·ÿ«»Ê—

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print(); // ÿ»«⁄… „Õ ÊÌ«  «·ÿ«»Ê— »⁄œ ⁄„·Ì… «·≈“«·…

    // «· „œÌœ #1: ÿ»«⁄… «·⁄‰’— ›Ì «·›Â—” 2
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);

    // «· „œÌœ #2: ⁄ﬂ”  — Ì» «·ÿ«»Ê—
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    // «· „œÌœ #3:  ÕœÌÀ «·⁄‰’— ›Ì «·›Â—” 2 »«·ﬁÌ„… 600
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    // «· „œÌœ #4: ≈œ—«Ã «·ﬁÌ„… 800 »⁄œ «·⁄‰’— ›Ì «·›Â—” 2
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();

    // «· „œÌœ #5: ≈œ—«Ã «·ﬁÌ„… 1000 ›Ì »œ«Ì… «·ÿ«»Ê—
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    // «· „œÌœ #6: ≈œ—«Ã «·ﬁÌ„… 2000 ›Ì ‰Â«Ì… «·ÿ«»Ê—
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    // «· „œÌœ #7: „”Õ Ã„Ì⁄ «·⁄‰«’— „‰ «·ÿ«»Ê—
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

    system("pause>0"); // «‰ Ÿ«— «·„” Œœ„ ··÷€ÿ ⁄·Ï “— ·≈‰Â«¡ «·»—‰«„Ã
}
