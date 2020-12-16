package com.care.membership;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.SessionAttributes;
import org.springframework.web.bind.support.SessionStatus;

import com.care.WebPage.CommonController;

@SessionAttributes("sessionAuthNum")
@RequestMapping("membership")
@Controller
public class ControllerImpl {
	private static final Logger logger = LoggerFactory.getLogger(ControllerImpl.class);
	
	@Autowired
	private IService iServ;
	@RequestMapping("reqAuthNum")
	public String reqAuthNum(Member member, Model model) {
		model.addAttribute("sessionAuthNum", iServ.reqAuthNum());
		model.addAttribute("msg", "인증번호를 이메일로 전송하였습니다.");
		model.addAttribute("member", member);
		
		return "forward:/membership";
	}
	@RequestMapping("authNumConfirm")
	public String authNumConfirm(Member member, Model model, 
			/* @ModelAttribute("sessionAuthNum") String sAuthNum, */ 
			@RequestParam("authNum") String reqAuthNum, 
			SessionStatus session) {
		String sAuthNum = (String)model.getAttribute("sessionAuthNum");
		model.addAttribute("msg", iServ.authNumConfirm(sAuthNum, reqAuthNum, session));
		model.addAttribute("member", member);
		
		return "forward:/membership";
	}
	@RequestMapping("searchPostCode")
	public String searchPostCode() {
		return "MemberForm/searchPostCodeForm";
	}
	
	@RequestMapping("searchZipcode")
	public String searchZipcode(@RequestParam("addr") String addr, Model model) {
		model.addAttribute("zipcodeLst", iServ.searchZipcode(addr));
		return "MemberForm/searchPostCodeForm";
	}
	@RequestMapping("isExistID")
	public String isExistID(Member member, Model model) {
		model.addAttribute("msg", iServ.isExistId(member));
		model.addAttribute("member", member);
		
		return "forward:/membership";
	}
}







