using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace Tree_Voiw_List_Images
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void treeView1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            MessageBox.Show(treeView1.SelectedNode.Text);
        }

        private void treeView1_AfterSelect(object sender, TreeViewEventArgs e)
        {
        }

        private void AllSelected(TreeNode nood , Boolean IsChecked)
        {
            foreach (TreeNode item in  nood.Nodes)
            {
                item.Checked = IsChecked;

                if (item.Nodes.Count > 0 )
                {
                    this.AllSelected(item , IsChecked);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void treeView1_AfterCheck(object sender, TreeViewEventArgs e)
        {
            AllSelected(e.Node , e.Node.Checked);
        }

        private void treeView1_MouseEnter(object sender, EventArgs e)
        {
        }

        private void treeView1_DoubleClick(object sender, EventArgs e)
        {

        }

        private void treeView1_Click(object sender, EventArgs e)
        {
            label1.Text = treeView1.SelectedNode.Text;
            treeView1.FullRowSelect = true;
        
        }

        private void button2_Click(object sender, EventArgs e)
        {
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 100;
            progressBar1.Value = 0;

            for (int i = 0; i < 10; i++)
            {
                if (progressBar1.Value < progressBar1.Maximum)
                {
                    Thread.Sleep(500);
                    progressBar1.Value += 10;

                    label2.Text = (((float)progressBar1.Value / progressBar1.Maximum) * 100) + "%";
                    progressBar1.Refresh();
                    label2.Refresh();
                }
                else { 
                button2.Enabled = false;
                }
            }
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            progressBar1.Value = 0;
            label2.Text = "0%";
        }

        private void button3_Click(object sender, EventArgs e)
        {

        }
    }
}
