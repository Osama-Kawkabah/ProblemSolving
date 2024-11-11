using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // الحصول على التاريخ والوقت الحاليين بالتوقيت المحلي
            DateTime currentDateTime = DateTime.Now;

            // الحصول على تاريخ اليوم الحالي بدون الوقت (00:00:00)
            DateTime todaysDate = DateTime.Today;

            // الحصول على التاريخ والوقت الحاليين بالتوقيت العالمي (UTC)
            DateTime currentDateTimeUTC = DateTime.UtcNow;

            // الحصول على قيمة الوقت/التاريخ الأقصى المسموح به في DateTime
            DateTime maxDateTimeValue = DateTime.MaxValue;

            // الحصول على قيمة الوقت/التاريخ الأدنى المسموح به في DateTime
            DateTime minDateTimeValue = DateTime.MinValue;

            // طباعة قيم الأوقات والتواريخ المختلفة
            Console.WriteLine("currentDateTime: " + currentDateTime);
            Console.WriteLine("Today: " + todaysDate);
            Console.WriteLine("currentDateTimeUTC: " + currentDateTimeUTC);
            Console.WriteLine("minDateTimeValue: " + minDateTimeValue);
            //Console.WriteLine("Min DateTime Value: " + minDateTimeValue);


            DateTime minDateTime = DateTime.MinValue;
            Console.WriteLine("Minimum DateTime: " + minDateTime);


            DateTime utcDateTime = DateTime.UtcNow;
            Console.WriteLine("UTC DateTime: " + utcDateTime);


            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
