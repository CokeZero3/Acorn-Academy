package com.jin.Ex01.POJO;

import com.jin.Ex01.IHello;

public class HelloBean {
	private String hello;
	private IHello iHello;
	
	public IHello getiHello() {
		return iHello;
	}

	public void setiHello(IHello iHello) {
		this.iHello = iHello;
	}

	public String getHello() {
		return hello;
	}

	public void setHello(String hello) {
		this.hello = hello;
	}
	public void Display() {
		iHello.Display(hello);
	}
}
