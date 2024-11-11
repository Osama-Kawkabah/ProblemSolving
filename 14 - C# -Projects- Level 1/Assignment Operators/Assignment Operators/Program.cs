using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assignment_Operators
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int x1 = 10;
            x1 += 5;  // x = x + 5
            Console.WriteLine(x1);  // Output: 15

            int x2 = 10;
            x2 -= 5;  // x = x - 5
            Console.WriteLine(x2);  // Output: 5


            int x3 = 10;
            x3 *= 5;  // x = x * 5
            Console.WriteLine(x3);  // Output: 50

            int x4 = 10;
            x4 /= 5;  // x = x / 5
            Console.WriteLine(x4);  // Output: 2


            int x5 = 10;
            x5 %= 3;  // x = x % 3
            Console.WriteLine(x5);  // Output: 1

            int x6 = 6;  // 110 in binary
            x6 &= 3;     // 011 in binary
            Console.WriteLine(x6);  // Output: 2 (010 in binary)

            int x7 = 6;  // 110 in binary
            x7 |= 3;     // 011 in binary
            Console.WriteLine(x7);  // Output: 7 (111 in binary)

            int x8 = 6;  // 110 in binary
            x8 ^= 3;     // 011 in binary
            Console.WriteLine(x8);  // Output: 5 (101 in binary)


            int x9 = 1;  // 0001 in binary
            x9 <<= 2;    // Shift left by 2 positions
            Console.WriteLine(x9);  // Output: 4 (0100 in binary)

            int x10 = 4;  // 0100 in binary
            x10 >>= 2;    // Shift right by 2 positions
            Console.WriteLine(x10);  // Output: 1 (0001 in binary)

            Func<int, int> square = x => x * x;
            Console.WriteLine(square(5));  // Output: 25

            Console.ReadKey();


        }
    }
}
