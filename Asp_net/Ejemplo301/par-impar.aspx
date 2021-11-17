<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="par-impar.aspx.cs" Inherits="Ejemplo301.par_impar" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
        </div>
        <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Button" />
        <p>
            <asp:TextBox ID="TextBox3" runat="server" Height="217px" TextMode="MultiLine"></asp:TextBox>
            <asp:TextBox ID="TextBox4" runat="server" Height="210px" OnTextChanged="TextBox4_TextChanged" TextMode="MultiLine"></asp:TextBox>
        </p>
    </form>
</body>
</html>
