#include <iostream>  // تضمين المكتبة iostream
using namespace std; // استخدام مساحة الأسماء std

class MyClass { // تعريف الكلاس MyClass
public: // قسم العام
    int value; // تعريف متغير عضوي لحفظ قيمة

    void setValue(int val) { // تعريف دالة لوضع قيمة
        value = val; // تعيين القيمة الممررة كقيمة للمتغير العضوي
    }

    void printValue() { // تعريف دالة لطباعة القيمة
        cout << "Value: " << value << endl; // طباعة القيمة المحفوظة
    }

    void printAddress() { // تعريف دالة لطباعة عنوان الكائن
        cout << "Address of object: " << this << endl; // طباعة عنوان الكائن باستخدام this
    }

    void printDereferencedAddress() { // تعريف دالة لطباعة قيمة عنوان الكائن
        cout << "Address of object: " << (void*)this << endl; // طباعة عنوان الكائن باستخدام this
    }
    void printValueAddress() { // تعريف دالة لطباعة قيمة عنوان الكائن
        cout << "Address value : " << this->value<< endl; // طباعة عنوان الكائن باستخدام this
    }
};

int main() { // الدالة الرئيسية
    MyClass obj; // إنشاء كائن من الكلاس MyClass

    obj.setValue(10); // تعيين قيمة للكائن
    obj.printValue(); // طباعة القيمة

    obj.printAddress(); // طباعة عنوان الكائن
    obj.printDereferencedAddress(); // محاولة طباعة قيمة عنوان الكائن
    obj.printValue();
    return 0; // الخروج من البرنامج
}
