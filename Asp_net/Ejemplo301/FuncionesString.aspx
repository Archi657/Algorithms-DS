<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="FuncionesString.aspx.cs" Inherits="Ejemplo301.FuncionesString" %>

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
        <asp:Label ID="Label1" runat="server" Text="Digite el texto de entrada"></asp:Label>
        <asp:TextBox ID="txtEntrada" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Salida"></asp:Label>
            <asp:TextBox ID="txtSalida" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="bttnindex" runat="server" OnClick="bttnindex_Click" Text="IndexOf" />
        <asp:Button ID="bttnLastIndex" runat="server" OnClick="bttnLastIndex_Click" Text="LastIndexOf" />
        <asp:Button ID="bttnLength" runat="server" OnClick="bttnLength_Click" Text="Length" />
        <asp:Button ID="bttnContains" runat="server" OnClick="bttnContains_Click" Text="Contains" />
        <p>
            <asp:Button ID="bttnToUpper" runat="server" OnClick="bttnToUpper_Click" Text="ToUpper" />
            <asp:Button ID="bttnToLower" runat="server" OnClick="bttnToLower_Click" Text="ToLower" />
            <asp:Button ID="bttnSubString" runat="server" OnClick="bttnSubString_Click" Text="SubString" />
            <asp:Button ID="bttnSubStringXY" runat="server" OnClick="bttnSubStringXY_Click" Text="SubString(x,y)" />
        </p>
        <asp:Button ID="bttnReplace" runat="server" OnClick="bttnReplace_Click" Text="Replace" />
        <asp:Button ID="bttnRemove" runat="server" OnClick="bttnRemove_Click" Text="Remove" />
        <asp:Button ID="bttnReverse" runat="server" OnClick="bttnReverse_Click" Text="Reverse" />
        <asp:Button ID="bttnInsert" runat="server" OnClick="bttnInsert_Click" Text="Insert" />
    </form>
</body>
</html>
