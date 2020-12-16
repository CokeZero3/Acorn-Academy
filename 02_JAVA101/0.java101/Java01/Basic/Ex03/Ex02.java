package Java01.Basic.Ex03;

import java.util.Scanner;
/*
 * 주석 달기 shift + ctrl + /
 * 주석 해제 shift + ctrl + \
 */
public class Ex02 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		
		System.out.print("당신의 이름을 입력하세요?");
		String name = in.next();
		System.out.print(name+"님 나이를 입력하세요?");
		int age = in.nextInt();
		System.out.println(name+"님은 " + age + "살이군요");
		
	}
}
