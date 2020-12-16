<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
 <%
	String state = request.getParameter("state");
	Integer lvl = (Integer)request.getAttribute("lvl");
	
	String title = "로그인";
	
	if(state == null)	state = "login";
	
	if("lvl".contentEquals(state)){//null
		title = "레벨 "+ lvl +" 권한";
	}
	
	
%>    
<h1><%=title %></h1>