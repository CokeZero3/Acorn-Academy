<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%
/*
반복문을 통해 처리도 가능하다. 
추후 DB를 사용한다면 직접적으로 level의 적용할 수 있으며
그럴경우 반복문을 사용할 필요가 없게 된다.
*/
	String usrId = request.getParameter("usrId");
	String usrPass = request.getParameter("usrPass");
	
	String forwardPage = "";
	String [] usrIds={"infiscap", "jin", "admin"};
	
	for(int i=0;i<usrIds.length;i++){
		if(usrIds[i].contentEquals(usrId)){
			forwardPage = "Level"+(i+1)+"Form.jsp";
			break;
		}
	}
%>
<jsp:forward page='<%=forwardPage %>'/>