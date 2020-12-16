//소문자를 대문자로 바꿔주는 코드
/*
int main(int argc, char* argv[]) {
	char ch;
	while ((ch = _getch()) != ESC) {
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		_putch(ch);
		printf("\n");
	}
}
*/
//1~10사이의 숫자만 입력 받아 1부터 입력 받은 수까지의 합
/*
int main(int argc, char* argv[]) {
	int i, sum = 0;
	while (1) {
		printf("수입력(1~10)");
		scanf_s("%d", &i);
		if(i>=1&&i<=10)
					break;
		printf("잘못 입력, 다시");
	}
	for (int j = 1; j<= i; j++)
		sum += j;
	printf("%d", sum);
}
*/
//10~20사이의 숫자만 입력 받아 1부터 입력 받은 수까지의 합
int main(int argc, char* argv[]) {
	int i, sum = 0;
	while (1) {
		printf("수입력(10~20)");
		scanf_s("%d", &i);
		if (i >= 10 && i <= 20)
			break;
		printf("잘못 입력, 다시");
	}
	for (int j = 1; j <= i; j++)
		sum += j;
	printf("%d", sum);
}
// ===평가=========
/*
//어떤 수의 약수를 구하는 프로그램
int main(int argc, char* argv[]) {
	int input, i;
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &input);

	printf("%d의 약수 = \n", input);

	for (i = 1; i <= input; i++) {
		if (input % i == 0) {
			printf("%d \n", i);
		}
	}
}
/*
//1에서부터 입력된 어떤 수까지 내에 있는 소수를 찾는 프로그램을 작성하라.
int main(int argc, char* argv[]) {
	int a, i, j;
	scanf_s("%d", &a); //정수형 변수 a에 정수를 입력받습니다.
	i = 2;
	j = a - 1;

	if (a == 1) { //1은 소수가 아님
		printf("소수아님");
		}

	while (1) { //무한루프
		if (i <= j) {
			if (a % i == 0) { //i가 나누어떨어지면 소수가 아님
				printf("소수아님");
				break;
			}
			else {
				i++;
			}
		}
		else { //i가 j보다 커질때까지 나누어떨어지지 않으면 소수
			printf("소수");
			break;
		}
	}
}
*/
// 
int main(int argc, char* argv[]) {
	int num, i, j, sum;
	printf("정수를 입력해봐 완전수 찾아줄께");
	scanf_s("%d", &num);
	printf("\n 1 ~ %d 에서 완전수를 찾아볼께\n", num);

	for (i = 1; i <= num; i++) {
		sum = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0)
				sum += j;
		}

		if (sum == i) printf("\n%d", i);
	}
	printf("끝");
}


