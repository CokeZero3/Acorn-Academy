package Java01.Basic.Ex03;

import java.util.Scanner;
/*
 * �ּ� �ޱ� shift + ctrl + /
 * �ּ� ���� shift + ctrl + \
 */
public class Ex02 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		
		System.out.print("����� �̸��� �Է��ϼ���?");
		String name = in.next();
		System.out.print(name+"�� ���̸� �Է��ϼ���?");
		int age = in.nextInt();
		System.out.println(name+"���� " + age + "���̱���");
		
	}
}
