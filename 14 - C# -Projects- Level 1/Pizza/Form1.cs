using System; // استيراد مكتبة النظام الأساسية
using System.Collections.Generic; // استيراد مكتبة المجموعات العامة
using System.ComponentModel; // استيراد مكتبة مكونات النظام
using System.Data; // استيراد مكتبة التعامل مع البيانات
using System.Drawing; // استيراد مكتبة الرسومات
using System.Linq; // استيراد مكتبة LINQ للاستعلامات
using System.Runtime.Remoting.Messaging; // استيراد مكتبة الرسائل عن بُعد
using System.Text; // استيراد مكتبة التعامل مع النصوص
using System.Threading.Tasks; // استيراد مكتبة التعامل مع المهام غير المتزامنة
using System.Windows.Forms; // استيراد مكتبة عناصر التحكم في النوافذ

namespace Pizza // تعريف مساحة الاسم الخاصة بتطبيق البيتزا
{
    public partial class Form1 : Form // تعريف صنف Form1 الذي يرث من الصنف Form
    {
        public Form1() // الدالة البانية لصنف Form1
        {
            InitializeComponent(); // تهيئة مكونات النموذج
        }

        // تحديث حجم البيتزا المختار وتحديث السعر الإجمالي
        void UpdateSize()
        {
            UpdateTotalPrice(); // تحديث السعر الإجمالي

            if (rbSamll.Checked) // إذا كان حجم البيتزا صغيرًا محددًا
            {
                lblSize.Text = "Small"; // تعيين النص إلى "Small" لعرض الحجم
                return; // إنهاء الدالة
            }

            if (rbMedium.Checked) // إذا كان حجم البيتزا متوسطًا محددًا
            {
                lblSize.Text = "Medium"; // تعيين النص إلى "Medium" لعرض الحجم
                return; // إنهاء الدالة
            }

            if (rbLarge.Checked) // إذا كان حجم البيتزا كبيرًا محددًا
            {
                lblSize.Text = "Large"; // تعيين النص إلى "Large" لعرض الحجم
                return; // إنهاء الدالة
            }
        }

        // تحديث الإضافات المختارة وتحديث السعر الإجمالي
        void UpdateToppings()
        {
            UpdateTotalPrice(); // تحديث السعر الإجمالي

            string sToppings = ""; // سلسلة لتخزين الإضافات المختارة

            if (chkExtraChees.Checked) // إذا كانت إضافة الجبن الإضافي محددة
            {
                sToppings = "Extra Chees"; // تعيين النص إلى "Extra Chees"
            }

            if (chkOnion.Checked) // إذا كانت إضافة البصل محددة
            {
                sToppings += ", Onion"; // إضافة "Onion" إلى النص الحالي للإضافات
            }

            if (chkMushrooms.Checked) // إذا كانت إضافة الفطر محددة
            {
                sToppings += ", Mushrooms"; // إضافة "Mushrooms" إلى النص الحالي للإضافات
            }

            if (chkOlives.Checked) // إذا كانت إضافة الزيتون محددة
            {
                sToppings += ", Olives"; // إضافة "Olives" إلى النص الحالي للإضافات
            }

            if (chkTomatos.Checked) // إذا كانت إضافة الطماطم محددة
            {
                sToppings += ", Tomatos"; // إضافة "Tomatos" إلى النص الحالي للإضافات
            }

            if (chkGreenPeppers.Checked) // إذا كانت إضافة الفلفل الأخضر محددة
            {
                sToppings += ", Green Peppars"; // إضافة "Green Peppars" إلى النص الحالي للإضافات
            }

            if (sToppings.StartsWith(",")) // إذا كانت النص يبدأ بفاصلة
            {
                sToppings = sToppings.Substring(1, sToppings.Length - 1).Trim(); // إزالة الفاصلة الأولى والمسافات الزائدة
            }

            if (sToppings == "") // إذا لم يتم اختيار أي إضافة
                sToppings = "No Toppings"; // تعيين النص إلى "No Toppings"

            lblToppings.Text = sToppings; // تعيين النص النهائي إلى ملصق الإضافات
        }

        // تحديث نوع العجينة وتحديث السعر الإجمالي
        void UpdateCrust()
        {
            UpdateTotalPrice(); // تحديث السعر الإجمالي

            if (rbThinCrust.Checked) // إذا كانت العجينة الرقيقة محددة
            {
                lblCrustType.Text = "Think Crust"; // تعيين النص إلى "Think Crust"
                return; // إنهاء الدالة
            }

            if (rbThickCrust.Checked) // إذا كانت العجينة السميكة محددة
            {
                lblCrustType.Text = "Thick Crust"; // تعيين النص إلى "Thick Crust"
                return; // إنهاء الدالة
            }
        }

        // تحديث مكان تناول البيتزا وتحديث السعر الإجمالي
        void UpdateWhereToEat()
        {
            UpdateTotalPrice(); // تحديث السعر الإجمالي

            if (rbEatIn.Checked) // إذا كان خيار تناول الطعام في المطعم محددًا
            {
                lblWhereToEat.Text = "Eat In."; // تعيين النص إلى "Eat In."
                return; // إنهاء الدالة
            }

            if (rbTakeOut.Checked) // إذا كان خيار الأكل بالخارج محددًا
            {
                lblWhereToEat.Text = "Take Out."; // تعيين النص إلى "Take Out."
                return; // إنهاء الدالة
            }
        }

        // استرجاع سعر الحجم المختار
        float GetSelectedSizePrice()
        {
            if (rbSamll.Checked) // إذا كان الحجم الصغير محددًا
                return Convert.ToSingle(rbSamll.Tag); // استرجاع السعر من الخاصية Tag وتحويله إلى عدد عشري
            else if (rbMedium.Checked) // إذا كان الحجم المتوسط محددًا
                return Convert.ToSingle(rbMedium.Tag); // استرجاع السعر من الخاصية Tag وتحويله إلى عدد عشري
            else // إذا كان الحجم الكبير محددًا
                return Convert.ToSingle(rbLarge.Tag); // استرجاع السعر من الخاصية Tag وتحويله إلى عدد عشري
        }

        // حساب سعر الإضافات المختارة
        float CalculateToppingsPrice()
        {
            float ToppingsTotalPrice = 0; // متغير لتخزين السعر الإجمالي للإضافات

            if (chkExtraChees.Checked) // إذا كانت إضافة الجبن الإضافي محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkExtraChees.Tag); // إضافة السعر إلى المجموع
            }

            if (chkOnion.Checked) // إذا كانت إضافة البصل محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkOnion.Tag); // إضافة السعر إلى المجموع
            }

            if (chkMushrooms.Checked) // إذا كانت إضافة الفطر محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkMushrooms.Tag); // إضافة السعر إلى المجموع
            }

            if (chkOlives.Checked) // إذا كانت إضافة الزيتون محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkOlives.Tag); // إضافة السعر إلى المجموع
            }

            if (chkTomatos.Checked) // إذا كانت إضافة الطماطم محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkTomatos.Tag); // إضافة السعر إلى المجموع
            }

            if (chkGreenPeppers.Checked) // إذا كانت إضافة الفلفل الأخضر محددة
            {
                ToppingsTotalPrice += Convert.ToSingle(chkTomatos.Tag); // إضافة السعر إلى المجموع
            }

            return ToppingsTotalPrice; // إرجاع السعر الإجمالي للإضافات
        }

        // استرجاع سعر العجينة المختارة
        float GetSelectedCrutPrice()
        {
            if (rbThinCrust.Checked) // إذا كانت العجينة الرقيقة محددة
                return Convert.ToSingle(rbThinCrust.Tag); // استرجاع السعر من الخاصية Tag وتحويله إلى عدد عشري
            else // إذا كانت العجينة السميكة محددة
                return Convert.ToSingle(rbThickCrust.Tag); // استرجاع السعر من الخاصية Tag وتحويله إلى عدد عشري
        }

        // حساب السعر الإجمالي
        float CalculateTotalPrice()
        {
            return GetSelectedSizePrice() + CalculateToppingsPrice() + GetSelectedCrutPrice(); // جمع أسعار الحجم والإضافات والعجينة
        }

        // تحديث السعر الإجمالي
        void UpdateTotalPrice()
        {
            lblTotalPrice.Text = "$" + CalculateTotalPrice().ToString(); // تحديث نص الملصق بالسعر الإجمالي
        }

        // تحديث ملخص الطلب
        void UpdateOrderSummary()
        {
            UpdateSize(); // تحديث الحجم
            UpdateToppings(); // تحديث الإضافات
            UpdateCrust(); // تحديث العجينة
            UpdateWhereToEat(); // تحديث مكان الأكل
            UpdateTotalPrice(); // تحديث السعر الإجمالي
        }

        // إعادة ضبط النموذج
        void ResetForm()
        {
            // إعادة تفعيل مجموعات الخيارات
            gbSize.Enabled = true;
            gbToppings.Enabled = true;
            gbCrustType.Enabled = true;
            gbWhereToEat.Enabled = true;

            // إعادة ضبط حجم البيتزا إلى الوسط
            rbMedium.Checked = true;

            // إعادة ضبط الإضافات
            chkExtraChees.Checked = false;
            chkOnion.Checked = false;
            chkMushrooms.Checked = false;
            chkOlives.Checked = false;
            chkTomatos.Checked = false;
            chkGreenPeppers.Checked = false;

            // إعادة ضبط نوع العجينة إلى الرقيقة
            rbThinCrust.Checked = true;

            // إعادة ضبط مكان الأكل إلى تناول الطعام في المطعم
            rbEatIn.Checked = true;

            // إعادة تفعيل زر طلب البيتزا
            btnOrderPizza.Enabled = true;
        }

        // حدث عند الضغط على زر طلب البيتزا
        private void btnOrderPizza_Click(object sender, EventArgs e)
        {
            // عرض رسالة تأكيد الطلب
            if (MessageBox.Show("Confirm Order", "Confirm",
                MessageBoxButtons.OKCancel, MessageBoxIcon.Question) == DialogResult.OK)
            {
                // إذا تم تأكيد الطلب، عرض رسالة النجاح
                MessageBox.Show("Order Placed Successfully", "Success",
                    MessageBoxButtons.OK, MessageBoxIcon.Information);

                // تعطيل زر الطلب والمجموعات بعد تأكيد الطلب
                btnOrderPizza.Enabled = false;
                gbSize.Enabled = false;
                gbToppings.Enabled = false;
                gbCrustType.Enabled = false;
                gbWhereToEat.Enabled = false;
            }
            else
                // إذا لم يتم تأكيد الطلب، عرض رسالة التحديث
                MessageBox.Show("Update your order", "Update",
                    MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
        }

        // حدث عند تغيير الحجم إلى متوسط
        private void rbMedium_CheckedChanged(object sender, EventArgs e)
        {
            UpdateSize(); // تحديث الحجم
        }

        // حدث عند تغيير الحجم إلى كبير
        private void rbLarge_CheckedChanged(object sender, EventArgs e)
        {
            UpdateSize(); // تحديث الحجم
        }

        // حدث عند تغيير الحجم إلى صغير
        private void rbSamll_CheckedChanged(object sender, EventArgs e)
        {
            UpdateSize(); // تحديث الحجم
        }

        // حدث عند تغيير اختيار الجبن الإضافي
        private void chkExtraChees_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير اختيار البصل
        private void chkOnion_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير اختيار الفطر
        private void chkMushrooms_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير اختيار الزيتون
        private void chkOlives_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير اختيار الطماطم
        private void chkTomatos_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير اختيار الفلفل الأخضر
        private void chckGreenPeppers_CheckedChanged(object sender, EventArgs e)
        {
            UpdateToppings(); // تحديث الإضافات
        }

        // حدث عند تغيير نوع العجينة إلى الرقيقة
        private void rbThinCrust_CheckedChanged(object sender, EventArgs e)
        {
            UpdateCrust(); // تحديث العجينة
        }

        // حدث عند تغيير نوع العجينة إلى السميكة
        private void rbThickCrust_CheckedChanged(object sender, EventArgs e)
        {
            UpdateCrust(); // تحديث العجينة
        }

        // حدث عند تغيير خيار تناول الطعام في المطعم
        private void rbEatIn_CheckedChanged(object sender, EventArgs e)
        {
            UpdateWhereToEat(); // تحديث مكان الأكل
        }

        // حدث عند تغيير خيار تناول الطعام بالخارج
        private void rbTakeOut_CheckedChanged(object sender, EventArgs e)
        {
            UpdateWhereToEat(); // تحديث مكان الأكل
        }

        // حدث عند تحميل النموذج
        private void Form1_Load(object sender, EventArgs e)
        {
            UpdateOrderSummary(); // تحديث ملخص الطلب
        }

        // حدث عند الضغط على زر إعادة ضبط النموذج
        private void btnResetForm_Click(object sender, EventArgs e)
        {
            ResetForm(); // إعادة ضبط النموذج
        }
    }
}
