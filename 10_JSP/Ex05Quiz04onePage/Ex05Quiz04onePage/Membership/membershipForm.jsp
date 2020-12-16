<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
	String state = request.getParameter("state");
	String usrName = request.getParameter("usrName");
	String usrId = request.getParameter("usrId");
	
	String title = "회원가입";
	String btnName = "회원가입";
	String readonly = "";
	
	if(state == null)	state = "membership";
	if(usrName == null)	usrName = "";
	if(usrId == null)	usrId = "";
	
	if("modify".contentEquals(state)){//null
		title = "정보수정";
		btnName = "수정";
		readonly = "readonly";
	}
%>    
<html>
<head>
<title>Membership</title>
</head>
<body>
<h1><%=title %></h1>
<hr/>

<form action="membershipProc.jsp" method="post">    
<table>
	<tr>
		<td align="right">이름</td>
		<td><input type=text name="usrName" value="<%=usrName %>"/></td>
	</tr>
	<tr>
		<td align="right">아이디</td>
		<td><input type=text name="usrId" value="<%=usrId %>" <%=readonly %>/></td>
	</tr>
	<tr>
		<td align="right">패스워드</td>
		<td><input type=password name="usrPass"/></td>
	</tr>
	<tr>
		<td align="right">패스워드 확인</td>
		<td><input type=password name="usrPassOk"/></td>
	</tr>
	<tr>
		<td align="right"><input type=submit value="<%=btnName %>"/></td>
		<td align="center"><input type=reset value="취소"/></td>
	</tr>
</table>
</form>

<hr/>
Copyright @ CARE Lab. All rights reserved.
</body>
</html>











