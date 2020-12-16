<%--viewProc.jsp --%>
<%@page import="java.util.ArrayList"%>
<%@page import="java.util.HashMap"%>
<%@page import="java.util.List"%>
<%@page import="java.util.Map"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Connection"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<%!
	public int getRowCount(ResultSet rs){
		int rowCnt = 0;
		try{
			rs.last();
			rowCnt = rs.getRow();
			rs.beforeFirst();
		}catch(Exception e){
			rowCnt = 0;
		}
		
		return rowCnt;
	}
public Map<String, List<String>> setColumns(){
	Map<String, List<String>> map = new HashMap<>();
	List<String> lst = new ArrayList<>();
	lst.add("customerID");
	lst.add("customerName");
	lst.add("ContactName");
	lst.add("Address");
	lst.add("City");
	lst.add("PostalCode");
	lst.add("Country");
	map.put("Customers", lst);
	
	lst = new ArrayList<>();
	lst.add("CategoryID");
	lst.add("CategoryName");
	lst.add("Description");
	
	map.put("Categories", lst);
	
	lst = new ArrayList<>();
	lst.add("EmployeeID");
	lst.add("LastName");
	lst.add("FirstName");
	lst.add("BirthDate");
	lst.add("Photo");
	lst.add("Notes");
	
	map.put("Employee", lst);
	
	lst = new ArrayList<>();
	lst.add("OrderDetailID");
	lst.add("OrderID");
	lst.add("ProductID");
	lst.add("Quantity");
	
	map.put("OrderDetails", lst);
	
	lst = new ArrayList<>();
	lst.add("OrderID");
	lst.add("CustomerID");
	lst.add("EmployeeID");
	lst.add("OrderDate");
	lst.add("ShipperID");
	
	map.put("Orders", lst);
	
	lst = new ArrayList<>();
	lst.add("ProductID");
	lst.add("ProductName");
	lst.add("SupplierID");
	lst.add("CategoryID");
	lst.add("Unit");
	lst.add("Price");
	
	map.put("Products", lst);
	
	lst = new ArrayList<>();
	lst.add("ShipperID");
	lst.add("ShipperName");
	lst.add("Phone");
	
	map.put("Shippers", lst);
	
	lst = new ArrayList<>();
	lst.add("SupplierID");
	lst.add("SupplierName");
	lst.add("ContactName");
	lst.add("Address");
	lst.add("City");
	lst.add("PostalCode");
	lst.add("Country");
	lst.add("Phone");
	map.put("Suppliers", lst);
	
	return map;
}
	public String DisplayTable(ResultSet rs, List<String> lst){
		String tableTag = "";
		tableTag += ("<table>");
		tableTag += ("<tr>");
		for(String str:lst)
			tableTag += ("<td align='center'>"+str+"</td>");
		
		try{
			while(rs.next()){
				tableTag += ("<tr>");
				for(String str:lst)
					tableTag += ("<td align='center'>" + rs.getString(str) + "</td>");
				
				tableTag += ("</tr>");
			}
		}catch(Exception e){
			tableTag = "<tr><td>Exception</td></tr>";
		}
		tableTag += ("</table>");
		
		return tableTag;
	}
%>
<%
	request.setCharacterEncoding("EUC-KR");
	String tableName = request.getParameter("tableName");
 
	Class.forName("oracle.jdbc.driver.OracleDriver");

	Connection conn = null;
	String jdbcDriver = "jdbc:oracle:thin:@localhost:1521:xe";
	String dbUsr = "c##jin";
	String dbPass = "jin1234";
	String sql = "SELECT * FROM "+ tableName;
	
	PreparedStatement pstmt = null;
	ResultSet rs = null;
	try{
		conn = DriverManager.getConnection(jdbcDriver, dbUsr, dbPass);
		//커서를 이동시키기 위해서 사용됨
		//ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE
		pstmt = conn.prepareStatement(sql, ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_UPDATABLE);
		rs = pstmt.executeQuery();
		
		out.println("Number of Records : " + getRowCount(rs) + "<br/>");
		Map<String, List<String>> map = setColumns();
		
		out.println(DisplayTable(rs, map.get(tableName)));
		
	}catch(Exception e){
		e.printStackTrace();
	}finally{
		if(rs!=null)	rs.close();
		if(pstmt!=null)	pstmt.close();
		if(conn!=null)	conn.close();
	}
		
%>













