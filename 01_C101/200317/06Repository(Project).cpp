//최종본 음식점 
/*

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define LINE "============================================"


void menu()
{
   printf("%s\n", LINE);
   printf("\t%s\n", "에이콘아카데미 주위 음식점평가");
   printf("%s\n", LINE);
   printf("1.돈수백\n");
   printf("2.장안문\n");
   printf("3.촌장골 감자탕\n");
   printf("4.지존짬뽕\n");
   printf("5.두끼\n");
   printf("%s\n", LINE);

}

void review()
{

   int review, su, sum = 0;
   printf("후기평점등록하시겠습니까?\n1.등록 2.종료\n");
   scanf_s("%d", &review);
   if (review == 1)
   {
      printf("몇점인가요\n");
      scanf_s("%d", &su);
      sum += su;
      printf("등록되었습니다\n");
   }
   if (review == 2) {
      printf("이용해 주셔서 감사합니다");
   }
   if (review >= 3)
   {
      printf("잘못입력하였습니다.");

   }
}

void sw1()
{
   int number1, i;
   float avg, sum = 0,
      taste1[5] = { 1,3,4,3,5 }, taste2[5] = { 1,4,5,1,1 }, taste3[5] = { 3,3,3,4,2 },
      taste4[5] = { 5,5,4,5,3 }, taste5[5] = { 1,1,1,0,1 };


   printf("정보를 보고 싶은 음식점 번호를 입력하세요.\n");
   scanf_s("%d", &number1);
   switch (number1)

   {
   case 1:
      printf("돈수백\n");
      printf("주소 : 서울특별시 중구 남대문로9길 40 YG타워\n ");
      printf("추천메뉴 : 돈탕반(돼지국밥)\n");
      printf("장점 : 돼지국밥 마니아라면 꼭 가봐야 하는곳!!!\n");
      printf("단점 : 양이 좀 적다\n");
      printf("맛 평점");

      for (i = 0; i < 5; i++)
      {
         sum += taste1[i];

      }
      avg = sum / 5;
      printf("음식점의 평점은 %lf 입니다.\n ", avg);
      if (avg >= 4)
         printf("*적극 추천!!*\n");
      else if (avg >= 3)
         printf("*한 번 가볼만 한 음식점*\n");
      else if (avg >= 2)
         printf("*무난한 음식점*\n");
      else if (avg >= 1)
         printf("*그럭저럭*\n");
      else
         printf("*가지 마세요.*\n");

      review();
      break;
   case 2:
      printf("장안문\n");
      printf("주소 : 서울특별시 중구 을지로3길 29 \n");
      printf("추천메뉴 : 제육볶음,고등어구이\n");
      printf("장점 : 1인 1된장찌개\n");
      printf("단점 : 제육볶음 먹을시 직접 구워먹어야함\n");
      printf("맛 평점");
      for (i = 0; i < 5; i++)
      {
         sum += taste2[i];

      }
      avg = sum / 5;
      printf("음식점의 평점은 %lf 입니다.\n ", avg);
      if (avg >= 4)
         printf("*적극 추천!!*\n");
      else if (avg >= 3)
         printf("*한 번 가볼만 한 음식점*\n");
      else if (avg >= 2)
         printf("*무난한 음식점*\n");
      else if (avg >= 1)
         printf("*그럭저럭*\n");
      else
         printf("*가지 마세요.*\n");

      review();
      break;
   case 3:
      printf("촌장골 감자탕\n");
      printf("주소 : 서울특별시 중구 다동길 33 요광빌딩 1층\n");
      printf("추천메뉴 : 뼈다귀 감자탕\n");
      printf("장점 : 가까움, 음식이 빨리나옴\n");
      printf("단점 : 없음\n");
      printf("맛 평점");

      for (i = 0; i < 5; i++)
      {
         sum += taste3[i];

      }
      avg = sum / 5;
      printf("음식점의 평점은 %lf 입니다.\n ", avg);
      if (avg >= 4)
         printf("*적극 추천!!*\n");
      else if (avg >= 3)
         printf("*한 번 가볼만 한 음식점*\n");
      else if (avg >= 2)
         printf("*무난한 음식점*\n");
      else if (avg >= 1)
         printf("*그럭저럭*\n");
      else
         printf("*가지 마세요.*\n");

      review();
      break;
   case 4:
      printf("지존짬뽕");
      printf("주소 : 서울 종로구 삼일대로 15길 25 1층\n");
      printf("추천메뉴 : 짬뽕\n");
      printf("장점 : 퀼리티 높은 짬뽕을 맛봄\n");
      printf("단점 : 비싼편\n");
      printf("맛 평점");
      for (i = 0; i < 5; i++)
      {
         sum += taste4[i];
      }
      avg = sum / 5;
      printf("음식점의 평점은 %lf 입니다.\n ", avg);
      if (avg >= 4)
         printf("*적극 추천!!*\n");
      else if (avg >= 3)
         printf("*한 번 가볼만 한 음식점*\n");
      else if (avg >= 2)
         printf("*무난한 음식점*\n");
      else if (avg >= 1)
         printf("*그럭저럭*\n");
      else
         printf("*가지 마세요.*\n");

      review();
      break;
   case 5:
      printf("두끼\n");
      printf("주소 : 서울특별시 종로구 종로12길 15 코아빌딩1\n");
      printf("추천메뉴 : 떡볶이 무제한\n");
      printf("장점 : 뷔페형식\n");
      printf("단점 : 한번 먹으면 질려요\n");
      printf("맛 평점");
      for (i = 0; i < 5; i++)
      {
         sum += taste5[i];
      }
      avg = sum / 5;
      printf("음식점의 평점은 %lf 입니다.\n ", avg);
      if (avg >= 4)
         printf("*적극 추천!!*\n");
      else if (avg >= 3)
         printf("*한 번 가볼만 한 음식점*\n");
      else if (avg >= 2)
         printf("*무난한 음식점*\n");
      else if (avg >= 1)
         printf("*그럭저럭*\n");
      else
         printf("*가지 마세요.*\n");
      review();
      break;
   default:
      break;
   }

}


int main() {
   menu();
   sw1();
}
*/

//이름 입력/출력, 성적 입력/출력
/*
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
#define LINE "============================================"
void menu() {
	printf("%s\n", LINE);
	printf("\t\t음식점 평가\t\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1. 음식점 이름");
	printf("\t%s\n", "2. 맛, 가격, 서비스 수준 입력");
	printf("\t%s\n", "3. 음식점 이름 출력");
	printf("\t%s\n", "4. 합계 출력");
	printf("\t%s\n", "5. 평균 출력");
	printf("\t%s\n", "6. 총평");
	printf("\t%s\n", "7. 종료\n");
	printf("%s\n", LINE);
}
int main(int argc, char* argv[]) {
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
			printf("음식점 이름을 입력해주세요: \n");
			scanf_s("%s", name, sizeof(name));
			isInputName = true; _getch(); break;
		case 2:
			printf("음식점의 맛을 평가해주세요 /4: \n");
			scanf_s("%d", &x);
			printf("음식점의 가격 수준을 평가해주세요 /4: \n");
			scanf_s("%d", &y);
			printf("음식점의 서비스 수준을 평가해주세요 /4 : \n");
			scanf_s("%d", &z);
			isInputPoint = true; _getch(); break;
		case 3:
			if (!isInputName) {
				printf("음식점을 입력하셔야 합니다.\n");
			}
			else {
				printf("입력한 음식점은 %s입니다.\n", name);
			}_getch(); break;
		case 4:
			if (isInputPoint) {
				sum = x + y + z;
				printf("합계는 %d입니다.\n", sum);
			}
			else {
				printf("과목별 점수를 입력하세요.\n");
			}_getch(); break;
		case 5:
			avg = sum / 3.0;
			printf("평균은 %.2f입니다.\n", avg);
			_getch(); break;
		case 6:
			printf("%s 음식점의 평점은 %.2f입니다.", name, avg);
			if (avg >= 4)
				printf("*적극 추천입니다!!*\n");
			else if (avg >= 3)
				printf("*한 번 가볼만 한 음식점입니다.*\n");
			else if (avg >= 2)
				printf("*무난한 음식점입니다*\n");
			else if (avg >= 1)
				printf("*그럭저럭이에요*\n");
			else
				printf("*가지 마세요.*\n");
		case 7:
			exit(1); break;
		}

	}

}
*/
#include <stdio.h>		//printf(), scanf()
//추천
int main(int argc, char* argv[]) {
	double n;
	printf(">>");
	scanf_s("%lf", &n);
	if (n >= 90)
		printf("적극 추천!!");
	else if (n >= 80)
		printf("한 번 가볼만 한 음식점");
	else if (n >= 60)
		printf("무난한 음식점");
	else if (n >= 40)
		printf("그럭저럭");
	else
		printf("가지 마세요.");
}
/*

#include <stdio.h>		//printf(), scanf()
//잠 //https://www.mayoclinic.org/healthy-lifestyle/adult-health/expert-answers/how-many-hours-of-sleep-are-enough/faq-20057898 차트만들기
int main(int argc, char* argv[]) {
	double n;
	printf("수면 시간 입력>>");
	scanf_s("%lf", &n);
	if (n >= 9)
		printf("Adults (26 to 64 years): 7 to 9 hours of sleep\n, You had a good night sleep.");
	else if (n >= 8)
		printf("Adults (26 to 64 years): 7 to 9 hours of sleep\n, You had a proper sleep.");
	else if (n >= 6)
		printf("Adults (26 to 64 years): 7 to 9 hours of sleep\n, You lack 1 hours of sleep.");
	else if (n >= 5)
		printf("Adults (26 to 64 years): 7 to 9 hours of sleep\n, You lack 2 hours of sleep.");
	else
		printf("Adults (26 to 64 years): 7 to 9 hours of sleep\n, You are not having enough sleep.");
}
*/