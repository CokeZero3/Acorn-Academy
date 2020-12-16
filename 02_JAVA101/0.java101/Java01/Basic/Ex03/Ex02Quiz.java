package Java01.Basic.Ex03;

import java.util.Scanner;
/*
 * 주석 달기 shift + ctrl + /
 * 주석 해제 shift + ctrl + \
 */
public class Ex02Quiz {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		String age = in.next();
		System.out.println(age + 10);
		
	}
}
