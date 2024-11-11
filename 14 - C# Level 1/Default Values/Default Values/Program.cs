using System;

class Program
{
    static void Main()
    {
        // تعريف متغيرات واستخدام default لإعطائها قيم افتراضية
        int number = default;       // يُعيد القيمة 0
        float price = default;      // يُعيد القيمة 0
        bool isValid = default;     // يُعيد القيمة false
        char symbol = default;      // يُعيد القيمة '\0'
        string name = default;      // يُعيد القيمة null (لأن string هو مرجع)

        // عرض القيم للتحقق
        Console.WriteLine($" number  : {number}");
        Console.WriteLine($" price   : {price}");
        Console.WriteLine($" isValid ? {isValid}");
        Console.WriteLine($" symbol  : '{symbol}'");
        Console.WriteLine($" name    : {(name == null ? "Not assigned" : name)}");


        //get default value using default(type)
        int i = default(int); // 0
        float f = default(float);// 0
        decimal d = default(decimal);// 0
        bool b = default(bool);// false
        char c = default(char);// '\0'

        // C# 7.1 onwards
        //get default value using default
        int i2 = default; // 0
        float f2 = default;// 0
        decimal d2 = default;// 0
        bool b2 = default;// false
        char c2 = default;// '\0'

        Console.ReadKey();
    }
}
