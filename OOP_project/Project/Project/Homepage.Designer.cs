
namespace Project
{
    partial class Homepage
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Homepage));
            this.btncategory = new System.Windows.Forms.Button();
            this.btnCustomerInfo = new System.Windows.Forms.Button();
            this.btnOrder = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btncategory
            // 
            this.btncategory.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btncategory.Location = new System.Drawing.Point(246, 141);
            this.btncategory.Name = "btncategory";
            this.btncategory.Size = new System.Drawing.Size(98, 83);
            this.btncategory.TabIndex = 0;
            this.btncategory.Text = "Category";
            this.btncategory.UseVisualStyleBackColor = true;
            this.btncategory.Click += new System.EventHandler(this.btncategory_Click);
            // 
            // btnCustomerInfo
            // 
            this.btnCustomerInfo.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnCustomerInfo.Location = new System.Drawing.Point(23, 141);
            this.btnCustomerInfo.Name = "btnCustomerInfo";
            this.btnCustomerInfo.Size = new System.Drawing.Size(104, 83);
            this.btnCustomerInfo.TabIndex = 1;
            this.btnCustomerInfo.Text = "Customer Information";
            this.btnCustomerInfo.UseVisualStyleBackColor = true;
            this.btnCustomerInfo.Click += new System.EventHandler(this.btnCustomerInfo_Click);
            // 
            // btnOrder
            // 
            this.btnOrder.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnOrder.Location = new System.Drawing.Point(131, 243);
            this.btnOrder.Name = "btnOrder";
            this.btnOrder.Size = new System.Drawing.Size(101, 76);
            this.btnOrder.TabIndex = 2;
            this.btnOrder.Text = "Order";
            this.btnOrder.UseVisualStyleBackColor = true;
            this.btnOrder.Click += new System.EventHandler(this.btnOrder_Click);
            // 
            // Homepage
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.NavajoWhite;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Zoom;
            this.ClientSize = new System.Drawing.Size(365, 429);
            this.Controls.Add(this.btnOrder);
            this.Controls.Add(this.btnCustomerInfo);
            this.Controls.Add(this.btncategory);
            this.Name = "Homepage";
            this.Text = "Homepage";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btncategory;
        private System.Windows.Forms.Button btnCustomerInfo;
        private System.Windows.Forms.Button btnOrder;
    }
}