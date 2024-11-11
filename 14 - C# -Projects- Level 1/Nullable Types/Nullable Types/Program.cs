using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // متغير من النوع Nullable<int> يمكن أن يحتوي على قيمة عددية أو قيمة null.

            Nullable<int> i = 2;

            if (i.HasValue)
            {
                Console.WriteLine("The variable i has a value: " + i.Value);
            }
            else
            {
                Console.WriteLine("The variable i does not have a value.");
            }

            // انتظار إدخال مفتاح من المستخدم قبل إغلاق البرنامج
            Console.ReadKey();
        }
    }
}
