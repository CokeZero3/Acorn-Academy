package Java01.Basic.Ex02;

import java.util.Scanner;

/*
 * �ܺ� Ŭ���� �̿��
 * 1. C�� include�� ���� ������� import�� �̿��Ͽ� 
 * ����� Ŭ������ �ִ� ��Ű���� �����Ѵ�.
 * 2. Ŭ������  ������  = new Ŭ������() �������� ������ �����.
 * Ŭ������ ������ ����� ���� �ν��Ͻ���� �Ѵ�.(������ == �ν��Ͻ�)
 * 3. Ÿ������ ���� ��� ������ �ϼ��ϰ� �������� ��Ÿ���� ������ �ǹ��ϸ�
 * ���� �κп� ���콺�� �ø��ų�  ���� ���� �κ���  x����� Ŭ���ϸ�
 * ������ �ذ��� ����� ��Ŭ�������� ������ �ش�.
 * 4. ���� �ܺ� Ŭ������ �̿��� ��� import�� �ȵǾ� �־� �߻��Ǹ�
 * �ڵ��ϼ� ����� �����Ͽ� Ÿ�����ϴ� ���̹ٶ����ϴ�.
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
 * ����� �̸��� �Է��ϼ���? 000
 * 000�� �ȳ��ϼ���
 */