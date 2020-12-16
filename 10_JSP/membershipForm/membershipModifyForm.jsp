<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
	String usrName = (String)session.getAttribute("usrName");
	String usrId = (String)session.getAttribute("usrId"); 
%>
<html>
<head>
<title>Membership</title>
</head>
<body>
<form action="membershipOK.jsp" method="post">    
<table>
	<tr> <td colspan="2"><h1>정보수정</h1></td></tr>
	<tr> <td colspan="2"><hr/></td></tr>
	<tr>
		<td align="right">이름</td>
		<td><input type=text name="usrName" value="<%=usrName%>"/></td>
	</tr>
	<tr>
		<td align="right">아이디</td>
		<td><input type=text name="usrId" value="<%=usrId%>" readonly="readonly"/></td>
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
		<td align="right"><input type=submit value="회원가입"/></td>
		<td align="center"><input type=reset value="취소"/></td>
	</tr>
	<tr> <td colspan="2"><hr/></td></tr>
	<tr> <td colspan="2">Copyright @ CARE Lab. All rights reserved.</td></tr>
</table>
</form>
</body>
</html>