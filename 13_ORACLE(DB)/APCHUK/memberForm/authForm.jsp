<%--authForm.jsp --%>
<%@ page contentType="text/html; charset=UTF-8"%>
<script type="text/javascript">
<!--
function sendEmail() {
	var reg = /^[a-z][a-z0-9_-]{3,20}@([a-z\d\.-]+)\.([a-z\.]{2,6})$/;
	var email = document.getElementById("email");
	if(email.value ==""){
		alert('email을 입력하세요');
		return;
	}
	
	if( !reg.test(email.value) ){
		alert('이메일 형식이 잘못되었습니다.');
		return;
	}
	document.getElementById("frm").submit();
}
//-->
</script>
<center>
<form id="frm" action="<%=request.getContextPath() %>/membership/authProc.jsp" method="post">
<table>
	<tr>
		<td>E-Mail
			<input type=text id="email" name='email' placeholder='email 입력' style="width: 200px; "/>
			<input type=button onclick="sendEmail();" value='인증번호 전송' style="width: 120px; "/> 
		</td>
	</tr>
</table>
</form>
</center>
