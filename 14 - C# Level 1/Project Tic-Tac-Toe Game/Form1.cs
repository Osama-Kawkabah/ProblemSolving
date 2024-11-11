using Project_Tic_Tac_Toe_Game.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project_Tic_Tac_Toe_Game
{
    public partial class Form1 : Form
    {

        string Player1 = "Player 1";
        string Player2 = "Player 2";

        private void UpdataTure(Button But)
        {

            if (But.Tag == "X"|| But.Tag == "O")
            {
                MessageBox.Show("لا يمكنك اختيار هذا الزر مرة أخرى.", "تحذير", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }
            if (labTure.Text == Player1)
            {
                But.Image = Resources.X;
                But.Tag = "X";
                labTure.Text = "Player 2";
                return;
            }

            if (labTure.Text == Player2)
            {
                But.Image = Resources.O;
                But.Tag = "O";
                labTure.Text = "Player 1";
                return;
            }

        }
        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Color White = Color.White;

            //----------------------Pen Lenght----------------------

            Pen PenWith1 = new Pen(White);  // إنشاء قلم باستخدام اللون الأسود
            PenWith1.Width = 10;  // تحديد عرض القلم بـ 10 وحدات
            PenWith1.DashStyle = System.Drawing.Drawing2D.DashStyle.Custom;  // تحديد نمط القلم ليكون نقطياً
            PenWith1.StartCap = System.Drawing.Drawing2D.LineCap.Round;  // تحديد شكل بداية الخط ليكون دائرياً
            PenWith1.EndCap = System.Drawing.Drawing2D.LineCap.Round;  // تحديد شكل نهاية الخط ليكون دائرياً
            e.Graphics.DrawLine(PenWith1, 370, 275, 913, 275);
            e.Graphics.DrawLine(PenWith1, 370, 401, 913, 401);

            //----------------------Pen Lenght----------------------
            e.Graphics.DrawLine(PenWith1, 730, 150, 730, 525);
            e.Graphics.DrawLine(PenWith1, 555, 150, 555, 525);
        }


        private void WhoIsWinner() {

            if (but1.Image == Resources.X &&
                but2.Image == Resources.X &&
                but1.Image == Resources.X)
            {
                but1.BackColor = Color.Green;
            }
        }
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            labTure.Text = Player1;
        }
        
        private void but1_Click(object sender, EventArgs e)
        {
            UpdataTure(but1);
        }

        private void but4_Click(object sender, EventArgs e)
        {
            UpdataTure(but4);
        }

        private void but5_Click(object sender, EventArgs e)
        {
            UpdataTure(but5);

        }

        private void but9_Click(object sender, EventArgs e)
        {
            UpdataTure(but9);
        }

        private void but8_Click(object sender, EventArgs e)
        {
            UpdataTure(but8);
        }

        private void but7_Click(object sender, EventArgs e)
        {
            UpdataTure(but7);
        }

        private void but6_Click(object sender, EventArgs e)
        {
            UpdataTure(but6);
        }

        private void but3_Click(object sender, EventArgs e)
        {
            UpdataTure(but3);
        }

        private void but2_Click(object sender, EventArgs e)
        {
            UpdataTure(but2);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            but1.Image = Resources.question_mark_96;
            but2.Image = Resources.question_mark_96;
            but3.Image = Resources.question_mark_96;
            but4.Image = Resources.question_mark_96;
            but5.Image = Resources.question_mark_96;
            but6.Image = Resources.question_mark_96;
            but7.Image = Resources.question_mark_96;
            but8.Image = Resources.question_mark_96;
            but9.Image = Resources.question_mark_96;
            labTure.Text = Player1;
            labInProg.Text = "In Progress";
        }

        private void labInProg_Click(object sender, EventArgs e)
        {
        }
    }
}
