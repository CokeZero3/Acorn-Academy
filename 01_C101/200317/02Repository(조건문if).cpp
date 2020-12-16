#include <stdio.h>
//======================IF ONLY========================================//
// True = 1 False = 0
int main(int argc, char*argv[]) {
	int x, y;
	scanf_s("%d%d", &x, &y);
	if (x > y)
		printf("%d", x > y);
}

//
int main(int argc, char* argv[]) {
	int x = 1, y = 0;
	if (x)
		printf("True");
	if (y)
		printf("False");
	}
//
int main(int argc, char* argv[]) {
	if (1)
		printf("True");
	if (0)
		printf("False");
}
//짝수 경우 짝수 출력, 홀수 경우 홀수 출력
int main(int argc, char* argv[]) {
	int x, y;
	scanf_s("%d", &x);
	y = x % 2;
	if (y == 0) printf("짝수");
	if (y != 0) printf("홀수"); //if(y)로 표현 가능
//
	int main(int argc, char* argv[]) {
		int x;
		printf("10 보다 큰 정수를 입력하세요...");
		scanf_s("%d", &x);
		if (x <= 10)
			printf("10 이하의 수를 입력하였습니다!\n");
		print("%d", x);
	}


//입력한 데이터가 3의 배수인 경우 출력하시오.
	int main(int argc, char* argv[]) {
		int x;
		printf("정수를 입력하세요...");
		scanf_s("%d", &x);
		if (x % 3 == 0)
			printf("3의 배수를 입력하였습니다!\n");
		printf("%d", x);
	}
//절대 값을 구하는 프로그램을 작성하시오
	int main(int argc, char* argv[]) {
		int x, abs;
		printf("정수를 입력하세요...");
		scanf_s("%d", &x);

		if (x < 0) {
			abs = x * (-1);
		}
		printf("절대값:%d\n", abs);
	}
	//수를 입력 받아 짝, 홀수 구분하여 출력하시오
	int main(int argc, char* argv[]) {
		int x;
		printf("정수를 입력하세요...\n");
		scanf_s("%d", &x);

		if (x % 2 == 0)
			printf("짝수입니다.");
		if (x % 2 != 0)
			printf("홀수입니다");
	}
	//두 수를 입력 받아 큰 수를 출력
	int main(int argc, char* argv[]) {
		int x, y, max;
		printf("2개의 정수를 입력하세요...\n");
		scanf_s("%d%d", &x, &y);

		if (x > y)	printf("%d가 큰 수입니다.", x);
		if (x < y)	printf("%d가 큰 수입니다.", y);
		/* if(x>y) max = x;
		if (x <= y) max y;
		print("max: %d", max);*/
	}

	//세 수를 입력 받아 큰 수를 출력
	int main(int argc, char* argv[]) {
		int x, y, z, max;
		printf("3개의 정수를 입력하세요...\n");
		scanf_s("%d%d%d", &x, &y, &z);

		if (x > y)
			max = x;
		if (x <= y)
			max = y;
		if (max < z)
			max = z;
		printf("max: %d", max);
	}

	//두 수를 입력 받아 큰수가 짝수이면 출력하시오
	int main(int argc, char* argv[]) {
		int x, y, max;
		printf("2개의 정수를 입력하세요...\n");
		scanf_s("%d%d", &x, &y);

		if (x > y)
			max = x;
		if (x <= y)
			max = y;
		if (max % 2 == 0)
			printf("max: %d", max);
	}
	//두 수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력하시오
	int main(int argc, char* argv[]) {
		int x, y, sum;
		scanf_s("%d%d", &x, &y);

		sum = x + y;
		if (sum % 2 == 0 && sum % 3 == 0)
			printf("sum: %d", sum);
	}

//========================IF & ELSE ========================================================
// 세개의 수를 받아 최대값과 최소값을 출력하시오.
	int main(int argc, char* argv[]) {
		int num1, num2, num3, max, min;

		printf("정수 3 개를 입력하세요.");
		scanf_s("%d%d%d", &num1, &num2, &num3);

		if (num1 >= num2) {
			max = num1;
			min = num2;
		}
		else
			max = num2;
		min = num1;
		if (num3 > max)
			max = num3;
		if (num3 < min)
			min = num3;
		printf("\n max = %d, min = %d", max, min);
	}
//. 양의 짝수 홀수 음수 구분
	int main(int argc, char* argv[]) {
		int num1;
		printf("정수를 입력하세요.");
		scanf_s("%d", &num1);

		if (num1 >= 0) {
			if ((num1 % 2) == 0)
				printf(" %d:양의 짝수", num1);
			else
				printf(" %d:양의 홀수", num1);
		}
		else
			printf(" %d: 음수", num1);
		printf("\n-----프로그램 실행 끝-----!");
	}

	// 합격 불합격 기준 세우기
	int main(int argc, char* argv[]) {
		int kor, eng, math, avr;
		printf("3과목 성적을 입력하세요...");
		scanf_s("%d%d%d", &kor, &eng, &math);

		avr = (kor + eng + math);
		if (avr < 70)
			printf("\n 불합격!");
		else if (kor < 60)
			printf("\n 불합격!");
		else if (eng < 60)
			printf("\n 불합격!");
		else if (math < 60)
			printf("\n 불합격!");
		else
			printf("\n 합격!");
	}
//1. 입력 수가 짝수 홀수 검사 프로그램 작성
	int main(int argc, char* argv[]) {
		int x;

		printf("숫자를 입력하세요.\n");
		scanf_s("%d", &x);

		if (x % 2 == 0) {
			printf("짝수입니다.");
		}
		else {
			printf("홀수입니다.");
		}
	}

	/*	기본 시간: 30분
		기본 요금:1인당 3000
		추가 시간:10분
		추가 요금: 500
		선언부: 정수형 defaultTime, defaultPay, addTime, addPay, man, sum, useTime;
		입력부: 이용시간, 이용인원
		처리부:
			1. 입력된 이용시간 기본 시간보다 작은 경우 기본요금
			2. 입력된 이용시간이 기본 시간보다 큰 경우 기본요금 + 추가요금 발생
			2.1 추가요금 계산 10분당 500원 10 * 500
		출력부: 이용인원 + 최종요금
		*/
		/*1. 유원지에서 말 타는데 기본요금 30분 1인당 3000원
		이후 10분당 500원 추가 요금. 전체 금액을 계산하는 프로그램 작성.
		*/
	int main(int argc, char* argv[]) {
		int dT = 30, dP = 3000, aT, aP, man, sum, uT;
		printf("탑승인원 몇명?");
		scanf_s("%d", &man);
		printf("이용시간을 분단위로 입력하시오");
		scanf_s("%d", &uT);
		dT = 30;

		if (uT <= dT) {
			sum = dP;
		}
		else {
			sum = dP;
			sum = sum + 500 / 10 * (uT - dT);
		}
		printf("이용인원: %d, 총 요금: %d", man, man * sum);
	}
//줄이고 올림 내림 반올림
	int main(int argc, char* argv[]) {
		int dT = 30, dP = 3000, man, sum, uT;
		printf("탑승인원 몇명?");
		scanf_s("%d", &man);
		printf("이용시간을 분단위로 입력");
		scanf_s("%d", &uT);
		sum = dP;

		if (uT > dT) {
			//1분당 계산
			//sum = sum + 500 / 10 * (uT - dT);
			//버림 sum = sum + (uT - dT)/10 * 500;
			//반올림 sum = sum + (uT - dT+5)/10 * 500;
			sum = sum + (uT - dT + 9) / 10 * 500; //올림
		}	printf("이용인원: %d, 총 요금: %d", man, man * sum);
	}

	/*
	기본 개수: 10개
	기본 요금: 2500
	10개 초과 요금: 2400

	선언부: dEa, dP,
	입력부: 주문개수
	처리부: 1. 주문 개수가 10개 이하 개당 2500 2.
			2. 주문 개수가 10개 이상이면 25000+2400 개수
	출력부:
	*/

	int main(int argc, char* argv[]) {
		int dEa = 10, dP = 2500, ea, sum;
		printf("주문 도시락 수량 입력");
		scanf_s("%d", &ea);

		sum = ea * 2500;

		if (ea > dEa) {
			sum = sum - (ea - dEa) * 100;
		}
		printf("총 요금: %d", sum);
	}
/*	
	기본 개수: 10통, 100통
	기본 가격: 5000
	할인율: 10%, 12%

	선언부: disk, sum, 
	입력부: disk 개수
	처리부: 1. 10통 이하 disk * 5000
			2. 100통 이상 disk * 5000 * 0.88
			3. 10통 이상, disk *5000 * 0.9
	출력부: 
	*/

int main(int argc, char* argv[]) {
	int disk, sum;
	printf("Disk 수량 입력");
	scanf_s("%d", &disk);
	sum = disk * 5000;

	if (disk >= 100) sum = sum * 0.88;
	if(disk >= 10) sum = sum * 0.9;
	printf("총 요금: %d", sum);

}
//성적
int main(int argc, char* argv[]) {
	int c, java, jsp, sum;
	float avg;
	printf("C, Java, JSP 과목 점수 입력");
	scanf_s("%d%d%d", &c, &java, &jsp);
	sum = c + java + jsp;
	avg = sum / 3.0;
	if (avg >= 90) printf("A");
	else if (avg >= 80) printf("B");
	else if (avg >= 70) printf("C");
	else if (avg >= 60) printf("D");
	else  printf("F");
}