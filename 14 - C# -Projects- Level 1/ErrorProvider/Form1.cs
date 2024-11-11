using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace ErrorProvider
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
        }

        private void textBox1_Validating(object sender, CancelEventArgs e)
        {

            if (string.IsNullOrWhiteSpace(textBox1.Text))
            {
                e.Cancel = true;
                errorProvider1.SetError(textBox1, "يجب عليك تعبية البيانات");
            }
            else
            {
                e.Cancel = false;
                errorProvider1.SetError(textBox1, "");
            }
        }

        private void textBox3_Validating(object sender, CancelEventArgs e)
        {
            if (string.IsNullOrWhiteSpace(textBox3.Text))
            {
                e.Cancel = true;
                errorProvider1.SetError(textBox3, "يجب عليك تعبية البيانات");
            }
            else
            {
                e.Cancel = false;
                errorProvider1.SetError(textBox3, "");
            }

        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            label4.Text =trackBar1.Value.ToString();
            //trackBar1.TickStyle = TickStyle.BottomRight; // العلامات في الأسفل أو اليمين
            trackBar1.TickStyle = TickStyle.TopLeft; // العلامات في الأعلى أو اليسار
            //trackBar1.TickStyle = TickStyle.Both; // العلامات في كلا الجانبين
            //trackBar1.TickStyle = TickStyle.None; // بدون علامات
            trackBar1.TickStyle = TickStyle.BottomRight; // العلامات في الأعلى أو اليسار
            trackBar1.AutoSize = true; // التغيير التلقائي للحجم



        }

        private void trackBar1_VisibleChanged(object sender, EventArgs e)
        {

        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            numericUpDown1.DecimalPlaces = 3;
            label5.Text = numericUpDown1.Value.ToString() + "%"; 
            numericUpDown1.ThousandsSeparator = true;

        }

        private void numericUpDown1_KeyUp(object sender, KeyEventArgs e)
        {
          
        }

        private void numericUpDown1_MouseUp(object sender, MouseEventArgs e)
        {

        }

        private void tabPage1_Click(object sender, EventArgs e)
        {

        }

        private void tabPage2_Click(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedTab = tabPage2;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            tabControl1.SelectedTab = tabPage5;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            colorDialog1.CustomColors = new int[] { 0xFF0000, 0x00FF00, 0x0000FF }; // أحمر، أخضر، أزرق
            colorDialog1.SolidColorOnly = true;

            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox10.BackColor = colorDialog1.Color;
            }
        
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox10.ForeColor = colorDialog1.Color;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                this.BackColor = colorDialog1.Color;
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {

            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                this.ForeColor = colorDialog1.Color;
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.OK)
            {
                tabPage5.BackColor = colorDialog1.Color;
                button7.BackColor = colorDialog1.Color;
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            fontDialog1.ShowApply = true;
            fontDialog1.ShowEffects = true;
            fontDialog1.ShowColor = true;
            fontDialog1.ShowHelp = true;

            fontDialog1.Font = textBox10.Font;
            fontDialog1.ScriptsOnly = false;


            if (fontDialog1.ShowDialog() == DialogResult.OK)
            {
                textBox10.Font = fontDialog1.Font;
                textBox10.ForeColor = fontDialog1.Color; // تغيير لون النص هنا
            }
        }

        private void fontDialog1_Apply(object sender, EventArgs e)
        {
            textBox10.Font = fontDialog1.Font;
            textBox10.ForeColor = fontDialog1.Color; // وهنا أيضًا
        }

        private void fontDialog1_HelpRequest(object sender, EventArgs e)
        {
            fontDialog1.ShowHelp = true;

            fontDialog1.HelpRequest += new EventHandler(fontDialog1_HelpRequest);

                MessageBox.Show("This is a font selection dialog. Choose your font settings and click OK.");

        }
    }
}
