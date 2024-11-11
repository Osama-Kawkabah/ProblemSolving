using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MenuStrip
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Width = 800; // تعيين عرض الفورم بالبكسل
            this.Height = 600; // تعيين ارتفاع الفورم بالبكسل
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
        Form fer = new Form2();

        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {
            fer.MdiParent = this;
            fer.Show();
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog ofd = new OpenFileDialog();
            ofd.Title = "أختار موقع الملف";
            ofd.Multiselect = true;
            ofd.Filter = "Osama Ali |*txt;png";
            ofd.ShowDialog();
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("برنامج بنك أسامة \n مصمم البرنامج :أسامة علي \n  11.2الاصدار ");
        }

        private void ToolMenExit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void الرائسيةToolStripMenuItem1_Click(object sender, EventArgs e)
        {

        }

        private void خروجToolStripMenuItem_Click(object sender, EventArgs e)
        {
            contextMenuStrip1.Close();
        }

        private void تغييرالخلفيةToolStripMenuItem_Click(object sender, EventArgs e)
        {
            colorDialog1.ShowDialog();
            textBox1.BackColor = colorDialog1.Color;
        }

        private void تغييرلونالخطToolStripMenuItem_Click(object sender, EventArgs e)
        {
            colorDialog1.ShowDialog();
            textBox1.ForeColor = colorDialog1.Color;
        }
    }
}
