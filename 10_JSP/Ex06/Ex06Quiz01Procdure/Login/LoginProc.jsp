<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
	String usrId = request.getParameter("usrId");
	String usrPass = request.getParameter("usrPass");
	
	String forwardPage = "Level1Form.jsp";
	if("jin".contentEquals(usrId)) forwardPage = "Level2Form.jsp";
	else if("admin".contentEquals(usrId)) forwardPage = "Level3Form.jsp";
	//infiscap인 경우 레벨1 권한 실행
    //- jin인 경우 레벨2 권한 실행
    //- admin인 경우 레벨3 권한 실행
%>
<jsp:forward page='<%=forwardPage %>'/>