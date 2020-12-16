<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
	String state = request.getParameter("state");
	String usrName = request.getParameter("usrName");
	String usrId = request.getParameter("usrId");
%>
<%@ include file="../Common/header.jspf" %>
<html>
<head>
<title>Membership</title>
</head>
<body>
<jsp:include page="../Common/title.jsp">
	<jsp:param value="<%=state %>" name="state"/>
</jsp:include>

<jsp:include page="../Common/inputForm.jsp">
	<jsp:param value="<%=state %>" name="state"/>
	<jsp:param value="<%=usrName %>" name="state"/>
	<jsp:param value="<%=usrId %>" name="state"/>
</jsp:include>
<%@ include file="../Common/footer.jspf" %>
</body>
</html>











