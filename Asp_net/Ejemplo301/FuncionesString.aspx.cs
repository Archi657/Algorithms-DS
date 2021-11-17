using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Ejemplo301
{
    public partial class FuncionesString : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void bttnindex_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.IndexOf('o');
        }

        protected void bttnLastIndex_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.LastIndexOf('e');
        }

        protected void bttnLength_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Length;
        }

        protected void bttnContains_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Contains("cl");
        }

        protected void bttnToUpper_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.ToUpper();
        }

        protected void bttnToLower_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.ToLower();
        }

        protected void bttnSubString_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Substring(5);
        }

        protected void bttnSubStringXY_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Substring(5,10);
        }

        protected void bttnReplace_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Replace("o","x");
        }

        protected void bttnRemove_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Remove(5,3);
        }

        protected void bttnReverse_Click(object sender, EventArgs e)
        {
            txtSalida.Text = new string(txtEntrada.Text.Reverse().ToArray());
        }

        protected void bttnInsert_Click(object sender, EventArgs e)
        {
            txtSalida.Text = "" + txtEntrada.Text.Insert(5, "HOLA");
        }
    }
}