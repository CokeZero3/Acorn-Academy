package Java01.Basic.Ex04;

import java.util.Scanner;

/*���� : Ű(m)��Ű(m)��22
���� : Ű(m)��Ű(m)��21*/
public class Quiz01 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		float height = in.nextFloat();
		
		float standardWeightMan = height*height*22;
		float standardWeightWoman = height*height*21;
		
		System.out.println("���� ü�� ���");
		System.out.println("========================");
		System.out.println("���� : "+ standardWeightMan);
		System.out.println("���� : "+standardWeightWoman);
		System.out.println("========================");
		
		
	}
}
