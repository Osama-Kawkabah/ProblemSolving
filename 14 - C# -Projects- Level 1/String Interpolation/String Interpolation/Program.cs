using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // تعريف المتغيرات النصية
            string firstName = "Mohammed";
            string lastName = "Abu-Hadhoud";
            string code = "107";

            // استخدام التضمين النصي لدمج المتغيرات مع النص الثابت
            string fullName = $"Mr. {firstName} {lastName}, Code: {code}";

            // طباعة السلسلة النصية المدمجة
            Console.WriteLine(fullName);

            Console.ReadKey();
        }
    }
}
