using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Please Enter Your Name:");
        string Name = Console.ReadLine();

        Console.WriteLine("Please Enter Your Password:");
        int Password;
        string input = Console.ReadLine();

        // تحويل السلسلة النصية إلى عدد صحيح
        if (int.TryParse(input, out Password))
        {
            Console.WriteLine("Name: " + Name);
            Console.WriteLine("Password: " + Password);
        }
        else
        {
            Console.WriteLine("Invalid input for password. Please enter a valid number.");
        }


        Console.WriteLine("Enter username?");

        string userName = Console.ReadLine();
        Console.WriteLine("Username is: " + userName);

        
        Console.ReadKey();
    }
}
