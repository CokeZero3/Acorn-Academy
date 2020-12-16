package com.jin.Ex01;

import java.util.List;

public class CalcImple implements ICalc {
	private int cnt;
	private int sum;
	private double avg;
	public CalcImple() {
		cnt=0;
		sum=0;
		avg=0.0;
	}
	@Override
	public void SumCalc(List<Integer> lst) {
		cnt = lst.size();
		for(Integer n : lst)
			sum += n;		
	}
	@Override
	public void avgCalc() {
		try {
			avg = (double)sum / (double)cnt;	
		}catch(Exception e) {
			avg = 0.0;
		}
	}
	@Override
	public void Display(List<Integer> lst) {
		SumCalc(lst);
		avgCalc();
		System.out.println("avg : "+avg);
	}

}
