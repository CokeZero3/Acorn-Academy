#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
//1씩 더하기
int main(int argc, char* argv[]) {
	int su, sum = 0;

	for (su = 1; su <= 10; su++) {
		sum += su;
		printf("sum = %d\n", sum);
	}
}

// 10번 반복
int main(int argc, char* argv[]) {
	int su, sum = 0;

	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1)
			sum += su;

		printf("sum =%d\n", sum);
	}
}
// 5번 반복
int main(int argc, char* argv[]) {
	int su, sum = 0;

	for (su = 1; su <= 10; su++) {
		if (su % 2 == 1)
			sum += su;
		su++;

		printf("sum =%d\n", sum);
	}
}

// 1~4. Hello
int main(int argc, char* argv[]) {
	int i = 0;
	for (int i = 1; i < 5; i++) {
		printf("%d, Hello\n", i);
	}
}
// Alphabet A to Z 
int main(int argc, char* argv[]) {
	char i;
	for (i = 'A'; i <= 'Z'; i++) {
		if (i != 'Z') {
			printf("%c,", i);
		}else
		printf("%c,", i);
	}
}
// 3+6+9=18
int main(int argc, char* argv[]) {
	int i, sum = 0;
	for (i = 3; i < 9; i = i + 3) {
		printf("%d + ", i);
		sum += i;
	}
	sum += i;
	printf("%d = %d", i, sum);
}
/*
int i, sum = 0;
   for (i = 3; i < 10; i+=3) {
	  printf("%d + ", i);
	  sum += i;
   }
   printf("\b\b = %d", sum);
}
*/

/*
//+10 , 10 times
int main(int argc, char* argv[]) {
	int su1, su2, sum = 0;
	for (su1 = 1; su1 <= 10; su1++) {
		for (su2 = 1; su2 <= 10; su2++)
			sum += 1;

		printf("sum = %d\n", sum);
	}
}
///?
int main(int argc, char* argv[]) {
	int su1, su2;

	for (su1 = 1; su1 <= 5; su1++) {
		for (su2 = 1; su2 <= 5; su2++)
			printf("su1 = %d\t su2 = %d\n", su1, su2);
	}
}
* /

//구구단 가로버전
int main(int argc, char* argv[]) {
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%3d x %d = %2d", j, i, (i * j));
		}
		printf("\n");
	}
	return 0;
}

//
int main(int argc, char* argv[]) {
	int money = 0, i, j, g;

	for (i = 1; i <= 30; i++) {
		for(j=1;j<=30;j++){
		g = i * j;
		money += g;
		}
	}
	printf("한달 동안 저축한 금액: %d", money);
		}
// 강사님 ver.
int day=1;
double won = 10, sum = 0;
for(day=1; day<=30; 30++, won*=2){
sum = sum+won;
}
printf("%.0f", sum);
}
*/
//1~1000까지의 합을 구하라
/*	int i, sum = 0;
	for (i = 1; i <= 1000; i++) {
		sum = sum + i;
		if (i % 3 == 0) sum = sum - 1;
		if (i % 3 == 0 && i % 5 == 0) sum = sum + 1;
	}
	printf("1부터 1000까지의 합 = %d", sum);
}

//중복 없앤 ver
int main(int argc, char* argv[]) {
int i, sum = 0;
for (i = 1; i <= 1000; i++) {
	if (i % 3 != 0 || i % 15 == 0) sum = sum + 1;
}
	printf("1부터 1000까지의 합 = %d", sum);
}
*/
// 1부타 시작하여 홀수의 합을 구하는데 10000이 넘지 않는 마지막 수를 구해라
int main(int argc, char* argv[]) {
	int i, sum = 0;
	for (i = 1; sum < 10000; i += 2) {
		sum += i;
	}

	printf("sun: %d, i: %d\n", sum - i, i - 2);
}
/*
1+2*2+ 2*3+ ….+2*(n-1)+n
= 1+1+2*2+ 2*3+ ….+2*(n-1)+n+n -1 -n
= 2*1+2*2+ 2*3+ ….+2*(n-1)+2*n -(n+1)
= 2* (n*(n+1)/2)-(n+1)
=(n+1)*(n-1)
*/
int main(int argc, char* argv[]) {
	int n, sum = 0;
	scanf_s("%d", &n);

	sum = 1 + n;
	for (int i = 2; i < n; i++) {
		sum = sum + 2 * i;
	}
	printf("%d", sum);
}
//1, 1+2, 1+2+3, 1+2+3+4,…, 1+2+…+n의 합을 구하라.
int main(int argc, char* argv[]) {
	int n, sum = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			sum = sum + j;
		}
		printf("%d", sum);
	}
}

