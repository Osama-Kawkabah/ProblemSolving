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
using System.Xml.Linq;

namespace Project_ListView_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            // أكواد لإدارة عملية الإغلاق
            if (MessageBox.Show("Are you sure you want to close?", "Confirm", MessageBoxButtons.YesNo) == DialogResult.No)
            {
                e.Cancel = true;
            }
        }

        private void butAdd_Click(object sender, EventArgs e)
        {

            if (string.IsNullOrEmpty(texID.Text) || string.IsNullOrEmpty(texName.Text))
                return;


            ListViewItem item = new ListViewItem(texID.Text.Trim());
            if (radioButton7.Checked)
                item.ImageIndex = 1;
            else
                item.ImageIndex = 0;


            item.SubItems.Add(texName.Text.Trim());
            liV.Items.Add(item);

            texID.Clear();
            texName.Clear();
            texID.Focus();

        }

        private void liV_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void butRemove_Click(object sender, EventArgs e)
        {
            if (liV.Items.Count > 0)
            {
                liV.SelectedItems.Clear();
            }
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            liV.View = View.Details;
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            liV.View = View.LargeIcon;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            liV.View = View.SmallIcon;
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            liV.View = View.List;
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            liV.View = View.Tile;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
           
        }

        private void butAddItems_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < 30; i++)
            {
                ListViewItem item = new ListViewItem("ID" + i);

                item.SubItems.Add("Item :" + i);
                if (i % 2 == 0)
                {
                    item.ImageIndex = 1;
                }
                else
                {
                    item.ImageIndex = 0;
                }

                liV.Items.Add(item);

            }
        }
    }
}
