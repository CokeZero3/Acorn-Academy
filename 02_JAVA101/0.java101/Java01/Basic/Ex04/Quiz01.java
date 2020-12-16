package Java01.Basic.Ex04;

import java.util.Scanner;

/*남자 : 키(m)×키(m)×22
여자 : 키(m)×키(m)×21*/
public class Quiz01 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		float height = in.nextFloat();
		
		float standardWeightMan = height*height*22;
		float standardWeightWoman = height*height*21;
		
		System.out.println("펴준 체중 계산");
		System.out.println("========================");
		System.out.println("남자 : "+ standardWeightMan);
		System.out.println("영자 : "+standardWeightWoman);
		System.out.println("========================");
		
		
	}
}
