using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string S1 = "Osama Abu-Mohammed";

            // طباعة طول السلسلة S1
            Console.WriteLine(S1.Length);

            // استخدام Substring لاستخراج جزء من السلسلة
            // يبدأ من الموقع 2 ويأخذ 5 أحرف
            Console.WriteLine(S1.Substring(2, 5));

            // تحويل السلسلة إلى حروف صغيرة وطباعتها
            Console.WriteLine(S1.ToLower());

            // تحويل السلسلة إلى حروف كبيرة وطباعتها
            Console.WriteLine(S1.ToUpper());

            // طباعة الحرف في الموقع 2 من السلسلة S1
            Console.WriteLine(S1[2]);

            // إدخال سلسلة جديدة "KKKK" في الموقع 3 من السلسلة S1 وطباعتها
            Console.WriteLine(S1.Insert(3, "KKKK"));

            // استبدال حرف "m" برمز "*" في السلسلة S1 وطباعتها
            Console.WriteLine(S1.Replace("m", "*"));

            // البحث عن أول حرف "O" في السلسلة S1 وطباعة موقعه
            Console.WriteLine(S1.IndexOf("O"));

            // التحقق مما إذا كانت السلسلة S1 تحتوي على حرف "m" وطباعة النتيجة
            Console.WriteLine(S1.Contains("m"));

            // التحقق مما إذا كانت السلسلة S1 تحتوي على حرف "x" وطباعة النتيجة
            Console.WriteLine(S1.Contains("x"));

            // البحث عن آخر حرف "e" في السلسلة S1 وطباعة موقعه
            Console.WriteLine(S1.LastIndexOf("e"));

            string S2 = "Ali,Ahmed,Khalid";

            // تقسيم السلسلة S2 إلى مصفوفة من الأسماء باستخدام الفاصلة كمحدد
            string[] NamesList = S2.Split(',');

            // طباعة الأسماء الموجودة في المصفوفة NamesList
            Console.WriteLine(NamesList[0]);
            Console.WriteLine(NamesList[1]);
            Console.WriteLine(NamesList[2]);

            string S3 = "  Abu-Mohammed  ";

            // إزالة الفراغات الزائدة من السلسلة S3 وطباعتها
            Console.WriteLine(S3.Trim());

            // إزالة الفراغات الزائدة من بداية السلسلة S3 وطباعتها
            Console.WriteLine(S3.TrimStart());

            // إزالة الفراغات الزائدة من نهاية السلسلة S3 وطباعتها
            Console.WriteLine(S3.TrimEnd());

            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
