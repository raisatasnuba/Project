using Database.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Database.Operations
{
   public class OSignup
    {
        public void Signup(ESignup eSignup)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into Signup(Name,[E-mail],Password) values('" + eSignup.Name + "','" + eSignup.Email + "','" + eSignup.Password + "')", connection);
             cmd.ExecuteNonQuery();
            connection.Close();
           
        }
        

    }
}
