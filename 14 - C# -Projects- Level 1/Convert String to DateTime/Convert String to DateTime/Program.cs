using System;
using System.Globalization;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var str = "6/12/2023";
            DateTime dt;

            var isValidDate = DateTime.TryParse(str, new System.Globalization.CultureInfo("en-US"), System.Globalization.DateTimeStyles.None, out dt);

            if (isValidDate)
                Console.WriteLine(dt);
            else
                Console.WriteLine($"{str} is not a valid date string");

            var str2 = "6/65/2023";
            DateTime dt2;

            var isValidDate2 = DateTime.TryParse(str2, new System.Globalization.CultureInfo("en-US"), System.Globalization.DateTimeStyles.None, out dt2);

            if (isValidDate2)
                Console.WriteLine(dt2);
            else
                Console.WriteLine($"{str2} is not a valid date string");




            //string dateString = "2023-06-22";
            //DateTime dateTime = DateTime.Parse(dateString);
            //Console.WriteLine(dateTime.ToString()); // يطبع: 6/22/2023 12:00:00 AM

            string dateString = "22/06/2023 14:30:00";
            string format = "dd/MM/yyyy HH:mm:ss";
            DateTime dateTime = DateTime.ParseExact(dateString, format, CultureInfo.InvariantCulture);
            Console.WriteLine(dateTime.ToString()); // يطبع: 6/22/2023 2:30:00 PM


            Console.ReadKey();
        }
    }
}
