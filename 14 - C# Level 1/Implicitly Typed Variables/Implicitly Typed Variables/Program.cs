using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {

            /* Implicitly typed variables
             Alternatively in C#, we can declare a variable without knowing 
             its type using var keyword. 
             Such variables are called implicitly typed local variables.

             Variables declared using var keyword must be initialized at the time of declaration.
            */

            var number = 10; // المترجم يحدد نوع المتغير كـ int
            var name = "Osama"; // المترجم يحدد نوع المتغير كـ string
            var isActive = true; // المترجم يحدد نوع المتغير كـ bool


            var x = 10;
            var y = 10.5;
            var z = "Mohammed";

            Console.WriteLine("number = {0}\nisActive = {1}\nName = {2} ", number, isActive, name);

            Console.ReadKey();

        }
    }
}

