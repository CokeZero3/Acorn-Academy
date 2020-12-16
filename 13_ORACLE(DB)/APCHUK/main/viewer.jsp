<%--viewer.jsp --%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
    
<%!
	public String Select(String [] opts, String tagName, String value){
		String selectStr;
		selectStr = "<select name=" + tagName + ">";
		for(String opt : opts){
			selectStr += "<option value="+opt;
			if(opt.equals(value))
				selectStr += " selected='selected'";
			selectStr += ">" + opt + "</option>";
		} 
		selectStr += "</select>";
		return selectStr;	
	}
%>
<%
	String tableName = request.getParameter("tableName");
	String []opts = {"Customers", "Categories", "Employee", "OrderDetails", 
					"Orders", "Products", "Shippers", "Suppliers"};
	String selectStr = Select(opts, "tableName", tableName);
%>
<html>
<body>
<form action="main.jsp" method="post">
<%out.println(selectStr); %>
<input type="submit" value="º¸³»±â">
</form>
</body>
</html>