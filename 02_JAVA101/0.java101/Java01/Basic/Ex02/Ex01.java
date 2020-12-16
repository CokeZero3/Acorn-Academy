package Java01.Basic.Ex02;

import java.util.Scanner;

/*
 * 외부 클래스 이용법
 * 1. C의 include와 같은 기능으로 import를 이용하여 
 * 사용할 클래스가 있는 패키지를 선언한다.
 * 2. 클래스명  변수명  = new 클래스명() 형식으로 변수를 만든다.
 * 클래스를 변수로 만드는 것을 인스턴스라고 한다.(변수명 == 인스턴스)
 * 3. 타이핑을 통해 모든 문장을 완성하고 빨간줄이 나타나면 에러를 의미하며
 * 에러 부분에 마우스를 올리거나  왼쪽 숫자 부분의  x모양을 클릭하면
 * 에러를 해결할 방법을 이클립스에서 제시해 준다.
 * 4. 보통 외부 클래스를 이용할 경우 import가 안되어 있어 발생되며
 * 자동완성 기능을 적용하여 타이핑하는 것이바람직하다.
 */
public class Ex01 {
	public static void main(String [] args) {
		@SuppressWarnings("resource")
		Scanner in = new Scanner(System.in);
		
		System.out.println("name : ");
		String name = in.next();
		System.out.println(name);
	}
}
/*
 * 당신의 이름을 입력하세요? 000
 * 000님 안녕하세요
 */