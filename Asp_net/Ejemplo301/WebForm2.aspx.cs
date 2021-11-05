using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            txtSuma.Text = System.Convert.ToString(int.Parse(TextBox1.Text) + int.Parse(TextBox2.Text));
            txtResta.Text = System.Convert.ToString(int.Parse(TextBox1.Text) - int.Parse(TextBox2.Text));
            txtDivision.Text = System.Convert.ToString(int.Parse(TextBox1.Text) / int.Parse(TextBox2.Text));
            txtMultiplicacion.Text = System.Convert.ToString(int.Parse(TextBox1.Text) * int.Parse(TextBox2.Text));
            txtincre1.Text = System.Convert.ToString(int.Parse(TextBox1.Text)+1);
            txtincre2.Text = System.Convert.ToString(int.Parse(TextBox2.Text)+1);

        }

    }
}