<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
 <%
	String state = request.getParameter("state");	
	String title = "회원가입";
	
	if(state == null)	state = "membership";
	
	if("modify".contentEquals(state)){//null
		title = "정보수정";
	}
%>    
<h1><%=title %></h1>