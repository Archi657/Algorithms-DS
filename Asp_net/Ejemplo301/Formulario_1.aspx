<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Formulario_1.aspx.cs" Inherits="Ejemplo301.Formulario_1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <%
            for (int i=1; i<7; i++)
            {
            %>
            <h<%=i%>>Hola...ASP.NET a su alcance</h<%=i%>>
            <%
            }
            %>
        </div>
    </form>
</body>
</html>
