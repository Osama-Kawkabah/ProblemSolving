using System;

class Program
{
    // دالة بدون معطيات أو قيمة مرجعة
    static void PrintGreeting()
    {
        Console.WriteLine("Hello, welcome to C#!");
    }

    // دالة مع معطيات بدون قيمة مرجعة
    static void PrintPersonalGreeting(string name)
    {
        Console.WriteLine($"Hello, {name}!");
    }

    // دالة مع معطيات وقيمة مرجعة
    static int Add(int a, int b)
    {
        return a + b;
    }

    // دالة مع معطيات اختيارية
    static void PrintMessage(string message = "Hello, world!")
    {
        Console.WriteLine(message);
    }

    // دالة مع عدد متغير من المعطيات
    static void PrintNumbers(params int[] numbers)
    {
        foreach (int number in numbers)
        {
            Console.WriteLine(number);
        }
    }

    // استخدام ref
    static void Square(ref int number)
    {
        number *= number;
    }

    // استخدام out
    static void GetValues(out int a, out int b)
    {
        a = 10;
        b = 20;
    }

    // دالة عامة
    static void Swap<T>(ref T a, ref T b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    // تعريف دالة MyMethod التي تأخذ ثلاثة معاملات من نوع string
    static void MyMethod(string child1, string child2, string child3)
    {
        Console.WriteLine("The youngest child is: " + child3);
    }

    
    // دالة Sum الأولى التي تأخذ معاملين
    static int Sum(int Num1, int Num2)
    {
        return Num1 + Num2;
    }

    // دالة Sum الثانية التي تأخذ ثلاثة معاملات
    static int Sum(int Num1, int Num2, int Num3)
    {
        return Num1 + Num2 + Num3;
    }

    // دالة Sum الثالثة التي تأخذ أربعة معاملات
    static int Sum(int Num1, int Num2, int Num3, int Num4)
    {
        return Num1 + Num2 + Num3 + Num4;
    }


    static void Main()
    {
        // استدعاء الدوال المستقلة
        PrintGreeting();
        PrintPersonalGreeting("Alice");

        int sumResult = Add(3, 4);
        Console.WriteLine("The sum is: " + sumResult);

        PrintMessage();
        PrintMessage("Custom message");

        PrintNumbers(1, 2, 3, 4, 5);

        int value = 5;
        Square(ref value);
        Console.WriteLine("The squared value is: " + value);

        int x, y;
        GetValues(out x, out y);
        Console.WriteLine($"Values: x = {x}, y = {y}");

        int a = 1, b = 2;
        Swap(ref a, ref b);
        Console.WriteLine($"Swapped values: a = {a}, b = {b}");

        string str1 = "hello", str2 = "world";
        Swap(ref str1, ref str2);
        Console.WriteLine($"Swapped strings: str1 = {str1}, str2 = {str2}");

        // استدعاء الدالة MyMethod باستخدام معاملات مسماة
        MyMethod(child3: "Omar", child1: "Saqer", child2: "Hamza");

        // استدعاء الدوال المختلفة
        Console.WriteLine(Sum(1, 2));           // استدعاء دالة Sum ذات المعاملين
        Console.WriteLine(Sum(1, 2, 3));        // استدعاء دالة Sum ذات الثلاثة معاملات
        Console.WriteLine(Sum(1, 2, 3, 4));     // استدعاء دالة Sum ذات الأربعة معاملات

        Console.ReadKey(); // انتظار إدخال مفتاح قبل إنهاء البرنامج
    }
}
