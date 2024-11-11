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

namespace ListView_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            ListViewItem item = new ListViewItem(textBox1.Text);

            if (textBox1.Text != "" && textBox2.Text != "" &&
                textBox3.Text != "" && textBox4.Text != "" &&
                textBox5.Text != "")
            {
                item.SubItems.Add(textBox2.Text);
                item.SubItems.Add(textBox3.Text);
                item.SubItems.Add(textBox4.Text);
                item.SubItems.Add(textBox5.Text);
                listView1.Items.Add(item);
            }
            else
            {
                MessageBox.Show("Please Inter Date ?");
            }

            textBox1.Text ="";
            textBox2.Text ="";
            textBox3.Text ="";
            textBox4.Text ="";
            textBox5.Text = "";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
