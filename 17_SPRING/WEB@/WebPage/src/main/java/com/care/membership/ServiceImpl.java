package com.care.membership;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.bind.support.SessionStatus;

@Service
public class ServiceImpl implements IService {
	@Autowired
	private IDao iDao;
	final String NOEXISTID = "��� ������ ���̵� �Դϴ�.";
	final String EXISTID = "�ߺ��� ���̵� �Դϴ�.";
	final String AUTHCONFIRMOK = "���� ����.";
	final String AUTHCONFIRMFAILD = "���� ����.";
	@Override
	public String isExistId(Member member) {
		if(iDao.isExistId(member.getId())==0)
			return NOEXISTID;
		return EXISTID;
	}
	@Override
	public String reqAuthNum() {
		String authNum = String.format("%04d", (int)(Math.random()*10000));
		return authNum;
	}
	@Override
	public String authNumConfirm(String sAuthNum, String reqAuthNum, SessionStatus session) {
		if(sAuthNum!=null && reqAuthNum.contentEquals(sAuthNum)) {
			session.setComplete();
			return AUTHCONFIRMOK;
		}
		return AUTHCONFIRMFAILD;
	}
	@Override
	public List<Zipcode> searchZipcode(String addr) {
		return iDao.searchZipcode(addr);
	}
}












