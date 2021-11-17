using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class ifform : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if (int.Parse(TextBox1.Text)> int.Parse(TextBox2.Text) && int.Parse(TextBox1.Text)> int.Parse(TextBox3.Text))
            {
                TextBox4.Text = TextBox1.Text;
            }
            else if (int.Parse(TextBox2.Text) > int.Parse(TextBox1.Text) && int.Parse(TextBox2.Text) > int.Parse(TextBox3.Text))
            {
                TextBox4.Text = TextBox2.Text;
            }
            else if (int.Parse(TextBox3.Text) > int.Parse(TextBox1.Text) && int.Parse(TextBox3.Text) > int.Parse(TextBox2.Text))
            {
                TextBox4.Text = TextBox3.Text;
            }

        }
    }
}