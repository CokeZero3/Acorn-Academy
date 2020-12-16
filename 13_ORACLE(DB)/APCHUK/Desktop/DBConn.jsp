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
	try{
		conn = DriverManager.getConnection(jdbcDriver, dbUsr, dbPass);
		out.print("立加 己傍<br/>");
		conn.close();
		msg = "立加 辆丰";
	}catch(Exception e){
		e.printStackTrace();
		msg = "角菩";
	}
	out.print(msg);
	
%>