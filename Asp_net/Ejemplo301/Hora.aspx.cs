using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class Hora : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            int horas = int.Parse(TextBox1.Text);
            int minutos = int.Parse(TextBox2.Text);
            int segundos = int.Parse(TextBox3.Text);
            if (horas > 23 || minutos > 59 || segundos > 59)
            {
                Response.Write("<script language='JavaScript'>alert ('Error en los datos registrados...!!!'); </script>");
                TextBox1.Text = "";
                TextBox2.Text = "";
                TextBox3.Text = "";
                TextBox1.Focus();
            }
            else
            {
                if (horas == 23 && minutos == 59 && segundos == 59)
                {
                    horas = minutos = segundos = 0;
                }
                else
                {
                    if (minutos == 59 && segundos == 59)
                    {
                        horas += 1;
                        minutos = 0;
                    }
                    else
                    {
                        if (segundos == 59)
                        {
                            segundos = 0;
                            minutos += 1;
                        }
                        else
                            segundos++;
                    }
                }
                TextBox4.Text = "" + horas;
                TextBox5.Text = "" + minutos;
                TextBox6.Text = "" + segundos;
            }
            
        } 
    }
}
