using System;
using System.Linq;

class Program
{
    static void Main()
    {
        // Note that we used System.Linq above.

        //int[] numbers = { 51, -1, 2, 14, 18, 40, 178 };


        //// العثور على الحد الأدنى
        //// get the minimum element
        //Console.WriteLine("Smallest  Element: " + numbers.Min());

        //// العثور على الحد الأقصى
        //// Max() returns the largest number in array
        //Console.WriteLine("Largest Element: " + numbers.Max());



        //// Note that we used System.Linq above.

        //int[] numbers1 = { 20, 22, 19, 18, 1 };



        //// compute Count
        //Console.WriteLine("Count : " + numbers1.Count());

        //// compute Sum
        //Console.WriteLine("Sum : " + numbers1.Sum());

        //// compute the average
        //Console.WriteLine("Average: " + numbers1.Average());
        //Console.WriteLine("Average: " + numbers1.);

        //int[] numbers = { 12, 13, 55, 77, 4, 89 };

        //// مضاعفة كل رقم في المصفوفة
        //var doubledNumbers = numbers.Select(n => n * 2);

        //Console.WriteLine("Number:");
        //foreach (var number in doubledNumbers)
        //{
        //    Console.Write(number + " ");
        //}



        //int[] numbers = { 12, 13, 55, 77, 4, 89 };

        //// التحقق مما إذا كانت أي من الأرقام أكبر من 80
        //bool anyGreaterThan80 = numbers.Any(n => n > 80);
        //Console.WriteLine("هل هناك أي أرقام أكبر من 80؟ " + anyGreaterThan80);

        //// التحقق مما إذا كانت جميع الأرقام أكبر من 10
        //bool allGreaterThan10 = numbers.All(n => n > 10);
        //Console.WriteLine("هل جميع الأرقام أكبر من 10؟ " + allGreaterThan10);

        int[] numbers1 = { 12, 13, 55 };
        int[] numbers2 = { 55, 77, 89 };

        // دمج مصفوفتين
        var concatenated = numbers1.Concat(numbers2);

        Console.WriteLine("concatenated:");
        foreach (var number in concatenated)
        {
            Console.Write(number + " ");
        }

        // اتحاد مصفوفتين (عناصر فريدة)
        var union = numbers1.Union(numbers2);

        Console.WriteLine("\n Union:");
        foreach (var number in union)
        {
            Console.Write(number + " ");
        }

        // تقاطع مصفوفتين (العناصر المشتركة)
        var intersect = numbers1.Intersect(numbers2);

        Console.WriteLine("\n Intersect:");
        foreach (var number in intersect)
        {
            Console.Write(number + " ");
        }

        // الفرق بين مصفوفتين (العناصر التي توجد في الأولى فقط)
        var except = numbers1.Except(numbers2);

        Console.WriteLine(" \n Except:");
        foreach (var number in except)
        {
            Console.Write(number + " ");
        }

        Console.ReadKey();
    }
}
