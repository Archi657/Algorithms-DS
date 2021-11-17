<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Hora.aspx.cs" Inherits="Ejemplo301.Hora" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Label ID="Label1" runat="server" Text="Horas"></asp:Label>
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        </div>
        <asp:Label ID="Label2" runat="server" Text="Minutos"></asp:Label>
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Segundos"></asp:Label>
            <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Button" />
        <p>
            <asp:Label ID="Label4" runat="server" Text="Horas"></asp:Label>
            <asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
        </p>
        <asp:Label ID="Label5" runat="server" Text="Minutos"></asp:Label>
        <asp:TextBox ID="TextBox5" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label6" runat="server" Text="Segundos"></asp:Label>
            <asp:TextBox ID="TextBox6" runat="server"></asp:TextBox>
        </p>
    </form>
</body>
</html>
