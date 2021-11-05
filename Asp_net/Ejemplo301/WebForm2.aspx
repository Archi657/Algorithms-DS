<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm2.aspx.cs" Inherits="Ejemplo301.WebForm2" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <style type="text/css">
        #form1 {
            height: 549px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <div>
        </div>
        <asp:Label ID="lbltexto" runat="server" Text="Digite primer numero"></asp:Label>
        <asp:TextBox ID="TextBox1" runat="server" style="margin-bottom: 0px" Width="229px"></asp:TextBox>
        <p>
            <asp:Label ID="Label1" runat="server" Text="Digite segundo numero"></asp:Label>
            <asp:TextBox ID="TextBox2" runat="server" Width="216px"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" style="position: relative; top: 57px; left: -259px" Text="Ver" />
        </p>
        <p>
            &nbsp;</p>
        <asp:Label ID="Label2" runat="server" Text="Suma"></asp:Label>
        <asp:TextBox ID="txtSuma" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="Label3" runat="server" Text="Resta"></asp:Label>
        <asp:TextBox ID="txtResta" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="Label4" runat="server" Text="Division"></asp:Label>
        <asp:TextBox ID="txtDivision" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="Label5" runat="server" Text="Multiplicacion"></asp:Label>
        <asp:TextBox ID="txtMultiplicacion" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="Label6" runat="server" Text="Incremento primer numero"></asp:Label>
        <asp:TextBox ID="txtincre1" runat="server"></asp:TextBox>
        <br />
        <asp:Label ID="Label7" runat="server" Text="Incremento segundo numero"></asp:Label>
        <asp:TextBox ID="txtincre2" runat="server"></asp:TextBox>
    </form>
</body>
</html>
