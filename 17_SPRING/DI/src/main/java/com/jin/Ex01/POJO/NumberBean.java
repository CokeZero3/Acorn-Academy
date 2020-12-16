package com.jin.Ex01.POJO;

import java.util.ArrayList;
import java.util.List;

import com.jin.Ex01.ICalc;

public class NumberBean {
	private int num1;
	private int num2;
	private ICalc iCalc;
	public void Display() {
		List<Integer> lst = new ArrayList<Integer>();
		lst.add(num1);
		lst.add(num2);
		
		iCalc.Display(lst);
	}
	public int getNum1() {
		return num1;
	}
	public void setNum1(int num1) {
		this.num1 = num1;
	}
	public int getNum2() {
		return num2;
	}
	public void setNum2(int num2) {
		this.num2 = num2;
	}
	public ICalc getiCalc() {
		return iCalc;
	}
	public void setiCalc(ICalc iCalc) {
		this.iCalc = iCalc;
	}
	
}
