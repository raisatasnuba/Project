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
    public partial class CustomerInformation : Form
    {
        public CustomerInformation()
        {
            InitializeComponent();
        }

        private void btnBack_Click(object sender, EventArgs e)
        {
            new Homepage().Show();
                this.Hide();
        }
        SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
        private void populate1()
        {
            connection.Open();
            string query = "select * from OrderList";
            SqlDataAdapter da = new SqlDataAdapter(query, connection);
            SqlCommandBuilder builder = new SqlCommandBuilder(da);
            var ds = new DataSet();
            da.Fill(ds);
            dataGridView2.DataSource = ds.Tables[0];
            connection.Close();

        }

        private void CustomerInformation_Load(object sender, EventArgs e)
        {
            populate1();
        }
    }
}
