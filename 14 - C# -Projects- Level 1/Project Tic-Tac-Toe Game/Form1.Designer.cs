namespace Project_Tic_Tac_Toe_Game
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.button1 = new System.Windows.Forms.Button();
            this.labInProg = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.labTure = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.but3 = new System.Windows.Forms.Button();
            this.but9 = new System.Windows.Forms.Button();
            this.but8 = new System.Windows.Forms.Button();
            this.but7 = new System.Windows.Forms.Button();
            this.but6 = new System.Windows.Forms.Button();
            this.but5 = new System.Windows.Forms.Button();
            this.but4 = new System.Windows.Forms.Button();
            this.but2 = new System.Windows.Forms.Button();
            this.but1 = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.button1);
            this.groupBox1.Controls.Add(this.labInProg);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.labTure);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.pictureBox1);
            this.groupBox1.Font = new System.Drawing.Font("Tahoma", 8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.groupBox1.ForeColor = System.Drawing.SystemColors.HighlightText;
            this.groupBox1.Location = new System.Drawing.Point(77, 60);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(439, 795);
            this.groupBox1.TabIndex = 20;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "قائمة الاعبين";
            // 
            // button1
            // 
            this.button1.BackColor = System.Drawing.Color.Black;
            this.button1.Font = new System.Drawing.Font("Tahoma", 16F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.ForeColor = System.Drawing.Color.Red;
            this.button1.Location = new System.Drawing.Point(75, 644);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(284, 65);
            this.button1.TabIndex = 5;
            this.button1.Text = "إعادة العبة";
            this.button1.UseVisualStyleBackColor = false;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // labInProg
            // 
            this.labInProg.AutoSize = true;
            this.labInProg.Font = new System.Drawing.Font("Tahoma", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labInProg.ForeColor = System.Drawing.Color.Yellow;
            this.labInProg.Location = new System.Drawing.Point(103, 526);
            this.labInProg.Name = "labInProg";
            this.labInProg.Size = new System.Drawing.Size(230, 43);
            this.labInProg.TabIndex = 4;
            this.labInProg.Text = "In Progress";
            this.labInProg.Click += new System.EventHandler(this.labInProg_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Tahoma", 26F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.ForeColor = System.Drawing.Color.LimeGreen;
            this.label3.Location = new System.Drawing.Point(6, 442);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(216, 63);
            this.label3.TabIndex = 3;
            this.label3.Text = "Winner";
            // 
            // labTure
            // 
            this.labTure.AutoSize = true;
            this.labTure.Font = new System.Drawing.Font("Tahoma", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labTure.ForeColor = System.Drawing.Color.Yellow;
            this.labTure.Location = new System.Drawing.Point(113, 359);
            this.labTure.Name = "labTure";
            this.labTure.Size = new System.Drawing.Size(220, 43);
            this.labTure.TabIndex = 2;
            this.labTure.Text = "Game Over";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Tahoma", 26F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.LimeGreen;
            this.label1.Location = new System.Drawing.Point(6, 278);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(148, 63);
            this.label1.TabIndex = 1;
            this.label1.Text = "Turn";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = global::Project_Tic_Tac_Toe_Game.Properties.Resources.R;
            this.pictureBox1.Location = new System.Drawing.Point(112, 36);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(235, 207);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // but3
            // 
            this.but3.BackColor = System.Drawing.Color.Transparent;
            this.but3.FlatAppearance.BorderSize = 0;
            this.but3.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but3.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but3.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but3.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but3.ForeColor = System.Drawing.Color.Transparent;
            this.but3.Image = ((System.Drawing.Image)(resources.GetObject("but3.Image")));
            this.but3.Location = new System.Drawing.Point(1131, 231);
            this.but3.Name = "but3";
            this.but3.Size = new System.Drawing.Size(246, 167);
            this.but3.TabIndex = 19;
            this.but3.Tag = "?";
            this.but3.UseVisualStyleBackColor = false;
            this.but3.Click += new System.EventHandler(this.but3_Click);
            // 
            // but9
            // 
            this.but9.BackColor = System.Drawing.Color.Transparent;
            this.but9.FlatAppearance.BorderSize = 0;
            this.but9.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but9.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but9.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but9.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but9.ForeColor = System.Drawing.Color.Transparent;
            this.but9.Image = ((System.Drawing.Image)(resources.GetObject("but9.Image")));
            this.but9.Location = new System.Drawing.Point(1131, 599);
            this.but9.Name = "but9";
            this.but9.Size = new System.Drawing.Size(246, 167);
            this.but9.TabIndex = 18;
            this.but9.Tag = "?";
            this.but9.UseVisualStyleBackColor = false;
            this.but9.Click += new System.EventHandler(this.but9_Click);
            // 
            // but8
            // 
            this.but8.BackColor = System.Drawing.Color.Transparent;
            this.but8.FlatAppearance.BorderSize = 0;
            this.but8.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but8.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but8.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but8.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but8.ForeColor = System.Drawing.Color.Transparent;
            this.but8.Image = ((System.Drawing.Image)(resources.GetObject("but8.Image")));
            this.but8.Location = new System.Drawing.Point(868, 599);
            this.but8.Name = "but8";
            this.but8.Size = new System.Drawing.Size(246, 167);
            this.but8.TabIndex = 17;
            this.but8.Tag = "?";
            this.but8.UseVisualStyleBackColor = false;
            this.but8.Click += new System.EventHandler(this.but8_Click);
            // 
            // but7
            // 
            this.but7.BackColor = System.Drawing.Color.Transparent;
            this.but7.FlatAppearance.BorderSize = 0;
            this.but7.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but7.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but7.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but7.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but7.ForeColor = System.Drawing.Color.Transparent;
            this.but7.Image = ((System.Drawing.Image)(resources.GetObject("but7.Image")));
            this.but7.Location = new System.Drawing.Point(604, 599);
            this.but7.Name = "but7";
            this.but7.Size = new System.Drawing.Size(246, 167);
            this.but7.TabIndex = 16;
            this.but7.Tag = "?";
            this.but7.UseVisualStyleBackColor = false;
            this.but7.Click += new System.EventHandler(this.but7_Click);
            // 
            // but6
            // 
            this.but6.BackColor = System.Drawing.Color.Transparent;
            this.but6.FlatAppearance.BorderSize = 0;
            this.but6.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but6.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but6.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but6.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but6.ForeColor = System.Drawing.Color.Transparent;
            this.but6.Image = ((System.Drawing.Image)(resources.GetObject("but6.Image")));
            this.but6.Location = new System.Drawing.Point(1131, 416);
            this.but6.Name = "but6";
            this.but6.Size = new System.Drawing.Size(246, 167);
            this.but6.TabIndex = 15;
            this.but6.Tag = "?";
            this.but6.UseVisualStyleBackColor = false;
            this.but6.Click += new System.EventHandler(this.but6_Click);
            // 
            // but5
            // 
            this.but5.BackColor = System.Drawing.Color.Transparent;
            this.but5.FlatAppearance.BorderSize = 0;
            this.but5.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but5.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but5.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but5.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but5.ForeColor = System.Drawing.Color.Transparent;
            this.but5.Image = ((System.Drawing.Image)(resources.GetObject("but5.Image")));
            this.but5.Location = new System.Drawing.Point(868, 416);
            this.but5.Name = "but5";
            this.but5.Size = new System.Drawing.Size(246, 167);
            this.but5.TabIndex = 14;
            this.but5.Tag = "?";
            this.but5.UseVisualStyleBackColor = false;
            this.but5.Click += new System.EventHandler(this.but5_Click);
            // 
            // but4
            // 
            this.but4.BackColor = System.Drawing.Color.Transparent;
            this.but4.FlatAppearance.BorderSize = 0;
            this.but4.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but4.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but4.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but4.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but4.ForeColor = System.Drawing.Color.Transparent;
            this.but4.Image = ((System.Drawing.Image)(resources.GetObject("but4.Image")));
            this.but4.Location = new System.Drawing.Point(604, 416);
            this.but4.Name = "but4";
            this.but4.Size = new System.Drawing.Size(246, 167);
            this.but4.TabIndex = 13;
            this.but4.Tag = "?";
            this.but4.UseVisualStyleBackColor = false;
            this.but4.Click += new System.EventHandler(this.but4_Click);
            // 
            // but2
            // 
            this.but2.BackColor = System.Drawing.Color.Transparent;
            this.but2.FlatAppearance.BorderSize = 0;
            this.but2.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but2.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but2.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but2.ForeColor = System.Drawing.Color.Transparent;
            this.but2.Image = ((System.Drawing.Image)(resources.GetObject("but2.Image")));
            this.but2.Location = new System.Drawing.Point(868, 231);
            this.but2.Name = "but2";
            this.but2.Size = new System.Drawing.Size(246, 167);
            this.but2.TabIndex = 12;
            this.but2.Tag = "?";
            this.but2.UseVisualStyleBackColor = false;
            this.but2.Click += new System.EventHandler(this.but2_Click);
            // 
            // but1
            // 
            this.but1.BackColor = System.Drawing.Color.Transparent;
            this.but1.FlatAppearance.BorderSize = 0;
            this.but1.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.but1.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.but1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.but1.Font = new System.Drawing.Font("Tahoma", 11F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.but1.ForeColor = System.Drawing.Color.Transparent;
            this.but1.Image = ((System.Drawing.Image)(resources.GetObject("but1.Image")));
            this.but1.Location = new System.Drawing.Point(604, 231);
            this.but1.Name = "but1";
            this.but1.Size = new System.Drawing.Size(246, 167);
            this.but1.TabIndex = 11;
            this.but1.Tag = "?";
            this.but1.UseVisualStyleBackColor = false;
            this.but1.Click += new System.EventHandler(this.but1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 19F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.ClientSize = new System.Drawing.Size(1420, 910);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.but3);
            this.Controls.Add(this.but9);
            this.Controls.Add(this.but8);
            this.Controls.Add(this.but7);
            this.Controls.Add(this.but6);
            this.Controls.Add(this.but5);
            this.Controls.Add(this.but4);
            this.Controls.Add(this.but2);
            this.Controls.Add(this.but1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.Form1_Paint);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label labInProg;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label labTure;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button but3;
        private System.Windows.Forms.Button but9;
        private System.Windows.Forms.Button but8;
        private System.Windows.Forms.Button but7;
        private System.Windows.Forms.Button but6;
        private System.Windows.Forms.Button but5;
        private System.Windows.Forms.Button but4;
        private System.Windows.Forms.Button but2;
        private System.Windows.Forms.Button but1;
    }
}

