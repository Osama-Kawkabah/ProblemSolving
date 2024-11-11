using System;

class Program
{

    enum WeekDays
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    }
    static void Main()
    {
        // التحويل الضمني
        int myInt = 10;
        double myDouble = myInt;
        Console.WriteLine(myDouble); // Output: 10

        // التحويل الصريح
        double anotherDouble = 9.78;
        int anotherInt = (int)anotherDouble;
        Console.WriteLine(anotherInt); // Output: 9

        // استخدام دالة التحويل
        string myString = "123";
        int convertedInt = Convert.ToInt32(myString);
        Console.WriteLine(convertedInt); // Output: 123

        // تحويل النوع المرجعي باستخدام 'as'
        object myObject = "Hello, World!";
        string anotherString = myObject as string;
        if (anotherString != null)
        {
            Console.WriteLine(anotherString); // Output: Hello, World!
        }

        double myDouble1 = 17.58;
        int myInt1 = (int)myDouble;    // Manual casting: double to int

        Console.WriteLine(myDouble1);   // Outputs 17.58
        Console.WriteLine(myInt1);      // Outputs 17


        int myInt2 = 20;
        double myDouble2 = 7.25;
        bool myBool2 = true;

        Console.WriteLine(Convert.ToString(myInt2));    // convert int to string
        Console.WriteLine(Convert.ToDouble(myInt2));    // convert int to double
        Console.WriteLine(Convert.ToInt32(myDouble2));  // convert double to int
        Console.WriteLine(Convert.ToString(myBool2));   // convert bool to string





        // طباعة قيمة التعداد مباشرة
        Console.WriteLine(WeekDays.Friday); // Output: Friday

        // تحويل قيمة التعداد إلى عدد صحيح
        int day = (int)WeekDays.Friday;
        Console.WriteLine(day); // Output: 4

        // تحويل عدد صحيح إلى قيمة enum
        var wd = (WeekDays)5;
        Console.WriteLine(wd); // Output: Saturday


        // تحويل قيمة تعداد إلى سلسلة نصية باستخدام ToString
        WeekDays days = (WeekDays)5;
        string c = days.ToString();

        Console.WriteLine(c); // Output: Saturday




        Console.ReadKey();
    }

}
