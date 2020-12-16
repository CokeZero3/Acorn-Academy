	#include <stdio.h>
//  주석, 한 줄 설명
/*
	블록 주석
	여러줄  설명
	실행: ctrl + f5
	
	\n = 다음 줄
*/
/*
	int main() {
		printf("<(^. .^)>\n");
		printf(" (\"(00)\")\n\n");
		printf("배고프다 아웅~");
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
	printf("실수형 상수:%f\n", 123.456);
	printf("실수형 상수:%d\n", 123.456);
	printf("실수형 상수:%f\n", 123);
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
	printf("문자 %c의 ASCII 코드 값은 %d이다.\n", 'a', 'a');
	printf("ASCII 코드 값이 %d인 문자는 %c이다\n", 98, 98);

	printf("%s\n", "This is a string");
}
*/
/*
int main(int argc, char* argv[]) {
	printf("%s\n", "========================");
	printf("%s\t%s\t%s\n", "이름", "나이", "주소");
	printf("%s\n", "========================");
	printf("% s\t%d\t%s\n", "홍길동", 20, "산골짜기");
	printf("%s\t%d\t%s\n", "이순신", 28, "바다");
}
*/

/*
int main(int argc, char* argv[]) {
	int age = 21;
	float weight = 50.0, height = 163.5;

		printf("나의 나이는 %d세 입니다\n", age);
		printf("나의 몸무게는 %f(kg) 입니다\n", weight);
		printf("나의 신장은 %f(cm) 입니다\n", height);
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

	printf("나의 신장은 %f(cm) 입니다.", height_cm);
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
/* 정수/정수=정수, 실수를 원하면 (float)를 넣어주면 된다.
int main(int argc, char* argv[]) {
	int num1 = 25, num2 = 3;

	printf("num1 / num2 = %d\n", num1 / num2);
	printf("num1 / num2 = %f\n", (float)num1 / (float)num2);
	printf("num1 * num2 = %d\n", num1 * num2);
}
*/
/*10진 정수를 사용할 경우
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
	printf("문자 = %3c\n", ch);
	printf("문자열 = %-20s\n", str);
}
*/
/*
int main(int argc, char* argv[]) {
	int num1, num2, sum;

	printf("정수 2개를 입렵하세요...");
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("두 수의 합은 %d 입니다.", sum);
}
*/
/*
int main(int argc, char* argv[]) {
	char name1[30], name2[30];
	printf("이름을 입력하세요! ");
	scanf_s("%s", name1, sizeof(name1));
	printf("이름을 입력하세요! ");
	scanf_s("%s", name2, sizeof(name2));
	printf("나의 이름은 %s 입니다.\n", name1);
	printf("나의 이름은 %s 입니다.\n", name2);
	printf("sizeof(name1):%d\n",sizeof(name1));
	printf("sizeof(name2):%d\n", sizeof(name2));
}
*/
/*
int main(int argc, char* argv[]) {
	int su1, su2, sum;

	printf("정수 두 개를 입렵하세요...");
	scanf_s("%d %d", &su1, &su2);
	sum = su1 + su2;
	printf("두 정수의 합은 %d 입니다.\n", sum);
}
*/
/*
int main(int argc, char* argv[]) {
	char name[30];
	int age;

	printf("당신의 이름은 무엇입니까? ")
	scanf_s("%s", name, sizeof(name))
	printf("%s의 나이는 몇 살입니까", age)
	scanf_s("%d", &age)
	printf("%s의 나이는 %d 입니다.", name, age)
	scanf_s()
}
*/
//정답
//문자열 크기 + null문자(1바이트)
//한글은 한글자당 2바이트
/*
int main(int argc, char* argv[]) {
	char name[20];
	int age;
	printf("당신의 이름은 무엇입니까?");
	//홍길동
	scanf_s("%s", name, sizeof(name));
	printf("%s님의 나이는 몇 살입니까?", name);
	scanf_s("%d", &age);
	printf("%s님의 나이는 %d살입니다.", name, age);
}
*/
//연습
/*
int main(int argc, char* argv[]) {
	float su;
	printf("실수를 하나 입력하세요...");
	scanf_s("%f", &su);
	printf("su = %6.3f", su);
}
*/
/*
int main(int argc, char* argv[]) {
	char ch1, ch2, ch3;
	printf("이름의 첫 글자를 3자리의 영문자로 입력하세요... "); 
	scanf_s("%c%c%c", &ch1, &ch2, &ch3, sizeof(ch1, ch2, ch3)); 
	printf("나의 성은 %c%c%c 입니다.\n", ch1, ch2, ch3); 
	printf("나의 성은 %c  %c  %c 입니다.\n", ch1, ch2, ch3);
}
*/
/*
int main(int argc, char* argv[]) {
	int kor, mat, eng, number; float average;
	printf("학번을 입력하세요... "); 
	scanf_s("%d", &number); 
	printf("3과목 성적을 입력하세요... "); 
	scanf_s("%d%d%d", &kor &mat, &eng);
	average = (float)(kor + mat + eng) / 3.0; 
	printf("학번 %d : 성적 평균 = %4.1f\n", number, average);
}*/

