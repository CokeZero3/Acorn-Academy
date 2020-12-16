<%--memberProc.jsp --%>
<%@page import="java.net.URLEncoder"%>
<%@ page contentType="text/html; charset=UTF-8"%>
<jsp:useBean id="member" class="Care.Lab.Member"/>
<jsp:setProperty property="*" name="member"/>
<%
	String authNum = request.getParameter("authNum");
	String authNumAttr = (String)session.getAttribute("authNum");
	String pagePath = "memberForm";
	String errorLog = " 인증번호가 일치하지 않습니다.";
	if(authNum.contentEquals(authNumAttr))
		pagePath = "loginForm";
%>
<jsp:forward page="/index.jsp">
<jsp:param value="<%=pagePath %>" name="frmPage"/>
<jsp:param value='<%=URLEncoder.encode(errorLog, "UTF-8") %>' name="errorLog"/>
</jsp:forward>




















