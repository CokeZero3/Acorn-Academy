<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<%!
	public String getGroup(String id){
		String group = "";
		if("infiscap".contentEquals(id))	group="read";
		else if("jin".contentEquals(id))	group="readWrite";
		else if("admin".contentEquals(id))	group="admin";
		
		return group;
	}
%>
<%
/*
반복문을 통해 처리도 가능하다. 
추후 DB를 사용한다면 직접적으로 level의 적용할 수 있으며
그럴경우 반복문을 사용할 필요가 없게 된다.
*/
	String usrId = request.getParameter("usrId");
	String usrPass = request.getParameter("usrPass");
	String group = getGroup(usrId);
	
	//DB에서 권한 그룹을 읽어들인다는 가정으로 실행
	if("read".contentEquals(group))	request.setAttribute("lvl", 1);
	else if("readWrite".contentEquals(group))	request.setAttribute("lvl", 2);
	else if("admin".contentEquals(group))	request.setAttribute("lvl", 3);
		
%>
<jsp:forward page='LevelForm.jsp'/>





