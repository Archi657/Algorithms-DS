using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class par_impar : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void TextBox4_TextChanged(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            
            int p = int.Parse(TextBox1.Text);
            int s = int.Parse(TextBox2.Text);
            int i;
            if (p > s)
            {
                Response.Write("<script language='JavaScript'>alert ('Error en los datos registrados...!!!'); </script>");
                TextBox1.Text = "";
                TextBox2.Text = "";
                TextBox1.Focus();
            }
            for(i=p; i<=s; i++)
            {
                if (i % 2 == 0)
                {
                    TextBox3.Text = TextBox3.Text + i + "\n";
                }
                else
                {
                    TextBox4.Text = TextBox4.Text + i + "\n";
                }
            }
        }
    }
}