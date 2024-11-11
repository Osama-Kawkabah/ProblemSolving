// استيراد مكتبة النظام
using System;

namespace Main
{
    // تعريف الكلاس الداخلي Program
    internal class Program
    {
        // الدالة الرئيسية التي يتم تنفيذها عند تشغيل البرنامج
        static void Main(string[] args)
        {
            // تعريف كائن مجهول النوع باستخدام var
            // لم تحدد أي نوع هنا، سيتم تحديد النوع تلقائيًا
            var student = new { Id = 20, FirstName = "Mohammed", LastName = "Abu-Hadhoud" };

            // طباعة مثال 1
            Console.WriteLine("\nExample1:\n");
            // طباعة خاصية Id من الكائن student
            Console.WriteLine(student.Id); // مخرجات: 20
            // طباعة خاصية FirstName من الكائن student
            Console.WriteLine(student.FirstName); // مخرجات: Mohammed
            // طباعة خاصية LastName من الكائن student
            Console.WriteLine(student.LastName); // مخرجات: Abu-Hadhoud

            // يمكن الطباعة بهذه الطريقة أيضًا:
            Console.WriteLine(student);
            // الأنواع المجهولة هي للقراءة فقط
            // لا يمكنك تغيير قيم الخصائص لأنها للقراءة فقط

            // محاولة تغيير قيمة خاصية Id في الكائن student ستؤدي إلى خطأ
            // student.Id = 2; // خطأ: لا يمكن تغيير القيمة
            // محاولة تغيير قيمة خاصية FirstName في الكائن student ستؤدي إلى خطأ
            // student.FirstName = "Ali"; // خطأ: لا يمكن تغيير القيمة

            // يمكن أن تشمل خاصية النوع المجهول نوعًا مجهولًا آخر كخاصية
            var student2 = new
            {
                Id = 20,
                FirstName = "Mohammed",
                LastName = "Abu-Hadhoud",
                // تعريف خاصية Address كنوع مجهول آخر
                Address = new { Id = 1, City = "Amman", Country = "Jordan" }
            };

            // طباعة مثال 2
            Console.WriteLine("\nExample2:\n");
            // طباعة خاصية Id من الكائن student2
            Console.WriteLine(student2.Id);
            // طباعة خاصية FirstName من الكائن student2
            Console.WriteLine(student2.FirstName);
            // طباعة خاصية LastName من الكائن student2
            Console.WriteLine(student2.LastName);

            // طباعة خاصية Id من الخاصية Address في الكائن student2
            Console.WriteLine(student2.Address.Id);
            // طباعة خاصية City من الخاصية Address في الكائن student2
            Console.WriteLine(student2.Address.City);
            // طباعة خاصية Country من الخاصية Address في الكائن student2
            Console.WriteLine(student2.Address.Country);
            // طباعة الكائن Address ككل
            Console.WriteLine(student2.Address);

            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
