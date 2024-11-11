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
            // تعريف متغير ديناميكي يمكن تغيير نوعه وقيمته في وقت التشغيل
            dynamic MyDynamicVar = 100;
            // طباعة قيمة ونوع المتغير MyDynamicVar
            Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

            // تغيير قيمة المتغير MyDynamicVar إلى نص
            MyDynamicVar = "Hello World!!";
            // طباعة قيمة ونوع المتغير MyDynamicVar
            Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

            // تغيير قيمة المتغير MyDynamicVar إلى قيمة منطقية
            MyDynamicVar = true;
            // طباعة قيمة ونوع المتغير MyDynamicVar
            Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

            // تغيير قيمة المتغير MyDynamicVar إلى التاريخ والوقت الحاليين
            MyDynamicVar = DateTime.Now;
            // طباعة قيمة ونوع المتغير MyDynamicVar
            Console.WriteLine("Value: {0}, Type: {1}", MyDynamicVar, MyDynamicVar.GetType());

            // انتظار أي مفتاح من المستخدم لإغلاق التطبيق
            Console.ReadKey();
        }
    }
}
