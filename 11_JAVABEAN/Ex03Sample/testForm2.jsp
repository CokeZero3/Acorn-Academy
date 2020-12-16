<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="EUC-KR"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="EUC-KR">
<title>Insert title here</title>
<script type="text/javascript">
function go2() {
	let testForm = document.getElementById("testForm");
	testForm.action = "testProc2.jsp";
	
	testForm.submit();
}
</script>
</head>
<body>
<form id="testForm" action="testProc1.jsp">
	<input type="text" name="id"/>
	<input type="submit" value="1go">
	<button onclick="go2();">2go</button>
</form>
</body>
</html>