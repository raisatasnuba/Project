using Database.OEntities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Database.OOperations
{
    public class OOrderList
    {
        public void Buy(EorderList eOrderList)
        {

                SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Database[Project];Integrated Security=True");
                connection.Open();
                SqlCommand cmd = new SqlCommand("Insert into OrderList([Customer Name],[Phone Number],[Product Name],Price) values('" + eOrderList.CustomerName + "','" + eOrderList.Phone + "','" + eOrderList.Pname + "','" + eOrderList.Price + "')", connection);
                 cmd.ExecuteNonQuery();
                connection.Close();
               
        }
    }
}
