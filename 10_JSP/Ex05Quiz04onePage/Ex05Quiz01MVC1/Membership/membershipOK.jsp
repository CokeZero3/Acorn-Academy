<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
    회원 정보에 입력되어있던 이름, 아이디전달
<%
	String usrName = request.getParameter("usrName");
    String usrId = request.getParameter("usrId");
    String usrPass = request.getParameter("usrPass");
    String usrPassOk = request.getParameter("usrPassOk");
    
    if(usrPass.contentEquals(usrPassOk))
    	//DB에 usrNmae, usrId, usrPass 저장
    	out.print("<script>alert('회원가입 성공')</script>");
    else
    	//membershipForm으로 이동
    	out.print(	"<script>"+
    				"alert('이전 페이지 이동');"+
    				//"history.back()"+
    				"history.go(-1)"+
    				"</script>");
%>
<html>
<body>
<h1>
회원가입이<br/>
되었습니다.<br/>
</h1>
<form action="membershipModifyForm.jsp" method="get">
	<input type="hidden" name="usrName" value="<%=usrName %>"/>
	<input type="hidden" name="usrId" value="<%=usrId %>"/>
	<input type="submit" value="수정"/>
</form>
</body>
</html>








