//���� ���� ��
int main(int argc, char* argv[]) {
	int num;
	scanf_s("%d", &num);
	switch (num) {
	case 0:printf("����"); break;
	case 1:printf("����"); break;
	case 2:printf("��"); break;
	default:printf("����");
	}
// �޴� �����
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()

	int main(int argc, char* argv[]) {
		int num, data = 0;
		while (1) { //���ѹݺ��� ����
			printf("=============================================\n");
			printf("1. ������ �Է�\n");
			printf("2. ������ ���\n");
			printf("3. ����\n");
			printf("=============================================\n");
			scanf_s("%d", &num);
			switch (num) {
			case 1:printf("�����͸� �Է��ϼ���\n");
				scanf_s("%d", &data); break;
			case 2:printf("%d", data); _getch(); break; //getch �Ͻ�����
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
		printf("��ǳ�� ���� 1��ǳ, 2��ǳ, 3��ǳ, 4����");
		scanf_s("%d", &num);

		switch (num) {
		case 1:printf("��ǳ"); break;
		case 2:printf("��ǳ"); break;
		case 3:printf("��ǳ"); break;
		case 4:printf("����"); break;
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
		case 0: printf("ù��"); break;
		case 1: printf("��°��"); break;
		case 2: printf("��°��"); break;
		case 3: printf("��°��"); break;
		case 4: printf("�ټ�°��"); break;
		default: printf("����");
		}
	}

	//�ſ뵵
	int main(int argc, char* argv[]) {
		int credit;
		printf("credit rating: ");
		scanf_s("%d", &credit);

		switch (credit / 10) {
		case 1: printf("B"); break;
		case 2: printf("D"); break;
		case 3: printf("G"); break;
		default: printf("����"); break;
		}
	}

	//�����ڵ�
	int main(int argc, char* argv[]) {
		int code;
		printf("Code: ");
		scanf_s("%d", &code);

		switch (code) {
		case 5: printf("A"); break;
		case 15: printf("B"); break;
		case 20: printf("C"); break;
		default: printf("����"); break;
		}
	}
	// Ư���󿩱�
	int main(int argc, char** argv) {
		int sales;
		printf("Sales: ");
		scanf_s("%d", &sales);

		switch (sales / 201) {
		case 0: printf("Ư���󿩱�: 1000, Ư������Ʈ 2"); break;
		case 1: printf("Ư���󿩱�: 3000, Ư������Ʈ 4"); break;
		case 2: printf("Ư���󿩱�: 5000, Ư������Ʈ 6"); break;
		case 3: printf("Ư���󿩱�: 7000, Ư������Ʈ 8"); break;
		case 4: printf("Ư���󿩱�: 9000, Ư������Ʈ 10"); break;
		default: printf("����");
		}
	}

	// ����
	int main(int argc, char* argv[]) {
		int num1, num2;
		char a;

		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d%c%d", &num1, &a, sizeof(char), &num2);

		switch (a) {
		case '+': printf("%d%c%d=%d", num1, a, num2, num1 + num2); break;
		case '-': printf("%d%c%d=%d", num1, a, num2, num1 - num2); break;
		case '*': printf("%d%c%d=%d", num1, a, num2, num1 * num2); break;
		case '/': printf("%d%c%d=%d", num1, a, num2, num1 / num2); break;
		}
	}
//�̸� �Է�/���, ���� �Է�/���
#include <stdio.h>		//printf(), scanf()
#include <stdlib.h>		//exit(), system()
#include <conio.h>		//getch()
#define LINE "======================================"
	void menu() {
		printf("%s\n", LINE);
		printf("\t\tMenu\t\t\n");
		printf("%s\n", LINE);
		printf("\t%s\n", "1. �л��̸� �Է�");
		printf("\t%s\n", "2. ���� 3���� �Է�");
		printf("\t%s\n", "3. �л��̸� ���");
		printf("\t%s\n", "4. �հ� ���");
		printf("\t%s\n", "5. ��� ���");
		printf("\t%s\n", "6. ����\n");
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
				printf("�л� �̸� �Է�: \n");
				scanf_s("%s", name, sizeof(name));
				isInputName = true; _getch(); break;
			case 2:
				printf("C����� ������ �Է��ϼ���: \n");
				scanf_s("%d", &x);
				printf("Java����� ������ �Է��ϼ���: \n");
				scanf_s("%d", &y);
				printf("Jsp����� ������ �Է��ϼ���: \n");
				scanf_s("%d", &z);
				isInputPoint = true; _getch(); break;
			case 3:
				if (!isInputName) {
					printf("�̸��� �Է��ϼž� �մϴ�.\n");
				}
				else {
					printf("�Է��� �̸��� %s �Դϴ�.\n", name);
				}_getch(); break;
			case 4:
				if (isInputPoint) {
					sum = x + y + z;
					printf("������ %d�Դϴ�.\n", sum);
				}
				else {
					printf("���� ������ �Է��ϼ���.\n");
				}_getch(); break;
			case 5:
				if (isCalcSum) {
					avg = sum / 3.0;
					printf("����� %.2f�Դϴ�.", avg);
				}
				else {
					printf("�հ踦 ���� ����ϼ���.\n");
				}_getch(); break;
			case 6:
				exit(1); break;
			}
		}
	}