using System;


namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {


            Console.WriteLine("Max of 5, 10 is: {0}", Math.Max(5, 10));
            Console.WriteLine("Min of 5, 10 is: {0}", Math.Min(5, 10));
            Console.WriteLine("Squir Root of 64 is: {0}", Math.Sqrt(64));
            Console.WriteLine("Absolute (positive) value of  -4.7 is: {0}", Math.Abs(-4.7));
            Console.WriteLine("Round of 9.99 is: {0}", Math.Round(9.99));



            //------------------------------------------------

            double number1 = -23.45;
            double number2 = 34.56;
            double baseNum = 2;
            double exponent = 3;

            // القيمة المطلقة
            Console.WriteLine("القيمة المطلقة: " + Math.Abs(number1));

            // أكبر قيمة
            Console.WriteLine("أكبر قيمة: " + Math.Max(number1, number2));

            // أصغر قيمة
            Console.WriteLine("أصغر قيمة: " + Math.Min(number1, number2));

            // الأس
            Console.WriteLine("الأس: " + Math.Pow(baseNum, exponent));

            // الجذر التربيعي
            Console.WriteLine("الجذر التربيعي: " + Math.Sqrt(number2));

            //------------------------------------------------
                double angle = Math.PI / 4; // 45 degrees

                // الجيب
                Console.WriteLine("الجيب: " + Math.Sin(angle));

                // جيب التمام
                Console.WriteLine("جيب التمام: " + Math.Cos(angle));

                // الظل
                Console.WriteLine("الظل: " + Math.Tan(angle));

                // القوس الجيبي
                Console.WriteLine("القوس الجيبي: " + Math.Asin(1));

                // قوس جيب التمام
                Console.WriteLine("قوس جيب التمام: " + Math.Acos(0));

                // قوس الظل
                Console.WriteLine("قوس الظل: " + Math.Atan(1));
            //------------------------------------------------
            double number = 10;

            // اللوغاريتم الطبيعي
            Console.WriteLine("اللوغاريتم الطبيعي: " + Math.Log(number));

            // اللوغاريتم العشري
            Console.WriteLine("اللوغاريتم العشري: " + Math.Log10(number));

            // الأس الطبيعي
            Console.WriteLine("الأس الطبيعي: " + Math.Exp(2));
            //------------------------------------------------
            double number6 = 23.56;

            // تقريب العدد للأعلى
            Console.WriteLine("تقريب العدد للأعلى: " + Math.Ceiling(number6));

            // تقريب العدد للأسفل
            Console.WriteLine("تقريب العدد للأسفل: " + Math.Floor(number6));

            // تقريب العدد لأقرب عدد صحيح
            Console.WriteLine("تقريب العدد: " + Math.Round(number6));


            //------------------------------------------------
            Random rand = new Random();

            // عدد صحيح عشوائي
            Console.WriteLine("عدد صحيح عشوائي: " + rand.Next());

            // عدد صحيح عشوائي ضمن مدى محدد
            Console.WriteLine("عدد صحيح عشوائي بين 1 و 100: " + rand.Next(1, 100));

            // عدد عشري عشوائي
            Console.WriteLine("عدد عشري عشوائي: " + rand.NextDouble());
            //------------------------------------------------

            Console.ReadKey();

        }
    }
}
