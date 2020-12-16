package com.jin.db;

import java.text.DateFormat;
import java.util.Date;
import java.util.Locale;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import com.jin.DTO.Person;
import com.jin.IService.IService;

@Controller
public class HomeController {
	
	private static final Logger logger = LoggerFactory.getLogger(HomeController.class);
	
	@Autowired
	private IService iServ;
	
	@RequestMapping(value = "/", method = RequestMethod.GET)
	public String home() {
		return "insert";
	}
	@RequestMapping(value = "/{formPath}")
	public String home(@PathVariable("formPath") String formPath) {
		return formPath;
	}
	@RequestMapping(value="/insertProc")
	public String insertProc(Person person) {
		logger.warn(person.getFirstname());
		iServ.insertProc(person);
		
		return "insert";
	}
}








