<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
	Integer lvl = (Integer)request.getAttribute("lvl");
	String authority = "-읽기";
	
	switch(lvl){
	case 3:authority += "<br/>-회원탈퇴";
	case 2:authority += "<br/>-쓰기";
	}
%>
<html>
<head>
<title>Login</title>
</head>
<body>
<div id=body>
<jsp:include page="../Common/title.jsp">
	<jsp:param value="lvl" name="state"/>
</jsp:include>
<hr/>
<h4>
	<%=authority %>
</h4>

<form action="LoginForm.jsp" method="post">    
<input type="submit" value="로그아웃">
</form>
</div>
</body>
</html>