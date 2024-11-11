using System;

namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {

            int number = 12;
            string result;

            result = (number % 2 == 0) ? "Even Number" : "Odd Number";

            Console.WriteLine("{0} is {1}", number, result);


            int x = 5;           // 00000101 في النظام الثنائي
            int result1 = ~x;     // 11111010 في النظام الثنائي (تكملة العدد)

            Console.WriteLine(result1);  // Output: -6


            int x1 = 5;           // 00000101 في النظام الثنائي
            int y1 = 3;           // 00000011 في النظام الثنائي
            int result2 = x1 & y1;  // 00000001 في النظام الثنائي

            Console.WriteLine(result2);  // Output: 1



            int x2 = 5;           // 00000101 في النظام الثنائي
            int y2 = 3;           // 00000011 في النظام الثنائي
            int result3 = x2 | y2;  // 00000111 في النظام الثنائي

            Console.WriteLine(result3);  // Output: 7

            int x4 = 5;           // 00000101 في النظام الثنائي
            int y4 = 3;           // 00000011 في النظام الثنائي
            int result4 = x4 ^ y4;  // 00000110 في النظام الثنائي

            Console.WriteLine(result4);  // Output: 6

            int x5 = 5;           // 00000101 في النظام الثنائي
            int result5 = x5 << 2; // 00010100 في النظام الثنائي

            Console.WriteLine(result5);  // Output: 20


            int x6 = 20;          // 00010100 في النظام الثنائي
            int result6 = x6 >> 2; // 00000101 في النظام الثنائي

            Console.WriteLine(result6);  // Output: 5

            Console.ReadKey();

        }
    }
}

