package com.care.membership;

import java.util.List;

public interface IDao {
	public int isExistId(String id);
	public List<Zipcode> searchZipcode(String addr);
}
