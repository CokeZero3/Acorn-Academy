	#include <stdio.h>
//  �ּ�, �� �� ����
/*
	��� �ּ�
	������  ����
	����: ctrl + f5
	
	\n = ���� ��
*/
/*
	int main() {
		printf("<(^. .^)>\n");
		printf(" (\"(00)\")\n\n");
		printf("������� �ƿ�~");
	}
*/
/*
	int main(int argc, char* argv[]){
	printf("%d + %d = %d\n", 5, 12, 5 + 12);
	printf("%d + %d =\n", 5, 12, 5 + 12);
	printf("%d + %d = %d\n", 5, 12);
	}
*/
/*
int main(int argc, char* argv[]) {
	printf("Decimal: %d\n",173);
}
*/
/*
int main(int argc, char* argv[]) {
	printf("�Ǽ��� ���:%f\n", 123.456);
	printf("�Ǽ��� ���:%d\n", 123.456);
	printf("�Ǽ��� ���:%f\n", 123);
}
*/
/*
int main(int argc, char* argv[]) {
	printf("Decimal: %d\n", 173);
	printf("Decimal: %d\n", 0255);
	printf("Decimal: %d\n", 0xAD);

	printf("Octal: %o\n", 173);
	printf("Octal: %o\n", 0255);
	printf("Octal: %o\n", 0xAD);

	printf("Hexadecimal: %x\n", 173);
	printf("Hexadecimal: %x\n", 0255);
	printf("Hexadecimal: %x\n", 0xAD);
}
*/
/*
int main(int argc, char* argv[]) {
	printf("���� %c�� ASCII �ڵ� ���� %d�̴�.\n", 'a', 'a');
	printf("ASCII �ڵ� ���� %d�� ���ڴ� %c�̴�\n", 98, 98);

	printf("%s\n", "This is a string");
}
*/
/*
int main(int argc, char* argv[]) {
	printf("%s\n", "========================");
	printf("%s\t%s\t%s\n", "�̸�", "����", "�ּ�");
	printf("%s\n", "========================");
	printf("% s\t%d\t%s\n", "ȫ�浿", 20, "���¥��");
	printf("%s\t%d\t%s\n", "�̼���", 28, "�ٴ�");
}
*/

/*
int main(int argc, char* argv[]) {
	int age = 21;
	float weight = 50.0, height = 163.5;

		printf("���� ���̴� %d�� �Դϴ�\n", age);
		printf("���� �����Դ� %f(kg) �Դϴ�\n", weight);
		printf("���� ������ %f(cm) �Դϴ�\n", height);
}
*/
/*
int main(int argc, char* argv[]) {
	int num = 123;
	char ch = 'D';

	num = num + 1;
	ch = 'G';

	printf("num=%d\n", num);
	printf("ch=%c\n", ch);
}
*/
/*
int main(int argc, char* argv[]) {
	float height_inch = 70.0;
	float height_cm = height_inch * 2.54;

	printf("���� ������ %f(cm) �Դϴ�.", height_cm);
}
*/
/*
int main(int argc, char* argv[]) {
	char ch = 'A';
	int num = 5, ret;

	ch = 'C';
	ret = ch + num;
	printf("ret = %d\n", ret);
}
*/
/*
int main(int argc, char* argv[]) {
	int num1;
	float num2 = 367.78;

	num1 = num2;
	printf("num1 = %d \n", num1);
}
*/
/* ����/����=����, �Ǽ��� ���ϸ� (float)�� �־��ָ� �ȴ�.
int main(int argc, char* argv[]) {
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 / num2 = %f\n", (float)num1 / (float)num2);
	printf("num1 * num2 = %d\n", num1 * num2);
}
*/
/*10�� ������ ����� ���
int main(int argc, char* argv[]) {
	printf("%d\n", 10);
	printf("%ld\n", 1000);
	printf("%5d\n", 10);
	printf("%-5d\n", 10);
}
*/
/*
int main(int argc, char* argv[]) {
	char ch = 'A', str[20] = "character string";
	printf("���� = %3c\n", ch);
	printf("���ڿ� = %-20s\n", str);
}
*/
/*
int main(int argc, char* argv[]) {
	int num1, num2, sum;

	printf("���� 2���� �Է��ϼ���...");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("�� ���� ���� %d �Դϴ�.", sum);
}
*/
/*
int main(int argc, char* argv[]) {
	char name1[30], name2[30];
	printf("�̸��� �Է��ϼ���! ");
	scanf_s("%s", name1, sizeof(name1));
	printf("�̸��� �Է��ϼ���! ");
	scanf_s("%s", name2, sizeof(name2));
	printf("���� �̸��� %s �Դϴ�.\n", name1);
	printf("���� �̸��� %s �Դϴ�.\n", name2);
	printf("sizeof(name1):%d\n",sizeof(name1));
	printf("sizeof(name2):%d\n", sizeof(name2));
}
*/
/*
int main(int argc, char* argv[]) {
	int su1, su2, sum;

	printf("���� �� ���� �Է��ϼ���...");
	scanf_s("%d %d", &su1, &su2);
	sum = su1 + su2;
	printf("�� ������ ���� %d �Դϴ�.\n", sum);
}
*/
/*
int main(int argc, char* argv[]) {
	char name[30];
	int age;

	printf("����� �̸��� �����Դϱ�? ")
	scanf_s("%s", name, sizeof(name))
	printf("%s�� ���̴� �� ���Դϱ�", age)
	scanf_s("%d", &age)
	printf("%s�� ���̴� %d �Դϴ�.", name, age)
	scanf_s()
}
*/
//����
//���ڿ� ũ�� + null����(1����Ʈ)
//�ѱ��� �ѱ��ڴ� 2����Ʈ
/*
int main(int argc, char* argv[]) {
	char name[20];
	int age;
	printf("����� �̸��� �����Դϱ�?");
	//ȫ�浿
	scanf_s("%s", name, sizeof(name));
	printf("%s���� ���̴� �� ���Դϱ�?", name);
	scanf_s("%d", &age);
	printf("%s���� ���̴� %d���Դϴ�.", name, age);
}
*/
//����
/*
int main(int argc, char* argv[]) {
	float su;
	printf("�Ǽ��� �ϳ� �Է��ϼ���...");
	scanf_s("%f", &su);
	printf("su = %6.3f", su);
}
*/
/*
int main(int argc, char* argv[]) {
	char ch1, ch2, ch3;
	printf("�̸��� ù ���ڸ� 3�ڸ��� �����ڷ� �Է��ϼ���... "); 
	scanf_s("%c%c%c", &ch1, &ch2, &ch3, sizeof(ch1, ch2, ch3)); 
	printf("���� ���� %c%c%c �Դϴ�.\n", ch1, ch2, ch3); 
	printf("���� ���� %c  %c  %c �Դϴ�.\n", ch1, ch2, ch3);
}
*/
/*
int main(int argc, char* argv[]) {
	int kor, mat, eng, number; float average;
	printf("�й��� �Է��ϼ���... "); 
	scanf_s("%d", &number); 
	printf("3���� ������ �Է��ϼ���... "); 
	scanf_s("%d%d%d", &kor &mat, &eng);
	average = (float)(kor + mat + eng) / 3.0; 
	printf("�й� %d : ���� ��� = %4.1f\n", number, average);
}*/

