using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project
{
    public partial class Homepage : Form
    {
        public Homepage()
        {
            InitializeComponent();
        }

        private void btncategory_Click(object sender, EventArgs e)
        {
            new Product_Categories().Show();
            this.Hide();
        }

        private void btnCustomerInfo_Click(object sender, EventArgs e)
        {
            new CustomerInformation().Show();
            this.Hide();
        }

        private void btnOrder_Click(object sender, EventArgs e)
        {
            new Choose_Items().Show();
            this.Hide();
        }
    }
}
