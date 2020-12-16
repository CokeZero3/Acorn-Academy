package Java01.Basic.Ex04;

import java.util.Scanner;

/*(현재체중 - 표준 체중) / 표준 체중 * 100*/
public class Quiz02 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		System.out.println("당신의 키를 입력하세요(m)");
		float height = in.nextFloat();
		
		float standardWeightMan = height*height*22;
		float standardWeightWoman = height*height*21;
		
		System.out.println("펴준 체중 계산");
		System.out.println("========================");
		System.out.println("남자 : "+ standardWeightMan);
		System.out.println("영자 : "+standardWeightWoman);
		System.out.println("========================");
		
		System.out.println("당신의 몸무게를 입력하세요");
		float weight = in.nextFloat();
		System.out.println("비만도 계산");
		System.out.println("========================");
		System.out.println("남자 : "+ (weight - standardWeightMan)/standardWeightMan*100);
		System.out.println("영자 : "+(weight - standardWeightWoman)/standardWeightWoman*100);
		System.out.println("========================");
	}
}








