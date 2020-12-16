#include <stdio.h>

void main() {
	int su1 = 20, su2 = 3;

	printf("%d + %d = %d\n", su1, su2, su1 + su2);
	printf("%d - %d = %d\n", su1, su2, su1 - su2);
	printf("%d * %d = %d\n", su1, su2, su1 * su2);
	printf("%d / %d = %d\n", su1, su2, su1 / su2);
	printf("%d %% %d = %d\n", su1, su2, su1 % su2);
}

void main() {
	float su1 = 3.01, su2 = 3.0;
	//결과가 0이면 True, 1이면 False
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 <= su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 >= su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 == su2);
	printf("변수 su1과 su2의 크기 비교 결과:%d\n", su1 != su2);
}

void main() {
	int su1, su2;

	su1 = su2 = 5;
	printf("su1 + 1 = %d\n", su1 = su1 + 1); //5+1=6
	printf("su1 - 1 = %d\n", su1 = su1 - 1); //6-1=5
	printf("su1 * 1 = %d\n", su1 = su1 * su2); // 5*5=25
	printf("su1 / 1 = %d\n", su1 = su1 / su2); //
	printf("su1 %% 1 = %d\n", su1 = su1 % 1); //0 % 5=0
}

int main() {
	int num;

	printf("점수를 입력하세요...");
	scanf_s("%d", &num);
	//if (((num > 0) && (num <= 100)) == false )
	if (!((num > 0) && (num <= 100)))
		printf("입력 범위를 벗어 났습니다.\n");
}

int main() {
	// a++,a+=1,a=a+1 다 같은 거
	//짝수 홀수

	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d:짝수\n", su) :
		printf("%d:홀수\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d:짝수\n", su) :
		printf("%d:홀수\n", su);
}
int main() {

int su;

printf("숫자를 입력하세요.\n");
scanf_s("%d", &su);

//(su % 2 == 0) ? printf("%d:짝수\n", su) : printf("%d:홀수\n", su);
printf("%d는");
(su % 2 == 0) ? printf("짝수") : printf("홀수");
printf("입니다.");
}
/* 정답
수를 입력 받아 짝, 홀수를 구분하여 출력
P
I
짝, 홀수 구분
O
입력받은 수와 짝 홀수 출력
*/

int main(void) {

	int su;

	printf("숫자를 입력하세요.\n");
	scanf_s("%d", &su);

	printf("%d는");
	(su % 3 == 0) ? printf("3의 배수") : 0;
	printf("입니다.");
}

//두수를 입력 받아 큰 수를 출력
int main(void) {
	int x, y, max;

	printf("숫자를 입력하세요.\n");
	scanf_s("%d%d", &x, &y);

	(x > y) ? max = x : max = 2;
	printf("max = %d", max);
}
// 세수 중 가장 큰 수를 출력
int main(void) {
	int x, y, z, max;

	printf("숫자 3개를 입력하세요.\n");
	scanf_s("%d%d%d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("max = %d", max);
}
//두수를 입력 받아 큰 수가 짝수이면 출력하시오
int main(void) {
	int x, y, z, max;

	printf("숫자 2개를 입력하세요.\n");
	scanf_s("%d%d%d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	(max % 2 == 0) ? printf("짝수") : 0;
	printf("max = %d", max);
}
int main(void) {
	/*두수를 입력 받아 합이 짝수이고 3의 배수의 수를 출력하시오
	p
	정수형 변수 2개 선언
	I
	두 수를 입력
	p
	1. 두 수의 합 구하기
	2. 합이 짝수이고 3의 배수란 것은 결국 6의 배수임으로 6의 인지 비교
	0
	저장된 합 출력
	*/
	int x, y, sum;

	scanf_s("%d%d", &x, &y);

	sum = x + y;
	(sum % 6 == 0) ? printf("sum = %d", sum) : 0;
}