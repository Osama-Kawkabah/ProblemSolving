using System;

namespace Variables
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string Text = "Osama Ali Yahya Haseen Kokabah";

            int Num1 = 10, Num2 = 10;

            Console.WriteLine(Text);
            Console.WriteLine(Num1 * Num2);

            bool @Check = true;

            if (@Check == false)
            {
                Console.WriteLine(Text);
            }
            else
            {
                Console.WriteLine(Num1 * Num2);
            }

            // نقل Console.ReadKey() إلى نهاية الكود
            Console.ReadKey();
        }
    }
}
