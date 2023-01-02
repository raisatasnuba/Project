using Database.OEntities;
using Database.OOperations;
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
    public partial class Choose_Items : Form
    {
        public Choose_Items()
        {
            InitializeComponent();
        }
        SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
       

        private void populate()
        {
            connection.Open();
            string query = "select * from Product";
            SqlDataAdapter da = new SqlDataAdapter(query, connection);
            SqlCommandBuilder builder = new SqlCommandBuilder(da);
            var ds = new DataSet();
            da.Fill(ds);
          dataGridView1.DataSource = ds.Tables[0];
            connection.Close();

        }

        private void Choose_Items_Load(object sender, EventArgs e)
        {
            populate();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            
            if(e.RowIndex>=0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                txtPPname.Text = row.Cells["Product Name"].Value.ToString();
                txtPPrice.Text = row.Cells["Price"].Value.ToString();
                
            }
        }

        

        private void btnBuy_Click(object sender, EventArgs e)
        {
            if (txtCname.Text != "" && txtPhone.Text != "" && txtPPname.Text != "" && txtPPrice.Text != "")
            {
                EorderList eorderList = new EorderList();
                OOrderList oOrderList = new OOrderList();
                eorderList.CustomerName = txtCname.Text;
                eorderList.Phone = txtPhone.Text;
                eorderList.Pname = txtPPname.Text;
                eorderList.Price = txtPPrice.Text;
                oOrderList.Buy(eorderList);

                new Payment().Show();
                this.Hide();



                SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from Product", connection);
                DataTable dataTable = new DataTable();
                sqlDataAdapter.Fill(dataTable);
            }
            else
            {
                MessageBox.Show("Please Enter the information");
            }
        }
    }
}
