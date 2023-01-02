using Datalayer.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Datalayer.Operations
{
    public class OStudent
    {

        public void insert(EStudent eStudent)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Student_Info;Integrated Security=True");
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into Student(name,id) values('" + eStudent.Name + "','" + eStudent.Id + "')", connection);
            cmd.ExecuteNonQuery();

            connection.Close();

        }
        public void Delete(EStudent eStudent)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Student_Info;Integrated Security=True");
            connection.Open();
            SqlCommand cm = new SqlCommand("delete from Student where name='"+eStudent.Name+"'", connection);
            cm.ExecuteNonQuery();

            connection.Close();

        }
        public void Update(EStudent eStudent)
        {
            SqlConnection connection = new SqlConnection("Data Source=DESKTOP-K6R0H57;Initial Catalog=Student_Info;Integrated Security=True");
            connection.Open();
            SqlCommand cm1 = new SqlCommand("update Student set name= ' "+eStudent.Name  +" ' where id='"+ eStudent.Id+"'", connection);
            cm1.ExecuteNonQuery();

            connection.Close();

        }


    }
       
        
        

        
    
}
