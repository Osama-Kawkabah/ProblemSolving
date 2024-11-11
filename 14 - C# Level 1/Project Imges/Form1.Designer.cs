namespace Project_Imges
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.labelImg = new System.Windows.Forms.Label();
            this.rdiButBoy = new System.Windows.Forms.RadioButton();
            this.rdiButGirl = new System.Windows.Forms.RadioButton();
            this.rdiButBook = new System.Windows.Forms.RadioButton();
            this.rdiButPen = new System.Windows.Forms.RadioButton();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::Project_Imges.Properties.Resources.Boy;
            this.pictureBox1.Location = new System.Drawing.Point(214, 96);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(739, 606);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // labelImg
            // 
            this.labelImg.AutoSize = true;
            this.labelImg.Font = new System.Drawing.Font("Sitka Banner", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelImg.ForeColor = System.Drawing.Color.Crimson;
            this.labelImg.Location = new System.Drawing.Point(506, 35);
            this.labelImg.Name = "labelImg";
            this.labelImg.Size = new System.Drawing.Size(124, 58);
            this.labelImg.TabIndex = 1;
            this.labelImg.Text = "Imges";
            // 
            // rdiButBoy
            // 
            this.rdiButBoy.AutoSize = true;
            this.rdiButBoy.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rdiButBoy.Location = new System.Drawing.Point(297, 737);
            this.rdiButBoy.Name = "rdiButBoy";
            this.rdiButBoy.Size = new System.Drawing.Size(83, 33);
            this.rdiButBoy.TabIndex = 2;
            this.rdiButBoy.TabStop = true;
            this.rdiButBoy.Tag = "Boy";
            this.rdiButBoy.Text = "Boy";
            this.rdiButBoy.UseVisualStyleBackColor = true;
            this.rdiButBoy.CheckedChanged += new System.EventHandler(this.rdiButBoy_CheckedChanged);
            // 
            // rdiButGirl
            // 
            this.rdiButGirl.AutoSize = true;
            this.rdiButGirl.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rdiButGirl.Location = new System.Drawing.Point(442, 737);
            this.rdiButGirl.Name = "rdiButGirl";
            this.rdiButGirl.Size = new System.Drawing.Size(80, 33);
            this.rdiButGirl.TabIndex = 3;
            this.rdiButGirl.TabStop = true;
            this.rdiButGirl.Tag = "Girl";
            this.rdiButGirl.Text = "Girl";
            this.rdiButGirl.UseVisualStyleBackColor = true;
            this.rdiButGirl.CheckedChanged += new System.EventHandler(this.rdiButGirl_CheckedChanged);
            // 
            // rdiButBook
            // 
            this.rdiButBook.AutoSize = true;
            this.rdiButBook.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rdiButBook.Location = new System.Drawing.Point(597, 737);
            this.rdiButBook.Name = "rdiButBook";
            this.rdiButBook.Size = new System.Drawing.Size(110, 33);
            this.rdiButBook.TabIndex = 4;
            this.rdiButBook.TabStop = true;
            this.rdiButBook.Tag = "Books";
            this.rdiButBook.Text = "Books";
            this.rdiButBook.UseVisualStyleBackColor = true;
            this.rdiButBook.CheckedChanged += new System.EventHandler(this.rdiButBook_CheckedChanged);
            // 
            // rdiButPen
            // 
            this.rdiButPen.AutoSize = true;
            this.rdiButPen.Font = new System.Drawing.Font("Tahoma", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.rdiButPen.Location = new System.Drawing.Point(799, 737);
            this.rdiButPen.Name = "rdiButPen";
            this.rdiButPen.Size = new System.Drawing.Size(83, 33);
            this.rdiButPen.TabIndex = 5;
            this.rdiButPen.TabStop = true;
            this.rdiButPen.Tag = "Pen";
            this.rdiButPen.Text = "Pen";
            this.rdiButPen.UseVisualStyleBackColor = true;
            this.rdiButPen.CheckedChanged += new System.EventHandler(this.rdiButPen_CheckedChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 19F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1133, 857);
            this.Controls.Add(this.rdiButPen);
            this.Controls.Add(this.rdiButBook);
            this.Controls.Add(this.rdiButGirl);
            this.Controls.Add(this.rdiButBoy);
            this.Controls.Add(this.labelImg);
            this.Controls.Add(this.pictureBox1);
            this.Name = "Form1";
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label labelImg;
        private System.Windows.Forms.RadioButton rdiButBoy;
        private System.Windows.Forms.RadioButton rdiButGirl;
        private System.Windows.Forms.RadioButton rdiButBook;
        private System.Windows.Forms.RadioButton rdiButPen;
    }
}

