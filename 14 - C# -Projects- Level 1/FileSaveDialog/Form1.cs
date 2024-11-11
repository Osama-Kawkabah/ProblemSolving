using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace FileSaveDialog
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void butChFile_Click(object sender, EventArgs e)
        {
            OpenFileDialog ofd = new OpenFileDialog();
            
            ofd.Multiselect = true;
            ofd.Filter = "My Text |*txt|Img|*png|My All |*txt;*png";
            ofd.FilterIndex = 2;
            ofd.ShowDialog();
            foreach (string file in ofd.FileNames) {

                MessageBox.Show(ofd.FileName);
            }
           // ofd.Title = "يرجئ اختيار موقع حفظ المولف";
           // ofd.FileName = "Osama Ali.txt";
           // ofd.Filter = "My Text |*txt|Img|*png|My All |*txt;*png";
           // ofd.ShowDialog();

           // string path = ofd.FileName;

           // if (Path.GetExtension(ofd.FileName).ToLower() == ".txt" )
           // {
           //     path += ".txt";
           // }

           //StreamWriter x = new StreamWriter(path);
           // x.Write(textBox1.Text);
           // x.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();
            openFileDialog1.Multiselect = false; // تعيينه إلى true إذا كنت ترغب في اختيار أكثر من ملف
            openFileDialog1.Filter = "ملفات النص (*.txt)|*.txt|ملفات الصور (*.png)|*.png|كل الملفات (*.*)|*.*";
            openFileDialog1.Title = "يرجى اختيار ملف للنسخ";
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                string sourceFile = openFileDialog1.FileName;
                string fileName = Path.GetFileName(sourceFile); // الحصول على اسم الملف فقط

                SaveFileDialog saveFileDialog1 = new SaveFileDialog();
                saveFileDialog1.Title = "اختر مكان واسم لحفظ الملف المنسوخ";
                saveFileDialog1.Filter = "ملفات النص (*.txt)|*.txt|ملفات الصور (*.png)|*.png|كل الملفات (*.*)|*.*";
                saveFileDialog1.FileName = fileName; // تعيين اسم الملف المنسوخ ليكون نفس اسم الملف الأصلي

                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    string destinationFile = saveFileDialog1.FileName;

                    try
                    {
                        File.Copy(sourceFile, destinationFile, true);

                        MessageBox.Show("تم نسخ الملف بنجاح", "نجاح", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show("حدث خطأ أثناء نسخ الملف: " + ex.Message, "خطأ", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();
            openFileDialog1.Multiselect = false; // تعيينه إلى true إذا كنت ترغب في اختيار أكثر من ملف
            openFileDialog1.Filter = "ملفات النص (*.txt)|*.txt|ملفات الصور (*.png)|*.png|كل الملفات (*.*)|*.*";
            openFileDialog1.Title = "يرجى اختيار ملف للنسخ";
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                string sourceFile = openFileDialog1.FileName;
                string fileName = Path.GetFileName(sourceFile); // الحصول على اسم الملف فقط

                SaveFileDialog saveFileDialog1 = new SaveFileDialog();
                saveFileDialog1.Title = "اختر مكان واسم لحفظ الملف المنسوخ";
                saveFileDialog1.Filter = "ملفات النص (*.txt)|*.txt|ملفات الصور (*.png)|*.png|كل الملفات (*.*)|*.*";
                saveFileDialog1.FileName = fileName; // تعيين اسم الملف المنسوخ ليكون نفس اسم الملف الأصلي

                if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    string destinationFile = saveFileDialog1.FileName;

                    try
                    {
                        //File.Copy(sourceFile, destinationFile, true);
                        File.Move(sourceFile, destinationFile);

                        MessageBox.Show("تم نسخ الملف بنجاح", "نجاح", MessageBoxButtons.OK, MessageBoxIcon.Information);
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show("حدث خطأ أثناء نسخ الملف: " + ex.Message, "خطأ", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog folderBrowserDialog = new FolderBrowserDialog();
            // إعداد خصائص FolderBrowserDialog
            folderBrowserDialog.Description = "Select a folder to save your files";
            folderBrowserDialog.RootFolder = Environment.SpecialFolder.Desktop;
            folderBrowserDialog.SelectedPath = @"C:\Users\YourUserName\Documents";
            folderBrowserDialog.ShowNewFolderButton = true;
            folderBrowserDialog.ShowDialog();
            // عرض FolderBrowserDialog وانتظار اختيار المستخدم
            if (folderBrowserDialog.ShowDialog() == DialogResult.OK)
            {
                // عرض المسار الذي اختاره المستخدم
                MessageBox.Show("Selected path: " + folderBrowserDialog1.SelectedPath);
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
         
        }

        private void button4_Click(object sender, EventArgs e)
        {
            // إنشاء نافذة طفل جديدة
            Form childForm = new Form2();
            childForm.MdiParent = this;
            childForm.Text = "Child Form " + (this.MdiChildren.Length + 1);
            childForm.Show();
            childForm.ControlBox = false;
            childForm.TopMost = true;



        }

        private void ايقوناتToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }
    }
}

