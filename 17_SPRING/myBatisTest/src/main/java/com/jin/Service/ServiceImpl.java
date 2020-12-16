package com.jin.Service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.jin.DTO.Person;
import com.jin.IDAO.IDao;
import com.jin.IService.IService;

@Service
public class ServiceImpl implements IService {
	@Autowired
	private IDao iDao;
	@Override
	public void insertProc(Person person) {
		iDao.insertProc(person);		
	}

}
