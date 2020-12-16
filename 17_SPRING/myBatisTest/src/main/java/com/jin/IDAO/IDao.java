package com.jin.IDAO;

import org.springframework.stereotype.Repository;

import com.jin.DTO.Person;

@Repository
public interface IDao {
	public void insertProc(Person person);
}
