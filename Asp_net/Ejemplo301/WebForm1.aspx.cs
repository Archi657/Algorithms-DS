using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            for (int i = 1; i < 7; i++)
            {
                this.Response.Write("<h" + i + ">Bienvenido...ASP.NET a su alcance</h"
                + i + ">");

            }
        }
    }
}