using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Array_Declaration
{
    internal class Program
    {
        static void Main(string[] args)
        {

            //string[] arrayName;

            //int[] numbers = new int[] {1,2,3,4,5,6,7,8,9 };


            //for (int i = 0; i < numbers.Length; i++)
            //{
            //    Console.Write(numbers[i] + " ") ;
            //}


            //int[,] matrix = new int[2, 3]
            //{
            //    { 1, 2, 3 },
            //    { 4, 5, 6 }
            //};

            //Console.WriteLine(matrix[0, 1]);  // Output: 2
            //Console.WriteLine(matrix[1, 2]);  // Output: 6



            //// create an array
            //int[] numbers = { 1, 2, 3 };

            ////access first element
            //Console.WriteLine("Element in first index : " + numbers[0]);

            ////access second element
            //Console.WriteLine("Element in second index : " + numbers[1]);

            ////access third element
            //Console.WriteLine("Element in third index : " + numbers[2]);


            ////through loop
            //Console.WriteLine("\nAccess array using loop:\n");
            //for (int i = 0; i < numbers.Length; i++)
            //{
            //    Console.WriteLine("Element in index {0} : {1} ", i, numbers[i]);
            //}




            //initializing 2D array
            int[,] numbers = { { 12, 13 }, { 55, 77 } };

            int[,] numbers2 = { { 12, 13 }, { 55, 77 } };

            // access first element from the first row
            Console.WriteLine("Element at index [0, 0] : " + numbers[0, 0]);

            // access first element from second row
            Console.WriteLine("Element at index [1, 0] : " + numbers[1, 0]);


            //// initializing 2D array
            //int[,] numbers = { { 12, 13 }, { 55, 77 } };

            //// عدد الصفوف (طول الأبعاد الأول)
            //int rows = numbers.GetLength(0);

            //// عدد الأعمدة (طول الأبعاد الثاني)
            //int columns = numbers.GetLength(1);

            //Console.WriteLine("Row: " + rows);
            //Console.WriteLine("Col: " + columns);


            Console.ReadKey();
        }
    }
}
