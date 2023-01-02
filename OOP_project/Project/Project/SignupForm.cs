using Database.Entities;
using Database.Operations;
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
    public partial class SignupForm : Form
    {
        public SignupForm()
        {
            InitializeComponent();
        }

        private void btnSignup_Click(object sender, EventArgs e)
        {
            if (txtName.Text != "" && txtEmail.Text != "" && txtPassword.Text != "" && txtConfirm.Text != "")
            {
                if (txtPassword.Text == txtConfirm.Text)
                {
                    ESignup eSignup = new ESignup();
                    eSignup.Name = txtName.Text;
                    eSignup.Email = txtEmail.Text;
                    eSignup.Password = txtPassword.Text;
                    OSignup oSignup = new OSignup();
                    oSignup.Signup(eSignup);

                    new LoginForm().Show();
                    this.Hide();
                    MessageBox.Show("Account is Created");
                }


                else
                {
                    MessageBox.Show("Account is not Created");
                }
            }
            else
            {
                MessageBox.Show("Please Enter the information");
            }


        }
    }
}
