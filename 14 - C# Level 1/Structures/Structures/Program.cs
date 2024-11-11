// استيراد مكتبة النظام
using System;

namespace Main
{
    // تعريف الكلاس الداخلي Program
    internal class Program
    {
        // تعريف هيكل بيانات للطالب
        struct stStudent
        {
            // تعريف خصائص الهيكل: الاسم الأول والاسم الأخير
            public string FirstName;
            public string LastName;
            internal int Age;         // يمكن الوصول إليها من نفس التجميع (assembly)

            // طريقة للحصول على الاسم الكامل
            public string GetFullName()
            {
                return $"{FirstName} {LastName}";
            }

            // طريقة لتعيين الاسم الأخير (يمكن استدعاؤها داخل struct فقط)
            public void SetLastName(string lastName)
            {
                LastName = lastName;
            }
        }

        // الدالة الرئيسية التي يتم تنفيذها عند تشغيل البرنامج
        static void Main(string[] args)
        {
            // يمكن إنشاء كائن هيكل باستخدام أو بدون استخدام المشغل new
            // نفس الشيء ينطبق على المتغيرات ذات الأنواع البدائية

            // إنشاء كائن من الهيكل stStudent بدون استخدام المشغل new
            stStudent Student;
            // إنشاء كائن من الهيكل stStudent باستخدام المشغل new
            stStudent Student2 = new stStudent();

            // تعيين القيم للخصائص في الكائن Student
            Student.FirstName = "Osama Ali";
            Student.LastName = "Abu-Mohammed";
            Student.Age =26;
            Student.SetLastName("Osama Sniper");

            // طباعة قيم الخصائص في الكائن Student
            Console.WriteLine(Student.FirstName);
            Console.WriteLine(Student.FirstName);
            Console.WriteLine(Student.LastName);

            // تعيين القيم للخصائص في الكائن Student2
            Student2.FirstName = "Ali";
            Student2.LastName = "Ahmed";

            // طباعة قيم الخصائص في الكائن Student2
            Console.WriteLine(Student2.FirstName);
            Console.WriteLine(Student2.LastName);
            Console.WriteLine(Student2.GetFullName());
            Console.WriteLine(Student2.Age);

            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
