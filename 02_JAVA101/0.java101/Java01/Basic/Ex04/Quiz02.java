package Java01.Basic.Ex04;

import java.util.Scanner;

/*(����ü�� - ǥ�� ü��) / ǥ�� ü�� * 100*/
public class Quiz02 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		System.out.println("����� Ű�� �Է��ϼ���(m)");
		float height = in.nextFloat();
		
		float standardWeightMan = height*height*22;
		float standardWeightWoman = height*height*21;
		
		System.out.println("���� ü�� ���");
		System.out.println("========================");
		System.out.println("���� : "+ standardWeightMan);
		System.out.println("���� : "+standardWeightWoman);
		System.out.println("========================");
		
		System.out.println("����� �����Ը� �Է��ϼ���");
		float weight = in.nextFloat();
		System.out.println("�񸸵� ���");
		System.out.println("========================");
		System.out.println("���� : "+ (weight - standardWeightMan)/standardWeightMan*100);
		System.out.println("���� : "+(weight - standardWeightWoman)/standardWeightWoman*100);
		System.out.println("========================");
	}
}








