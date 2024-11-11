using System;
using System.Globalization;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //// تعيين قيمة افتراضية 01/01/0001 00:00:00
            //DateTime dt1 = new DateTime();

            //// تعيين السنة، الشهر، اليوم
            //DateTime dt2 = new DateTime(2024, 6, 21);

            //// تعيين السنة، الشهر، اليوم، الساعة، الدقيقة، الثانية
            //DateTime dt3 = new DateTime(2024, 6, 21, 4, 49, 20);

            //// تعيين السنة، الشهر، اليوم، الساعة، الدقيقة، الثانية، والمنطقة الزمنية UTC
            //DateTime dt4 = new DateTime(2023, 12, 31, 5, 10, 20, DateTimeKind.Utc);

            //// طباعة القيم المختلفة للكائنات dt1، dt2، dt3، و dt4
            //Console.WriteLine(dt1);
            //Console.WriteLine(dt2);
            //Console.WriteLine(dt3);
            //Console.WriteLine(dt4);

            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق



            //DateTime now = DateTime.Now;
            //Console.WriteLine("Current Date and Time: " + now);



            //DateTime specificDateTime = new DateTime(2024, 6, 21, 14, 30, 0);
            //Console.WriteLine("Specific Date and Time: " + specificDateTime);


            //DateTime today = DateTime.Today;
            //Console.WriteLine("Today's Date: " + today.ToShortDateString());




            //DateTime originalDate = new DateTime(2024, 6, 21);
            //DateTime newDate = originalDate.AddYears(1).AddMonths(2).AddDays(10);
            //Console.WriteLine("Original Date: " + originalDate);
            //Console.WriteLine("New Date: " + newDate);




            //DateTime originalTime = new DateTime(2024, 6, 21, 14, 30, 0);
            //DateTime newTime = originalTime.AddHours(2).AddMinutes(15).AddSeconds(30);
            //Console.WriteLine("Original Time: " + originalTime);
            //Console.WriteLine("New Time: " + newTime);



            //DateTime x = DateTime.Now;
            //string formattedDate = x.ToString("yyyy-MM-dd");
            //Console.WriteLine("Formatted Date: " + formattedDate);


            //DateTime now = DateTime.Now;
            //string formattedDateTime = now.ToString("yyyy-MM-dd HH:mm:ss");
            //Console.WriteLine("Formatted DateTime: " + formattedDateTime);



            //DateTime eventDate = new DateTime(2024, 12, 25, 18, 0, 0);
            //Console.WriteLine("Event Date and Time: " + eventDate.ToString("yyyy-MM-dd HH:mm:ss"));


            //DateTime startDate = new DateTime(2024, 1, 1);
            //DateTime endDate = new DateTime(2024, 12, 31);
            //TimeSpan duration = endDate - startDate;
            //Console.WriteLine("Duration (in days): " + duration.TotalDays);



            //DateTime now = DateTime.Now;
            //DateTime alarmTime = new DateTime(now.Year, now.Month, now.Day, 6, 0, 0); // 6:00 AM

            //if (now > alarmTime)
            //{
            //    alarmTime = alarmTime.AddSeconds(1); // إذا كان الوقت الحالي قد تجاوز المنبه، اضبط المنبه لليوم التالي
            //}

            //Console.WriteLine("Next Alarm Time: " + alarmTime);


            DateTime utcNow = DateTime.UtcNow;
            TimeZoneInfo estZone = TimeZoneInfo.FindSystemTimeZoneById("Eastern Standard Time");
            DateTime estTime = TimeZoneInfo.ConvertTimeFromUtc(utcNow, estZone);

            Console.WriteLine("UTC Time: " + utcNow);
            Console.WriteLine("Eastern Standard Time: " + estTime);








            DateTime Time = DateTime.Now;


            Console.WriteLine(Time.Year);
            Console.WriteLine(Time.Month);
            Console.WriteLine(Time.Day);
            Console.WriteLine(Time.Hour);
            Console.WriteLine(Time.Minute);
            Console.WriteLine(Time.Second);
            Console.WriteLine(Time.Millisecond);


            Console.WriteLine(Time.ToString("yyyy-MM-dd ــ hh:mm:ss"));


            //assigns default value 01/01/0001 00:00:00
            DateTime dt1 = new DateTime();

            dt1 = DateTime.Now;
            Console.WriteLine(dt1);




            //number of 100-nanosecond intervals that have elapsed
            //since January 1, 0001, at 00:00:00.000 in the Gregorian calendar. 

            DateTime dt = new DateTime();
            Console.WriteLine(DateTime.MinValue.Ticks);  //min value of ticks
            Console.WriteLine(DateTime.MaxValue.Ticks); // max value of ticks
            Console.WriteLine(DateTime.MaxValue.Ticks); // max value of ticks

            DateTime now = DateTime.Now;
            Console.WriteLine("Current DateTime: " + now);
            Console.WriteLine("Ticks of Current DateTime: " + now.Ticks);







            Console.ReadKey();
        }
    }
}
