using Database.PEntities;
using Database.POperations;
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
    public partial class Product_Categories : Form
    {
        public Product_Categories()
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


        private void btnBack_Click(object sender, EventArgs e)
        {
            new Homepage().Show();
            this.Hide();
        }

        private void btnadd_Click(object sender, EventArgs e)
        {
            if (txtPcode.Text != "" && txtPname.Text != "" && txtPrice.Text != "" && comboBoxCatagory.Text != "")
            {
                if (comboBoxCatagory.Text == "Skin Care" || comboBoxCatagory.Text == "Makeup" || comboBoxCatagory.Text == "Jewellery")
                {
                    EProduct eProduct = new EProduct();
                    OProduct oProduct = new OProduct();
                    eProduct.Pcode = txtPcode.Text;
                    eProduct.Pname = txtPname.Text;
                    eProduct.Price = txtPrice.Text;
                    eProduct.Catagories = comboBoxCatagory.Text;
                    oProduct.Add(eProduct);
                    SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from Product", connection);
                    DataTable dataTable = new DataTable();
                    sqlDataAdapter.Fill(dataTable);
                    dataGridView1.DataSource = dataTable;
                }
            }
            else
            {
                MessageBox.Show("Please enter the information");
            }
            
        }

       

        private void btndelete_Click(object sender, EventArgs e)
        {
            EProduct eProduct = new EProduct();
            OProduct oProduct = new OProduct();
            eProduct.Pcode = txtPcode.Text;
            eProduct.Pname = txtPname.Text;
            eProduct.Price = txtPrice.Text;
            eProduct.Catagories = comboBoxCatagory.Text;
             oProduct.Delete(eProduct);
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from Product", connection);
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;
        }

        private void btnupdate_Click(object sender, EventArgs e)
        {
            EProduct eProduct = new EProduct();
            OProduct oProduct = new OProduct();
            eProduct.Pcode = txtPcode.Text;
            eProduct.Pname = txtPname.Text;
            eProduct.Price = txtPrice.Text;
            eProduct.Catagories = comboBoxCatagory.Text;
             oProduct.Update(eProduct);

            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from Product", connection);
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;


        }

        private void Product_Categories_Load(object sender, EventArgs e)
        {
            populate();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = this.dataGridView1.Rows[e.RowIndex];
                txtPcode.Text = row.Cells["Product Code"].Value.ToString();
                txtPname.Text = row.Cells["Product Name"].Value.ToString();
                txtPrice.Text = row.Cells["Price"].Value.ToString();
                comboBoxCatagory.Text = row.Cells["Catagories"].Value.ToString();

            }
        }
    }
}
