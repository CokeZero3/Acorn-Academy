package com.jin.Ex01;

import org.springframework.context.support.AbstractApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.context.support.GenericXmlApplicationContext;

import com.jin.Ex01.POJO.HelloBean;
import com.jin.Ex01.POJO.NumberBean;

public class MainClass {

	public static void main(String[] args) {
		String configLoc = "classpath:HelloBeanCTX.xml";
		String quizCtxLoc = "classpath:QuizCTX.xml";

		AbstractApplicationContext ctx = 
				new ClassPathXmlApplicationContext(configLoc, quizCtxLoc);
		//컨테이너에서 객체 얻기
		HelloBean hello = ctx.getBean("helloBean", HelloBean.class);	
		hello.Display();
		
		NumberBean numberBean = ctx.getBean("numberBean", NumberBean.class);
		numberBean.Display();
	}

}









