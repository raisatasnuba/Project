using Database.PEntities;
using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Database.POperations
{
    public class OProduct
    {
        public void  Add(EProduct eProduct)
        {
            

                    SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
                    connection.Open();
                    SqlCommand cmd = new SqlCommand("Insert into Product([Product Code],[Product Name],Price,Catagories) values('" + eProduct.Pcode + "','" + eProduct.Pname + "','" + eProduct.Price + "','" + eProduct.Catagories + "')", connection);
                    cmd.ExecuteNonQuery();

                    connection.Close();
                
            
           
            
            
        }
        public void Update(EProduct eProduct)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            connection.Open();
            SqlCommand cm1 = new SqlCommand("update Product set Price= ' " + eProduct.Price + " ' where [Product Name]='" + eProduct.Pname + "'", connection);
            cm1.ExecuteNonQuery();

            connection.Close();
           

        }
        public void Delete(EProduct eProduct)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            connection.Open();
            SqlCommand cm = new SqlCommand("delete from Product where [Product Name] ='" + eProduct.Pname  + "'", connection);
            cm.ExecuteNonQuery();

            connection.Close();
            

        }
        
       


       

    }
}
