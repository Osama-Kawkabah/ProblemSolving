using More_about_TextBox_Focus_MaxLength__Password_RightToLeft__Locked_Multiline_WordWrap.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Resources;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace More_about_TextBox_Focus_MaxLength__Password_RightToLeft__Locked_Multiline_WordWrap
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile(@"C:\Users\OsamaAli\Downloads\Img\1078985.jpg");

        }

        private void button2_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.R;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            pictureBox1.Image= Resources.pexels;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.RE4wwuj;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            button4.Focus();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.pexels;
        }
    }
}
