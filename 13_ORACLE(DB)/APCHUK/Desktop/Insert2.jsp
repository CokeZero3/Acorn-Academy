<%--insert.jsp --%>
<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.Connection"%>
<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<%
	Class.forName("oracle.jdbc.driver.OracleDriver");

	Connection conn = null;
	String msg = null;
	String jdbcDriver = "jdbc:oracle:thin:@localhost:1521:xe";
	String dbUsr = "c##jin";
	String dbPass = "jin1234";
	
	String sql = "INSERT INTO customers(CustomerID, CustomerName, "+ 
		   		 "ContactName, Address, City, PostalCode,  Country) "+
				 "VALUES(?, ?, ?, ?, ?, ?, ?) ";
	
	PreparedStatement pstmt = null;
	try{
		conn = DriverManager.getConnection(jdbcDriver, dbUsr, dbPass);
		pstmt = conn.prepareStatement(sql);
		pstmt.setInt(1, 10);
		pstmt.setString(2, "test");
		pstmt.setString(3, "test");
		pstmt.setString(4, "test");
		pstmt.setString(5, "test");
		pstmt.setString(6, "test");
		pstmt.setString(7, "test");
		
		pstmt.execute();
		out.print("���� ����<br/>");
		conn.close();
		msg = "���� ����";
	}catch(Exception e){
		e.printStackTrace();
		msg = "����";
	}
	out.print(msg);
	
%>