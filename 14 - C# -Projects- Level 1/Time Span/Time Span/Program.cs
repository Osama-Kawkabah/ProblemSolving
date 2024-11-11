using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // إنشاء كائن DateTime بالتاريخ 21 فبراير 2023
            DateTime dt = new DateTime(2023, 2, 21);

            // إنشاء كائن TimeSpan يمثل 49 ساعة، 25 دقيقة، و 34 ثانية
            TimeSpan ts = new TimeSpan(49, 25, 34);

            // طباعة قيمة TimeSpan
            Console.WriteLine(ts);

            // طباعة عدد الأيام في TimeSpan (يتم حسابها من الساعات الزائدة)
            Console.WriteLine(ts.Days);

            // طباعة عدد الساعات في TimeSpan
            Console.WriteLine(ts.Hours);

            // طباعة عدد الدقائق في TimeSpan
            Console.WriteLine(ts.Minutes);

            // طباعة عدد الثواني في TimeSpan
            Console.WriteLine(ts.Seconds);

            // إضافة TimeSpan إلى كائن DateTime
            DateTime newDate = dt.Add(ts);

            // طباعة التاريخ والوقت الجديد بعد إضافة TimeSpan
            Console.WriteLine(newDate);




            TimeSpan timeSpan1 = new TimeSpan(1, 2, 30, 45, 500); // 1 يوم، 2 ساعات، 30 دقيقة، 45 ثانية، 500 ملي ثانية
            Console.WriteLine("TimeSpan : " + timeSpan1);



            TimeSpan timeSpan2 = new TimeSpan(3, 45, 20); // 3 ساعات، 45 دقيقة، 20 ثانية
            Console.WriteLine("TimeSpan : " + timeSpan2);


            TimeSpan timeSpan3 = new TimeSpan(5, 0, 0, 0); // 5 أيام
            Console.WriteLine("TimeSpan : " + timeSpan3);


            //DateTime now = DateTime.Now;
            //TimeSpan duration = new TimeSpan(1, 12, 0, 0); // 1 يوم و 12 ساعة
            //DateTime newDateTime = now.Add(duration);
            //Console.WriteLine("Current DateTime: " + now);
            //Console.WriteLine("New DateTime: " + newDateTime);


            DateTime now = DateTime.Now;
            TimeSpan duration = new TimeSpan(0, 3, 0, 0); // 3 ساعات
            DateTime newDateTime = now.Subtract(duration);
            Console.WriteLine("Current DateTime: " + now);
            Console.WriteLine("New DateTime: " + newDateTime);



            DateTime startDate = new DateTime(2024, 6, 1);
            DateTime endDate = new DateTime(2024, 6, 21);
            TimeSpan difference = endDate - startDate;
            Console.WriteLine("Difference in Days: " + difference.Days);
            Console.WriteLine("Difference in Hours: " + difference.TotalHours);





            DateTime StartDate = new DateTime(2024, 6, 21);
            DateTime EndDate = new  DateTime(1998, 1, 1); 


            TimeSpan Resart = StartDate - EndDate;


            Console.WriteLine("Days :{0} , Houer : {1}  " , Resart.Days, Resart.TotalHours);




            DateTime dt1 = new DateTime(2023, 2, 20);
            DateTime dt2 = new DateTime(2023, 2, 28);
            TimeSpan result = dt2.Subtract(dt1);

            Console.WriteLine(result.Days);


            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
