<%--memberForm.jsp --%>
<%@page import="java.net.URLDecoder"%>
<%@ page contentType="text/html; charset=UTF-8"%>
<%
	String email = request.getParameter("email");
	String authNum = (String)session.getAttribute("authNum");
	
	//완료시 삭제
	out.print(authNum);
	
	String errorLog = request.getParameter("errorLog");
	errorLog = (errorLog==null)?"":URLDecoder.decode(errorLog, "UTF-8");
	/* 
	if(errorLog==null)	errorLog="";
	else				errorLog = URLDecoder.decode(errorLog, "UTF-8");
	 */
%>
<script type="text/javascript">
<!--
function chkTxtFld(txtFld) {
	var id = document.getElementById(txtFld);
	if(id.value==""){
		alert("필수 항목이 피어있습니다.");
		id.focus();
		return false;
	}
	return true;
}
function chkPass(pwParam, pwOkParam) {
	let pw = document.getElementById(pwParam);
	let pwOk = document.getElementById(pwOkParam);
	
	if(pw.value !=pwOk.value){
		alert("비밀번호가 잘못되었습니다.");
		pw.value="";
		pwOk.value="";
		pw.focus();
		return false;
	}
	return true;
}
function sendMember(){
	let txtFldArr =['id', 'pw', 'pwOk', 'authNum'];
	
	for(let idx in txtFldArr){
		if(!chkTxtFld(txtFldArr[idx]))	return;
	}
	
	if( !chkPass(txtFldArr[1], txtFldArr[2]) ) return;
	
	document.getElementById('frm').submit();
}
//-->
</script>
<center>
<form id="frm" action="<%=request.getContextPath() %>/membership/memberProc.jsp" method="post">
<!-- <input type="hidden" name="frmPage" value="loginForm.jsp"> -->
<table>
	<tr>
		<td align='right' height=40>아이디</td>
		<td>
			<input type=text id="id" name='id' placeholder='id 입력'/> 
		</td>
		<td align='right' width=120>성 별</td>
		<td>
			<input type=radio name='gender' value='m' checked="checked"/>남자
			<input type=radio name='gender' value='w' />여자 
		</td>
	</tr>
	<tr>
		<td align='right' height=40>패스워드</td>
		<td>
			<input type=text id="pw" name='pw' placeholder='pw 입력'/> 
		</td>
		<td align='right'>패스워드 확인</td>
		<td>
			<input type=text id="pwOk" name='pwOk' placeholder='pw 입력'/> 
		</td>
	</tr>
	<tr>
		<td align='right' height=40>E-Mail</td>
		<td>
			<input type=text name='email' value="<%=email %>"/> 
		</td>
		<td align='right'>인증번호</td>
		<td>
			<input type=text id="authNum" name='authNum' placeholder='인증번호 입력'/> 
		</td>
	</tr>
	<tr>
		<td align='center' height=40 colspan=4>
			<input type=button onclick="sendMember();" value='로그인' style="width: 120px; "/>
			<input type=reset value='취소' style="width: 120px; "/>	 
		</td>
	</tr>
</table>
</form>
<%=errorLog %>
</center>














