<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="capture5values.aspx.cs" Inherits="Ejemplo301.capture5values" %>

&nbsp;

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Capture 5" />
        </div>
        <asp:TextBox ID="TextBox2" runat="server" Height="174px" TextMode="MultiLine"></asp:TextBox>
    </form>
</body>
</html>
