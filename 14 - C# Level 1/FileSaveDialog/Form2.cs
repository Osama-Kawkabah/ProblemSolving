﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FileSaveDialog
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_ForeColorChanged(object sender, EventArgs e)
        {
            MessageBox.Show("تم إغلاق النافذة الطفل وتم تنشيط النموذج الأم");

        }
    }
}
