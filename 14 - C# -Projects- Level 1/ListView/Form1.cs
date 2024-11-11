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

namespace ListView
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" || textBox2.Text != "" ||
                textBox3.Text != ""|| textBox4.Text != "" ||
                textBox5.Text != "")
            {
            ListViewItem item1 = new ListViewItem(label1.Text);
            item1.SubItems.Add(textBox1.Text);
            item1.SubItems.Add(textBox2.Text);
            item1.SubItems.Add(textBox3.Text);
            item1.SubItems.Add(textBox4.Text);
            item1.SubItems.Add(textBox5.Text);
                listView1.Items.Add(item1);
            }
            else
            {
                MessageBox.Show("Please Inetr Date");
            }


        }
    }
}
