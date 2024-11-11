using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Project_Listviwe
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
            item.ImageIndex = 0;
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

            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox5.Text = "";
            textBox1.Focus();

        }

        private void listView1_DoubleClick(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count > 0)
            {
                MessageBox.Show("ID Is : " + listView1.SelectedItems[0].Text);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count > 0) // التأكد من أن هناك عنصر محدد للحذف
            {
                ListViewItem selectedItem = listView1.SelectedItems[0]; // العنصر المحدد للحذف
                listView1.Items.Remove(selectedItem); // حذف العنصر المحدد من ListView
            }
            else
            {
                MessageBox.Show("Please select an item to delete."); // إذا لم يتم تحديد عنصر
            }
        }


        private void button4_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < 40; i++)
            {
                ListViewItem Items = new ListViewItem(i.ToString());

                if (i% 2 == 0 )
                {
                Items.ImageIndex = 0;
                }
                else
                {
                Items.ImageIndex = 1;
                }
                Items.SubItems.Add("Name " + i);
                Items.SubItems.Add("PhoneNumber " + i);
                Items.SubItems.Add("Governorate " + i);
                Items.SubItems.Add("Tilte " + i);
                listView1.Items.Add(Items);

            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (listView1.Items.Count > 0 )
            {
                listView1.Items.Clear();
            }
            else
            {
                MessageBox.Show("Don’t Date");
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (listView1.SelectedItems.Count > 0)
            {
                textBox1.Enabled = false;
                textBox1.BackColor = Color.DarkCyan;

                ListViewItem selectedItem = listView1.SelectedItems[0];
                selectedItem.ImageIndex = 0;
                selectedItem.Text = textBox1.Text;
                selectedItem.SubItems[1].Text = textBox2.Text;
                selectedItem.SubItems[2].Text = textBox3.Text;
                selectedItem.SubItems[3].Text = textBox4.Text;
                selectedItem.SubItems[4].Text = textBox5.Text;


            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            listView1.Columns.Add("Column 1", 100, HorizontalAlignment.Left);
            listView1.Columns.Add("Column 2", 150, HorizontalAlignment.Right);

        }

        private void listView1_SelectedIndexChanged(object sender, EventArgs e)
        {
            //if (listView1.SelectedItems.Count > 0)
            //{
            //    MessageBox.Show("Selected item: " + listView1.SelectedItems[0].Text);
            //}
        }

        private void listView1_ItemSelectionChanged(object sender, ListViewItemSelectionChangedEventArgs e)
        {
            //if (e.IsSelected)
            //{
            //    MessageBox.Show("Item " + e.Item.Text + " selected");
            //}
            //else
            //{
            //    MessageBox.Show("Item " + e.Item.Text + " deselected");
            //}
        }

        private void button7_Click_1(object sender, EventArgs e)
        {
            ListViewItem foundItem = listView1.FindItemWithText(textBox6.Text);

            if (foundItem != null)
            {
                MessageBox.Show("Item found: " + textBox6.Text);
                textBox6.Text = "";
            }
            else
            {
                MessageBox.Show("Item Not found: ");
                textBox6.Text = "";
            }

        }

        private void radioButton3_CheckedChanged_1(object sender, EventArgs e)
        {
            listView1.View = View.Tile;
        }

        private void radioButton4_CheckedChanged_1(object sender, EventArgs e)
        {
            listView1.View = View.SmallIcon;
        }

        private void radioButton2_CheckedChanged_1(object sender, EventArgs e)
        {
            listView1.View = View.LargeIcon;
        }

        private void radioButton5_CheckedChanged_1(object sender, EventArgs e)
        {
            listView1.View = View.List;
        }

        private void radioButton1_CheckedChanged_1(object sender, EventArgs e)
        {
            listView1.View = View.Details;
        }
    }
}
