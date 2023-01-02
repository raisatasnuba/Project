using Database.Entities;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;

using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project
{
    public partial class LoginForm : Form
    {
       
        SqlDataReader dr;

        public LoginForm()
        {
            InitializeComponent();
           
        }

        private void btnLogin_Click(object sender, EventArgs e)
        {

            string UserName = txtName.Text;
            string Password = txtPassword.Text;

          SqlConnection  connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            connection.Open();
           SqlCommand cmd = new SqlCommand("select * from Signup where Name='" + txtName.Text + "'and Password='" + txtPassword.Text + "'",connection);

            
                dr = cmd.ExecuteReader();
            if (dr.Read())
            {
                new Choose_Items().Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Don't Create Account");

            }
            connection.Close();

            
        }

        private void linkSignup_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            new SignupForm().Show();
            this.Hide();
        }

        private void lblClear_Click(object sender, EventArgs e)
        {
           
            txtPassword.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string userName = Convert.ToString(txtName.Text);
            string password = Convert.ToString(txtPassword.Text);
            if (userName == "Admin")
            {
                if (password == "admin")
                {
                    new Homepage().Show();
                    this.Hide();
                }
                else
                {
                    MessageBox.Show(" Password is incorrect");
                }
            }
            else
            {
                MessageBox.Show("This username is not registered");

            }
        }
    }
}
