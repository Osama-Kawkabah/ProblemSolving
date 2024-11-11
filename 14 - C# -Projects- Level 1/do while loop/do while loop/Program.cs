using System;

namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {

            int i = 1;
            do
            {
                Console.WriteLine("C# while Loop: Iteration {0}", i);
                i++;

            } while (i <= 5);




            int Num = 0;

            do
            {
                Console.WriteLine(Num);
                Num++;

            } while (Num <= 10);




            int w = 1;
            do
            {

                Console.WriteLine("C# while Loop: Iteration {0}", i);

                if (w == 3)
                    break;

                w++;

            } while (w <= 5);



            for (int v = 1; v <= 5; ++v)
            {

                if (v == 3)
                {
                    continue;
                }

                Console.WriteLine(v);
            }



            Console.ReadKey();

        }
    }
}
