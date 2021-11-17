using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class capture5values : System.Web.UI.Page
    {
        public static int cuenta;
        protected void Page_Load(object sender, EventArgs e)
        {
            if(! IsPostBack)
                capture5values.cuenta = 1;
            
        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            int valor = int.Parse(TextBox1.Text);
            TextBox2.Text = TextBox2.Text + valor + "\n";
            capture5values.cuenta++;
            if (capture5values.cuenta <= 5)
            {
               // TextBox2.Text = "";
            }
            else
            {
                TextBox2.Enabled = false;
            }
        }
    }
}