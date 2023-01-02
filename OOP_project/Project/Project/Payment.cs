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
    public partial class Payment : Form
    {
        public Payment()
        {
            InitializeComponent();
        }

        private void btnSelect_Click(object sender, EventArgs e)
        {
            if (rbtnBkash.Checked)
            {
                new LoginForm().Show();
                this.Hide();


               
                MessageBox.Show("Order Confirmed");
            }
            else if (rbtnCash.Checked)
            {

                new LoginForm().Show();
                this.Hide();

                MessageBox.Show("Order Confirmed");
            }

            else if (rbtnRocket.Checked)
            {
                new LoginForm().Show();
                this.Hide();


                MessageBox.Show("Order Confirmed");
            }
            else if(rbtnNagad.Checked)
            {
                new LoginForm().Show();
                this.Hide();

                MessageBox.Show("Order Confirmed ");
            }
            else
            {
                
                
                MessageBox.Show("Your order has not been Confirmed");
            }

        }
    }
}
