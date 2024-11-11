using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int[] myNumbers = { 1, 2, 3 };
                Console.WriteLine(myNumbers[10]);
            }
            catch (IndexOutOfRangeException ex)
            {
                Console.WriteLine("Index out of range error: " + ex.Message);
            }
            catch (Exception ex)
            {
                Console.WriteLine("An error occurred: " + ex.Message);
            }
            finally
            {
                Console.WriteLine("Execution finished.");
            }

            Console.ReadLine();
        }
    }
}
