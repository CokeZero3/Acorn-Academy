<%--insert.jsp --%>
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
				 "VALUES(autoInc.nextval, 'CustomerName 3',  "+
		    	 "'ContactName 3', 'Address 3', 'City 3', 'PostalCode 3', 'Country 3') ";
	
	Statement stmt = null;
	try{
		conn = DriverManager.getConnection(jdbcDriver, dbUsr, dbPass);
		stmt = conn.createStatement();
		stmt.execute(sql);
		out.print("���� ����<br/>");
		conn.close();
		msg = "���� ����";
	}catch(Exception e){
		e.printStackTrace();
		msg = "����";
	}
	out.print(msg);
	
%>