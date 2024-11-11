using System;

class Program
{
    static void Main()
    {
        Random random = new Random();

        // توليد عدد عشوائي بين 1 و 100
        int randomNumber = random.Next(1, 101);
        Console.WriteLine("Random number between 1 and 100: " + randomNumber);

        // توليد رقمين عشوائيين بين 0 و 1
        double randomDouble1 = random.NextDouble();
        double randomDouble2 = random.NextDouble();
        Console.WriteLine("Random doubles between 0 and 1: " + randomDouble1 + ", " + randomDouble2);


        // إنشاء Random مع بذرة معينة
        Random random1 = new Random(123); // بذرة = 123
        Random random2 = new Random(123); // بذرة = 123

        // توليد أرقام عشوائية
        Console.WriteLine("Random number 1: " + random1.Next(1, 101)); // ينتج نفس التسلسل
        Console.WriteLine("Random number 2: " + random2.Next(1, 101)); // ينتج نفس التسلسل

        // إنشاء Random بدون بذرة
        Random random3 = new Random(); // بذرة تُنشئ بناءً على ساعة النظام

        // توليد أرقام عشوائية مختلفة
        Console.WriteLine("Random number 3: " + random3.Next(1, 101));
        Console.WriteLine("Random number 4: " + random3.Next(1, 101));

        Console.ReadKey();
    }
}
