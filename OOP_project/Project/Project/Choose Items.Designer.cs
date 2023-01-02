
namespace Project
{
    partial class Choose_Items
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Choose_Items));
            this.label1 = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.lblPPname = new System.Windows.Forms.Label();
            this.txtPPname = new System.Windows.Forms.TextBox();
            this.lblPPrice = new System.Windows.Forms.Label();
            this.txtPPrice = new System.Windows.Forms.TextBox();
            this.lblCName = new System.Windows.Forms.Label();
            this.txtCname = new System.Windows.Forms.TextBox();
            this.txtPhone = new System.Windows.Forms.TextBox();
            this.lblPhone = new System.Windows.Forms.Label();
            this.btnBuy = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(504, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(84, 27);
            this.label1.TabIndex = 0;
            this.label1.Text = "Product List";
            // 
            // dataGridView1
            // 
            this.dataGridView1.BackgroundColor = System.Drawing.Color.MistyRose;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(327, 53);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowHeadersWidth = 51;
            this.dataGridView1.RowTemplate.Height = 24;
            this.dataGridView1.Size = new System.Drawing.Size(445, 333);
            this.dataGridView1.TabIndex = 15;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // lblPPname
            // 
            this.lblPPname.AutoSize = true;
            this.lblPPname.Location = new System.Drawing.Point(48, 176);
            this.lblPPname.Name = "lblPPname";
            this.lblPPname.Size = new System.Drawing.Size(98, 17);
            this.lblPPname.TabIndex = 16;
            this.lblPPname.Text = "Product Name";
            // 
            // txtPPname
            // 
            this.txtPPname.Location = new System.Drawing.Point(191, 176);
            this.txtPPname.Name = "txtPPname";
            this.txtPPname.Size = new System.Drawing.Size(100, 22);
            this.txtPPname.TabIndex = 17;
            // 
            // lblPPrice
            // 
            this.lblPPrice.AutoSize = true;
            this.lblPPrice.Location = new System.Drawing.Point(106, 219);
            this.lblPPrice.Name = "lblPPrice";
            this.lblPPrice.Size = new System.Drawing.Size(40, 17);
            this.lblPPrice.TabIndex = 18;
            this.lblPPrice.Text = "Price";
            // 
            // txtPPrice
            // 
            this.txtPPrice.Location = new System.Drawing.Point(191, 219);
            this.txtPPrice.Name = "txtPPrice";
            this.txtPPrice.Size = new System.Drawing.Size(100, 22);
            this.txtPPrice.TabIndex = 19;
            // 
            // lblCName
            // 
            this.lblCName.AutoSize = true;
            this.lblCName.ForeColor = System.Drawing.SystemColors.ControlText;
            this.lblCName.Location = new System.Drawing.Point(42, 75);
            this.lblCName.Name = "lblCName";
            this.lblCName.Size = new System.Drawing.Size(109, 17);
            this.lblCName.TabIndex = 20;
            this.lblCName.Text = "Customer Name";
            // 
            // txtCname
            // 
            this.txtCname.Location = new System.Drawing.Point(191, 75);
            this.txtCname.Name = "txtCname";
            this.txtCname.Size = new System.Drawing.Size(100, 22);
            this.txtCname.TabIndex = 21;
            // 
            // txtPhone
            // 
            this.txtPhone.Location = new System.Drawing.Point(191, 125);
            this.txtPhone.Name = "txtPhone";
            this.txtPhone.Size = new System.Drawing.Size(100, 22);
            this.txtPhone.TabIndex = 22;
            // 
            // lblPhone
            // 
            this.lblPhone.AutoSize = true;
            this.lblPhone.Location = new System.Drawing.Point(48, 130);
            this.lblPhone.Name = "lblPhone";
            this.lblPhone.Size = new System.Drawing.Size(103, 17);
            this.lblPhone.TabIndex = 23;
            this.lblPhone.Text = "Phone Number";
            // 
            // btnBuy
            // 
            this.btnBuy.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnBuy.ForeColor = System.Drawing.SystemColors.ControlText;
            this.btnBuy.Location = new System.Drawing.Point(125, 277);
            this.btnBuy.Name = "btnBuy";
            this.btnBuy.Size = new System.Drawing.Size(83, 24);
            this.btnBuy.TabIndex = 25;
            this.btnBuy.Text = "Buy";
            this.btnBuy.UseVisualStyleBackColor = true;
            this.btnBuy.Click += new System.EventHandler(this.btnBuy_Click);
            // 
            // Choose_Items
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.MistyRose;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.ClientSize = new System.Drawing.Size(795, 412);
            this.Controls.Add(this.btnBuy);
            this.Controls.Add(this.lblPhone);
            this.Controls.Add(this.txtPhone);
            this.Controls.Add(this.txtCname);
            this.Controls.Add(this.lblCName);
            this.Controls.Add(this.txtPPrice);
            this.Controls.Add(this.lblPPrice);
            this.Controls.Add(this.txtPPname);
            this.Controls.Add(this.lblPPname);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.label1);
            this.Name = "Choose_Items";
            this.Text = "Choose_Items";
            this.Load += new System.EventHandler(this.Choose_Items_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label lblPPname;
        private System.Windows.Forms.TextBox txtPPname;
        private System.Windows.Forms.Label lblPPrice;
        private System.Windows.Forms.TextBox txtPPrice;
        private System.Windows.Forms.Label lblCName;
        private System.Windows.Forms.TextBox txtCname;
        private System.Windows.Forms.TextBox txtPhone;
        private System.Windows.Forms.Label lblPhone;
        private System.Windows.Forms.Button btnBuy;
    }
}