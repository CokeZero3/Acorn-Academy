//������ ������ 
/*

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define LINE "============================================"


void menu()
{
   printf("%s\n", LINE);
   printf("\t%s\n", "�����ܾ�ī���� ���� ��������");
   printf("%s\n", LINE);
   printf("1.������\n");
   printf("2.��ȹ�\n");
   printf("3.����� ������\n");
   printf("4.����«��\n");
   printf("5.�γ�\n");
   printf("%s\n", LINE);

}

void review()
{

   int review, su, sum = 0;
   printf("�ı���������Ͻðڽ��ϱ�?\n1.��� 2.����\n");
   scanf_s("%d", &review);
   if (review == 1)
   {
      printf("�����ΰ���\n");
      scanf_s("%d", &su);
      sum += su;
      printf("��ϵǾ����ϴ�\n");
   }
   if (review == 2) {
      printf("�̿��� �ּż� �����մϴ�");
   }
   if (review >= 3)
   {
      printf("�߸��Է��Ͽ����ϴ�.");

   }
}

void sw1()
{
   int number1, i;
   float avg, sum = 0,
      taste1[5] = { 1,3,4,3,5 }, taste2[5] = { 1,4,5,1,1 }, taste3[5] = { 3,3,3,4,2 },
      taste4[5] = { 5,5,4,5,3 }, taste5[5] = { 1,1,1,0,1 };


   printf("������ ���� ���� ������ ��ȣ�� �Է��ϼ���.\n");
   scanf_s("%d", &number1);
   switch (number1)

   {
   case 1:
      printf("������\n");
      printf("�ּ� : ����Ư���� �߱� ���빮��9�� 40 YGŸ��\n ");
      printf("��õ�޴� : ������(��������)\n");
      printf("���� : �������� ���Ͼƶ�� �� ������ �ϴ°�!!!\n");
      printf("���� : ���� �� ����\n");
      printf("�� ����");

      for (i = 0; i < 5; i++)
      {
         sum += taste1[i];

      }
      avg = sum / 5;
      printf("�������� ������ %lf �Դϴ�.\n ", avg);
      if (avg >= 4)
         printf("*���� ��õ!!*\n");
      else if (avg >= 3)
         printf("*�� �� ������ �� ������*\n");
      else if (avg >= 2)
         printf("*������ ������*\n");
      else if (avg >= 1)
         printf("*�׷�����*\n");
      else
         printf("*���� ������.*\n");

      review();
      break;
   case 2:
      printf("��ȹ�\n");
      printf("�ּ� : ����Ư���� �߱� ������3�� 29 \n");
      printf("��õ�޴� : ��������,�����\n");
      printf("���� : 1�� 1�����\n");
      printf("���� : �������� ������ ���� �����Ծ����\n");
      printf("�� ����");
      for (i = 0; i < 5; i++)
      {
         sum += taste2[i];

      }
      avg = sum / 5;
      printf("�������� ������ %lf �Դϴ�.\n ", avg);
      if (avg >= 4)
         printf("*���� ��õ!!*\n");
      else if (avg >= 3)
         printf("*�� �� ������ �� ������*\n");
      else if (avg >= 2)
         printf("*������ ������*\n");
      else if (avg >= 1)
         printf("*�׷�����*\n");
      else
         printf("*���� ������.*\n");

      review();
      break;
   case 3:
      printf("����� ������\n");
      printf("�ּ� : ����Ư���� �߱� �ٵ��� 33 �䱤���� 1��\n");
      printf("��õ�޴� : ���ٱ� ������\n");
      printf("���� : �����, ������ ��������\n");
      printf("���� : ����\n");
      printf("�� ����");

      for (i = 0; i < 5; i++)
      {
         sum += taste3[i];

      }
      avg = sum / 5;
      printf("�������� ������ %lf �Դϴ�.\n ", avg);
      if (avg >= 4)
         printf("*���� ��õ!!*\n");
      else if (avg >= 3)
         printf("*�� �� ������ �� ������*\n");
      else if (avg >= 2)
         printf("*������ ������*\n");
      else if (avg >= 1)
         printf("*�׷�����*\n");
      else
         printf("*���� ������.*\n");

      review();
      break;
   case 4:
      printf("����«��");
      printf("�ּ� : ���� ���α� ���ϴ�� 15�� 25 1��\n");
      printf("��õ�޴� : «��\n");
      printf("���� : ����Ƽ ���� «���� ����\n");
      printf("���� : �����\n");
      printf("�� ����");
      for (i = 0; i < 5; i++)
      {
         sum += taste4[i];
      }
      avg = sum / 5;
      printf("�������� ������ %lf �Դϴ�.\n ", avg);
      if (avg >= 4)
         printf("*���� ��õ!!*\n");
      else if (avg >= 3)
         printf("*�� �� ������ �� ������*\n");
      else if (avg >= 2)
         printf("*������ ������*\n");
      else if (avg >= 1)
         printf("*�׷�����*\n");
      else
         printf("*���� ������.*\n");

      review();
      break;
   case 5:
      printf("�γ�\n");
      printf("�ּ� : ����Ư���� ���α� ����12�� 15 �ھƺ���1\n");
      printf("��õ�޴� : ������ ������\n");
      printf("���� : ��������\n");
      printf("���� : �ѹ� ������ ������\n");
      printf("�� ����");
      for (i = 0; i < 5; i++)
      {
         sum += taste5[i];
      }
      avg = sum / 5;
      printf("�������� ������ %lf �Դϴ�.\n ", avg);
      if (avg >= 4)
         printf("*���� ��õ!!*\n");
      else if (avg >= 3)
         printf("*�� �� ������ �� ������*\n");
      else if (avg >= 2)
         printf("*������ ������*\n");
      else if (avg >= 1)
         printf("*�׷�����*\n");
      else
         printf("*���� ������.*\n");
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

//�̸� �Է�/���, ���� �Է�/���
/*
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
#define LINE "============================================"
void menu() {
	printf("%s\n", LINE);
	printf("\t\t������ ��\t\t\n");
	printf("%s\n", LINE);
	printf("\t%s\n", "1. ������ �̸�");
	printf("\t%s\n", "2. ��, ����, ���� ���� �Է�");
	printf("\t%s\n", "3. ������ �̸� ���");
	printf("\t%s\n", "4. �հ� ���");
	printf("\t%s\n", "5. ��� ���");
	printf("\t%s\n", "6. ����");
	printf("\t%s\n", "7. ����\n");
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
			printf("������ �̸��� �Է����ּ���: \n");
			scanf_s("%s", name, sizeof(name));
			isInputName = true; _getch(); break;
		case 2:
			printf("�������� ���� �����ּ��� /4: \n");
			scanf_s("%d", &x);
			printf("�������� ���� ������ �����ּ��� /4: \n");
			scanf_s("%d", &y);
			printf("�������� ���� ������ �����ּ��� /4 : \n");
			scanf_s("%d", &z);
			isInputPoint = true; _getch(); break;
		case 3:
			if (!isInputName) {
				printf("�������� �Է��ϼž� �մϴ�.\n");
			}
			else {
				printf("�Է��� �������� %s�Դϴ�.\n", name);
			}_getch(); break;
		case 4:
			if (isInputPoint) {
				sum = x + y + z;
				printf("�հ�� %d�Դϴ�.\n", sum);
			}
			else {
				printf("���� ������ �Է��ϼ���.\n");
			}_getch(); break;
		case 5:
			avg = sum / 3.0;
			printf("����� %.2f�Դϴ�.\n", avg);
			_getch(); break;
		case 6:
			printf("%s �������� ������ %.2f�Դϴ�.", name, avg);
			if (avg >= 4)
				printf("*���� ��õ�Դϴ�!!*\n");
			else if (avg >= 3)
				printf("*�� �� ������ �� �������Դϴ�.*\n");
			else if (avg >= 2)
				printf("*������ �������Դϴ�*\n");
			else if (avg >= 1)
				printf("*�׷������̿���*\n");
			else
				printf("*���� ������.*\n");
		case 7:
			exit(1); break;
		}

	}

}
*/
#include <stdio.h>		//printf(), scanf()
//��õ
int main(int argc, char* argv[]) {
	double n;
	printf(">>");
	scanf_s("%lf", &n);
	if (n >= 90)
		printf("���� ��õ!!");
	else if (n >= 80)
		printf("�� �� ������ �� ������");
	else if (n >= 60)
		printf("������ ������");
	else if (n >= 40)
		printf("�׷�����");
	else
		printf("���� ������.");
}
/*

#include <stdio.h>		//printf(), scanf()
//�� //https://www.mayoclinic.org/healthy-lifestyle/adult-health/expert-answers/how-many-hours-of-sleep-are-enough/faq-20057898 ��Ʈ�����
int main(int argc, char* argv[]) {
	double n;
	printf("���� �ð� �Է�>>");
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