//가위 바위 보
int main(int argc, char* argv[]) {
	int num;
	scanf_s("%d", &num);
	switch (num) {
	case 0:printf("가위"); break;
	case 1:printf("바위"); break;
	case 2:printf("보"); break;
	default:printf("종료");
	}
// 메뉴 만들기
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()

	int main(int argc, char* argv[]) {
		int num, data = 0;
		while (1) { //무한반복을 위함
			printf("=============================================\n");
			printf("1. 데이터 입력\n");
			printf("2. 데이터 출력\n");
			printf("3. 종료\n");
			printf("=============================================\n");
			scanf_s("%d", &num);
			switch (num) {
			case 1:printf("데이터를 입력하세요\n");
				scanf_s("%d", &data); break;
			case 2:printf("%d", data); _getch(); break; //getch 일시정지
			case 3:exit(1);
			}
			system("cls");
		}
	}

#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()

	/*int main(int argc, char* argv[]) {
		int num;
		printf("one two three");
		scanf_s("%d", &num);

		switch (num) {
		case 1:printf("one"); break;
		case 2:printf("two"); break;
		case 3:printf("three"); break;
		case 4:	case 5: case 6: case 7:  case 8: case 9: case 10:
			printf("error"); break;
		}
	}
	*/
	/*
	int main(int argc, char* argv[]) {
		int num;
		printf("선풍기 강도 1미풍, 2약풍, 3강풍, 4정지");
		scanf_s("%d", &num);

		switch (num) {
		case 1:printf("미풍"); break;
		case 2:printf("약풍"); break;
		case 3:printf("강풍"); break;
		case 4:printf("정지"); break;
		case 5: case 6: case 7:  case 8: case 9: case 10:
			printf("error"); break;
		}
	}
	*/
	//Weeks
	int main(int argc, char* argv[]) {
		int week;
		printf("weekday: ");
		scanf_s("%d", &week);
		week = (week - 1) / 7;

		switch (week) {
		case 0: printf("첫주"); break;
		case 1: printf("둘째주"); break;
		case 2: printf("셋째주"); break;
		case 3: printf("넷째주"); break;
		case 4: printf("다섯째주"); break;
		default: printf("없음");
		}
	}

	//신용도
	int main(int argc, char* argv[]) {
		int credit;
		printf("credit rating: ");
		scanf_s("%d", &credit);

		switch (credit / 10) {
		case 1: printf("B"); break;
		case 2: printf("D"); break;
		case 3: printf("G"); break;
		default: printf("종료"); break;
		}
	}

	//담임코드
	int main(int argc, char* argv[]) {
		int code;
		printf("Code: ");
		scanf_s("%d", &code);

		switch (code) {
		case 5: printf("A"); break;
		case 15: printf("B"); break;
		case 20: printf("C"); break;
		default: printf("종료"); break;
		}
	}
	// 특별상여금
	int main(int argc, char** argv) {
		int sales;
		printf("Sales: ");
		scanf_s("%d", &sales);

		switch (sales / 201) {
		case 0: printf("특별상여금: 1000, 특별포인트 2"); break;
		case 1: printf("특별상여금: 3000, 특별포인트 4"); break;
		case 2: printf("특별상여금: 5000, 특별포인트 6"); break;
		case 3: printf("특별상여금: 7000, 특별포인트 8"); break;
		case 4: printf("특별상여금: 9000, 특별포인트 10"); break;
		default: printf("없음");
		}
	}

	// 계산기
	int main(int argc, char* argv[]) {
		int num1, num2;
		char a;

		printf("수식을 입력하시오 : ");
		scanf_s("%d%c%d", &num1, &a, sizeof(char), &num2);

		switch (a) {
		case '+': printf("%d%c%d=%d", num1, a, num2, num1 + num2); break;
		case '-': printf("%d%c%d=%d", num1, a, num2, num1 - num2); break;
		case '*': printf("%d%c%d=%d", num1, a, num2, num1 * num2); break;
		case '/': printf("%d%c%d=%d", num1, a, num2, num1 / num2); break;
		}
	}
//이름 입력/출력, 성적 입력/출력
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
#define LINE "======================================"
	void menu() {
		printf("%s\n", LINE);
		printf("\t\tMenu\t\t\n");
		printf("%s\n", LINE);
		printf("\t%s\n", "1. 학생이름 입력");
		printf("\t%s\n", "2. 성적 3과목 입력");
		printf("\t%s\n", "3. 학생이름 출력");
		printf("\t%s\n", "4. 합계 출력");
		printf("\t%s\n", "5. 평균 출력");
		printf("\t%s\n", "6. 종료\n");
		printf("%s\n", LINE);
	}
	void main() {
		int menuSelect;
		char name[20] = "";
		int x, y, z, sum;
		float avg;
		bool isInputName = false, isInputPoint = false, isCalcSum = false;

		while (true) {
			menu();
			scanf_s("%d", &menuSelect);

			switch (menuSelect) {

			case 1:
				printf("학생 이름 입력: \n");
				scanf_s("%s", name, sizeof(name));
				isInputName = true; _getch(); break;
			case 2:
				printf("C언어의 성적을 입력하세요: \n");
				scanf_s("%d", &x);
				printf("Java언어의 성적을 입력하세요: \n");
				scanf_s("%d", &y);
				printf("Jsp언어의 성적을 입력하세요: \n");
				scanf_s("%d", &z);
				isInputPoint = true; _getch(); break;
			case 3:
				if (!isInputName) {
					printf("이름을 입력하셔야 합니다.\n");
				}
				else {
					printf("입력한 이름은 %s 입니다.\n", name);
				}_getch(); break;
			case 4:
				if (isInputPoint) {
					sum = x + y + z;
					printf("총점은 %d입니다.\n", sum);
				}
				else {
					printf("과목별 점수를 입력하세요.\n");
				}_getch(); break;
			case 5:
				if (isCalcSum) {
					avg = sum / 3.0;
					printf("평균은 %.2f입니다.", avg);
				}
				else {
					printf("합계를 먼저 계산하세요.\n");
				}_getch(); break;
			case 6:
				exit(1); break;
			}
		}
	}