
namespace Project
{
    partial class Payment
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Payment));
            this.btnSelect = new System.Windows.Forms.Button();
            this.rbtnRocket = new System.Windows.Forms.RadioButton();
            this.rbtnNagad = new System.Windows.Forms.RadioButton();
            this.rbtnBkash = new System.Windows.Forms.RadioButton();
            this.rbtnCash = new System.Windows.Forms.RadioButton();
            this.lblPayment = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // btnSelect
            // 
            this.btnSelect.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.btnSelect.Location = new System.Drawing.Point(85, 259);
            this.btnSelect.Name = "btnSelect";
            this.btnSelect.Size = new System.Drawing.Size(75, 23);
            this.btnSelect.TabIndex = 11;
            this.btnSelect.Text = "Select";
            this.btnSelect.UseVisualStyleBackColor = true;
            this.btnSelect.Click += new System.EventHandler(this.btnSelect_Click);
            // 
            // rbtnRocket
            // 
            this.rbtnRocket.AutoSize = true;
            this.rbtnRocket.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.rbtnRocket.Location = new System.Drawing.Point(47, 208);
            this.rbtnRocket.Name = "rbtnRocket";
            this.rbtnRocket.Size = new System.Drawing.Size(73, 21);
            this.rbtnRocket.TabIndex = 10;
            this.rbtnRocket.TabStop = true;
            this.rbtnRocket.Text = "Rocket";
            this.rbtnRocket.UseVisualStyleBackColor = true;
            // 
            // rbtnNagad
            // 
            this.rbtnNagad.AutoSize = true;
            this.rbtnNagad.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.rbtnNagad.Location = new System.Drawing.Point(47, 168);
            this.rbtnNagad.Name = "rbtnNagad";
            this.rbtnNagad.Size = new System.Drawing.Size(71, 21);
            this.rbtnNagad.TabIndex = 9;
            this.rbtnNagad.TabStop = true;
            this.rbtnNagad.Text = "Nagad";
            this.rbtnNagad.UseVisualStyleBackColor = true;
            // 
            // rbtnBkash
            // 
            this.rbtnBkash.AutoSize = true;
            this.rbtnBkash.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.rbtnBkash.Location = new System.Drawing.Point(47, 129);
            this.rbtnBkash.Name = "rbtnBkash";
            this.rbtnBkash.Size = new System.Drawing.Size(68, 21);
            this.rbtnBkash.TabIndex = 8;
            this.rbtnBkash.TabStop = true;
            this.rbtnBkash.Text = "Bkash";
            this.rbtnBkash.UseVisualStyleBackColor = true;
            // 
            // rbtnCash
            // 
            this.rbtnCash.AutoSize = true;
            this.rbtnCash.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.rbtnCash.Location = new System.Drawing.Point(47, 89);
            this.rbtnCash.Name = "rbtnCash";
            this.rbtnCash.Size = new System.Drawing.Size(135, 21);
            this.rbtnCash.TabIndex = 7;
            this.rbtnCash.TabStop = true;
            this.rbtnCash.Text = "Cask on Delivery";
            this.rbtnCash.UseVisualStyleBackColor = true;
            // 
            // lblPayment
            // 
            this.lblPayment.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.lblPayment.ForeColor = System.Drawing.SystemColors.MenuHighlight;
            this.lblPayment.Location = new System.Drawing.Point(44, 45);
            this.lblPayment.Name = "lblPayment";
            this.lblPayment.Size = new System.Drawing.Size(83, 21);
            this.lblPayment.TabIndex = 6;
            this.lblPayment.Text = "Payment Option";
            // 
            // Payment
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.ClientSize = new System.Drawing.Size(366, 330);
            this.Controls.Add(this.btnSelect);
            this.Controls.Add(this.rbtnRocket);
            this.Controls.Add(this.rbtnNagad);
            this.Controls.Add(this.rbtnBkash);
            this.Controls.Add(this.rbtnCash);
            this.Controls.Add(this.lblPayment);
            this.Name = "Payment";
            this.Text = "Payment";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnSelect;
        private System.Windows.Forms.RadioButton rbtnRocket;
        private System.Windows.Forms.RadioButton rbtnNagad;
        private System.Windows.Forms.RadioButton rbtnBkash;
        private System.Windows.Forms.RadioButton rbtnCash;
        private System.Windows.Forms.Label lblPayment;
    }
}