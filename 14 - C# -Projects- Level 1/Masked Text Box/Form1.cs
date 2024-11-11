using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Masked_Text_Box
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // إعداد MaskedTextBox عند تحميل النموذج
            maskedTextBox1.Mask = "+000 000 0000000";
            maskedTextBox1.MaskInputRejected += new MaskInputRejectedEventHandler(maskedTextBox1_MaskInputRejected);
            maskedTextBox1.TextChanged += new EventHandler(maskedTextBox1_TextChanged);
        }

        private void maskedTextBox1_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {
            // يمكنك التعامل مع الحدث هنا إذا لزم الأمر
        }

        private void maskedTextBox1_TextChanged(object sender, EventArgs e)
        {
            string input = maskedTextBox1.Text;

            // التحقق من طول رمز الدولة وتحديث القناع وفقًا لذلك
            if (input.StartsWith("+") && input.Length <= 4)
            {
                if (input.Length == 4) // إذا تم إدخال رمز الدولة بالكامل
                {
                    maskedTextBox1.Mask = "+000 000 0000000";
                }
                else
                {
                    maskedTextBox1.Mask = "+000 000 0000000".Substring(0, 1 + input.Length) + " 000 0000000";
                }
            }
            else if (input.Length > 4) // بعد إدخال رمز الدولة
            {
                maskedTextBox1.Mask = "+000 000 0000000";
            }
        }

        private void maskedTextBox1_MaskInputRejected_1(object sender, MaskInputRejectedEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            MaskedTextBox maskedTextBox = new MaskedTextBox();
            maskedTextBox1.Mask = "999-00-0000"; // قناع لإدخال رقم الضمان الاجتماعي مع أرقام اختيارية

            // التحقق مما إذا كانت جميع العناصر (المطلوبة والاختيارية) قد تم تعبئتها
            bool isFull = maskedTextBox.MaskFull;
            if (isFull)
            {
                MessageBox.Show("All elements in the mask are filled.");
            }
            else
            {
                MessageBox.Show("Some elements in the mask are missing.");
            }

        }
    }
}
