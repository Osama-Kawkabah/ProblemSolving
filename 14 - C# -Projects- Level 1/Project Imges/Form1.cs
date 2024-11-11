using Project_Imges.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project_Imges
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rdiButBoy_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Boy;
            labelImg.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rdiButGirl_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Girl;
            labelImg.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rdiButBook_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Book;
            labelImg.Text = ((RadioButton)sender).Tag.ToString();
        }

        private void rdiButPen_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Resources.Pen;
            labelImg.Text = ((RadioButton)sender).Tag.ToString();
        }
    }
}
