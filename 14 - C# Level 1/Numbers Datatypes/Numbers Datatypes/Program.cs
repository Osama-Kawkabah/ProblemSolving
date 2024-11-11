using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Byte
            byte b1 = 255; // تعريف متغير من النوع byte وتعيين القيمة القصوى له
            //  byte b2 = -128;// خطأ في وقت الترجمة: القيمة الثابتة '-128' لا يمكن تحويلها إلى 'byte'

            sbyte sb1 = -128; // تعريف متغير من النوع sbyte وتعيين القيمة الدنيا له
            sbyte sb2 = 127; // تعريف متغير من النوع sbyte وتعيين القيمة القصوى له

            Console.WriteLine("\nByte:");
            Console.WriteLine("Min={0} , Max={1}", Byte.MinValue, Byte.MaxValue); // عرض القيمة الدنيا والقصوى للنوع byte

            Console.WriteLine("\nSByte:");
            Console.WriteLine("Min={0} , Max={1}", SByte.MinValue, SByte.MaxValue); // عرض القيمة الدنيا والقصوى للنوع sbyte

            //Short
            short s1 = -32768; // تعريف متغير من النوع short وتعيين القيمة الدنيا له
            short s2 = 32767; // تعريف متغير من النوع short وتعيين القيمة القصوى له
            // short s3 = 35000;// خطأ في وقت الترجمة: القيمة الثابتة '35000' لا يمكن تحويلها إلى 'short'

            ushort us1 = 65535; // تعريف متغير من النوع ushort وتعيين القيمة القصوى له
            //  ushort us2 = -32000; // خطأ في وقت الترجمة: القيمة الثابتة '-32000' لا يمكن تحويلها إلى 'ushort'

            Console.WriteLine("\nShort:");
            Console.WriteLine("Min={0} , Max={1}", Int16.MinValue, Int16.MaxValue); // عرض القيمة الدنيا والقصوى للنوع short

            Console.WriteLine("\nUShort:");
            Console.WriteLine("Min={0} , Max={1}", UInt16.MinValue, UInt16.MaxValue); // عرض القيمة الدنيا والقصوى للنوع ushort

            //int
            int i = -2147483648; // تعريف متغير من النوع int وتعيين القيمة الدنيا له
            int j = 2147483647; // تعريف متغير من النوع int وتعيين القيمة القصوى له
            //  int k = 4294967295; // خطأ في وقت الترجمة: لا يمكن تحويل النوع 'uint' إلى 'int' بشكل ضمني

            uint ui1 = 4294967295; // تعريف متغير من النوع uint وتعيين القيمة القصوى له
            // uint ui2 = -1; // خطأ في وقت الترجمة: القيمة الثابتة '-1' لا يمكن تحويلها إلى 'uint'

            Console.WriteLine("\nInt:");
            Console.WriteLine("Min={0} , Max={1}", Int32.MinValue, Int32.MaxValue); // عرض القيمة الدنيا والقصوى للنوع int

            Console.WriteLine("\nUInt:");
            Console.WriteLine("Min={0} , Max={1}", UInt32.MinValue, UInt32.MaxValue); // عرض القيمة الدنيا والقصوى للنوع uint

            //Long
            long l1 = -9223372036854775808; // تعريف متغير من النوع long وتعيين القيمة الدنيا له
            long l2 = 9223372036854775807; // تعريف متغير من النوع long وتعيين القيمة القصوى له

            ulong ul1 = 18223372036854775808ul; // تعريف متغير من النوع ulong وتعيين قيمة كبيرة له باستخدام اللاحقة ul
            ulong ul2 = 18223372036854775808UL; // تعريف متغير من النوع ulong وتعيين نفس القيمة الكبيرة باستخدام اللاحقة UL

            Console.WriteLine("\nLong:");
            Console.WriteLine("Min={0} , Max={1}", Int64.MinValue, Int64.MaxValue); // عرض القيمة الدنيا والقصوى للنوع long

            Console.WriteLine("\nULong:");
            Console.WriteLine("Min={0} , Max={1}", UInt64.MinValue, UInt64.MaxValue); // عرض القيمة الدنيا والقصوى للنوع ulong

            //Float
            float f1 = 123456.5F; // تعريف متغير من النوع float وتعيين قيمة له باستخدام اللاحقة F
            float f2 = 1.123456f; // تعريف متغير من النوع float وتعيين قيمة له باستخدام اللاحقة f

            Console.WriteLine("\nFloat:");
            Console.WriteLine("Min={0} , Max={1}", float.MinValue, float.MaxValue); // عرض القيمة الدنيا والقصوى للنوع float

            //double
            double d1 = 12345678912345.5d; // تعريف متغير من النوع double وتعيين قيمة له باستخدام اللاحقة d
            double d2 = 1.123456789123456d; // تعريف متغير من النوع double وتعيين قيمة له باستخدام اللاحقة d

            Console.WriteLine("\nDouble:");
            Console.WriteLine("Min={0} , Max={1}", double.MinValue, double.MaxValue); // عرض القيمة الدنيا والقصوى للنوع double

            //Decimal
            //النوع decimal لديه دقة أعلى ونطاق أصغر من النوعين float و double،
            //ولذلك فهو مناسب للحسابات المالية والنقدية.
            decimal d3 = 123456789123456789123456789.5m; // تعريف متغير من النوع decimal وتعيين قيمة كبيرة له باستخدام اللاحقة m
            decimal d4 = 1.1234567891345679123456789123m; // تعريف متغير من النوع decimal وتعيين قيمة دقيقة له باستخدام اللاحقة m

            Console.WriteLine("\nDecimal:");
            Console.WriteLine("Min={0} , Max={1}", decimal.MinValue, decimal.MaxValue); // عرض القيمة الدنيا والقصوى للنوع decimal

            //Scientific Notation
            //استخدام e أو E للإشارة إلى قوة 10 كجزء أسّي من الترميز العلمي مع الأنواع float, double أو decimal.
            double d = 0.12e2; // تعريف متغير من النوع double باستخدام الترميز العلمي، يعادل 0.12 * 10^2
            Console.WriteLine(d);  // 12

            float f = 123.45e-2f; // تعريف متغير من النوع float باستخدام الترميز العلمي، يعادل 123.45 * 10^-2
            Console.WriteLine(f);  // 1.2345

            decimal m = 1.2e6m; // تعريف متغير من النوع decimal باستخدام الترميز العلمي، يعادل 1.2 * 10^6
            Console.WriteLine(m);// 1200000

            //hex & Binary
            int hex = 0x2F; // تعريف متغير من النوع int وتعيين قيمة بالنظام الست عشري
            int binary = 0b_0010_1111; // تعريف متغير من النوع int وتعيين قيمة بالنظام الثنائي باستخدام بادئة 0b

            Console.WriteLine(hex); // عرض القيمة الست عشرية
            Console.WriteLine(binary); // عرض القيمة الثنائية


            //  Data Types In C# VS .NET

            //  C#        NET
            //  byte      Byte
            //  sbyte     SByte
            //  short     Int16
            //  ushort    UInt16
            //  int       Int32
            //  uint      UInt32
            //  long      Int64
            //  ulong     UInt64
            //  float     float
            //  double    double
            //  decimal   decimal


            Console.ReadKey(); // انتظار ضغط أي مفتاح لإنهاء البرنامج
        }
    }
}
