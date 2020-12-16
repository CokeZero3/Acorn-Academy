<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<html>
<head>
<title>Login</title>
</head>
<body>
<div id=body>
<jsp:include page="../Common/title.jsp"/>
<hr/>
<form action="LoginProc.jsp" method="post">    
<table>
	<tr>
		<td align="right">아이디</td>
		<td><input type=text name="usrId"/></td>
	</tr>
	<tr>
		<td align="right">패스워드</td>
		<td><input type=password name="usrPass"/></td>
	</tr>
	<tr>
		<td align="right"><input type=submit value="로그인"/></td>
		<td align="center"><input type=reset value="취소"/></td>
	</tr>
</table>
</form>
</div>
</body>
</html>