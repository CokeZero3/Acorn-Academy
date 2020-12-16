package com.care.membership;

import java.util.List;

import org.springframework.web.bind.support.SessionStatus;

public interface IService {
	public String isExistId(Member member);
	public String reqAuthNum();
	public String authNumConfirm(String sAuthNum, String reqAuthNum, SessionStatus session);
	public List<Zipcode> searchZipcode(String addr);
}
