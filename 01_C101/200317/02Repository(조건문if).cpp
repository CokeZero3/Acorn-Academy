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
//¦�� ��� ¦�� ���, Ȧ�� ��� Ȧ�� ���
int main(int argc, char* argv[]) {
	int x, y;
	scanf_s("%d", &x);
	y = x % 2;
	if (y == 0) printf("¦��");
	if (y != 0) printf("Ȧ��"); //if(y)�� ǥ�� ����
//
	int main(int argc, char* argv[]) {
		int x;
		printf("10 ���� ū ������ �Է��ϼ���...");
		scanf_s("%d", &x);
		if (x <= 10)
			printf("10 ������ ���� �Է��Ͽ����ϴ�!\n");
		print("%d", x);
	}


//�Է��� �����Ͱ� 3�� ����� ��� ����Ͻÿ�.
	int main(int argc, char* argv[]) {
		int x;
		printf("������ �Է��ϼ���...");
		scanf_s("%d", &x);
		if (x % 3 == 0)
			printf("3�� ����� �Է��Ͽ����ϴ�!\n");
		printf("%d", x);
	}
//���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�
	int main(int argc, char* argv[]) {
		int x, abs;
		printf("������ �Է��ϼ���...");
		scanf_s("%d", &x);

		if (x < 0) {
			abs = x * (-1);
		}
		printf("���밪:%d\n", abs);
	}
	//���� �Է� �޾� ¦, Ȧ�� �����Ͽ� ����Ͻÿ�
	int main(int argc, char* argv[]) {
		int x;
		printf("������ �Է��ϼ���...\n");
		scanf_s("%d", &x);

		if (x % 2 == 0)
			printf("¦���Դϴ�.");
		if (x % 2 != 0)
			printf("Ȧ���Դϴ�");
	}
	//�� ���� �Է� �޾� ū ���� ���
	int main(int argc, char* argv[]) {
		int x, y, max;
		printf("2���� ������ �Է��ϼ���...\n");
		scanf_s("%d%d", &x, &y);

		if (x > y)	printf("%d�� ū ���Դϴ�.", x);
		if (x < y)	printf("%d�� ū ���Դϴ�.", y);
		/* if(x>y) max = x;
		if (x <= y) max y;
		print("max: %d", max);*/
	}

	//�� ���� �Է� �޾� ū ���� ���
	int main(int argc, char* argv[]) {
		int x, y, z, max;
		printf("3���� ������ �Է��ϼ���...\n");
		scanf_s("%d%d%d", &x, &y, &z);

		if (x > y)
			max = x;
		if (x <= y)
			max = y;
		if (max < z)
			max = z;
		printf("max: %d", max);
	}

	//�� ���� �Է� �޾� ū���� ¦���̸� ����Ͻÿ�
	int main(int argc, char* argv[]) {
		int x, y, max;
		printf("2���� ������ �Է��ϼ���...\n");
		scanf_s("%d%d", &x, &y);

		if (x > y)
			max = x;
		if (x <= y)
			max = y;
		if (max % 2 == 0)
			printf("max: %d", max);
	}
	//�� ���� �Է� �޾� ���� ¦���̰� 3�� ����� ���� ����Ͻÿ�
	int main(int argc, char* argv[]) {
		int x, y, sum;
		scanf_s("%d%d", &x, &y);

		sum = x + y;
		if (sum % 2 == 0 && sum % 3 == 0)
			printf("sum: %d", sum);
	}

//========================IF & ELSE ========================================================
// ������ ���� �޾� �ִ밪�� �ּҰ��� ����Ͻÿ�.
	int main(int argc, char* argv[]) {
		int num1, num2, num3, max, min;

		printf("���� 3 ���� �Է��ϼ���.");
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
//. ���� ¦�� Ȧ�� ���� ����
	int main(int argc, char* argv[]) {
		int num1;
		printf("������ �Է��ϼ���.");
		scanf_s("%d", &num1);

		if (num1 >= 0) {
			if ((num1 % 2) == 0)
				printf(" %d:���� ¦��", num1);
			else
				printf(" %d:���� Ȧ��", num1);
		}
		else
			printf(" %d: ����", num1);
		printf("\n-----���α׷� ���� ��-----!");
	}

	// �հ� ���հ� ���� �����
	int main(int argc, char* argv[]) {
		int kor, eng, math, avr;
		printf("3���� ������ �Է��ϼ���...");
		scanf_s("%d%d%d", &kor, &eng, &math);

		avr = (kor + eng + math);
		if (avr < 70)
			printf("\n ���հ�!");
		else if (kor < 60)
			printf("\n ���հ�!");
		else if (eng < 60)
			printf("\n ���հ�!");
		else if (math < 60)
			printf("\n ���հ�!");
		else
			printf("\n �հ�!");
	}
//1. �Է� ���� ¦�� Ȧ�� �˻� ���α׷� �ۼ�
	int main(int argc, char* argv[]) {
		int x;

		printf("���ڸ� �Է��ϼ���.\n");
		scanf_s("%d", &x);

		if (x % 2 == 0) {
			printf("¦���Դϴ�.");
		}
		else {
			printf("Ȧ���Դϴ�.");
		}
	}

	/*	�⺻ �ð�: 30��
		�⺻ ���:1�δ� 3000
		�߰� �ð�:10��
		�߰� ���: 500
		�����: ������ defaultTime, defaultPay, addTime, addPay, man, sum, useTime;
		�Էº�: �̿�ð�, �̿��ο�
		ó����:
			1. �Էµ� �̿�ð� �⺻ �ð����� ���� ��� �⺻���
			2. �Էµ� �̿�ð��� �⺻ �ð����� ū ��� �⺻��� + �߰���� �߻�
			2.1 �߰���� ��� 10�д� 500�� 10 * 500
		��º�: �̿��ο� + �������
		*/
		/*1. ���������� �� Ÿ�µ� �⺻��� 30�� 1�δ� 3000��
		���� 10�д� 500�� �߰� ���. ��ü �ݾ��� ����ϴ� ���α׷� �ۼ�.
		*/
	int main(int argc, char* argv[]) {
		int dT = 30, dP = 3000, aT, aP, man, sum, uT;
		printf("ž���ο� ���?");
		scanf_s("%d", &man);
		printf("�̿�ð��� �д����� �Է��Ͻÿ�");
		scanf_s("%d", &uT);
		dT = 30;

		if (uT <= dT) {
			sum = dP;
		}
		else {
			sum = dP;
			sum = sum + 500 / 10 * (uT - dT);
		}
		printf("�̿��ο�: %d, �� ���: %d", man, man * sum);
	}
//���̰� �ø� ���� �ݿø�
	int main(int argc, char* argv[]) {
		int dT = 30, dP = 3000, man, sum, uT;
		printf("ž���ο� ���?");
		scanf_s("%d", &man);
		printf("�̿�ð��� �д����� �Է�");
		scanf_s("%d", &uT);
		sum = dP;

		if (uT > dT) {
			//1�д� ���
			//sum = sum + 500 / 10 * (uT - dT);
			//���� sum = sum + (uT - dT)/10 * 500;
			//�ݿø� sum = sum + (uT - dT+5)/10 * 500;
			sum = sum + (uT - dT + 9) / 10 * 500; //�ø�
		}	printf("�̿��ο�: %d, �� ���: %d", man, man * sum);
	}

	/*
	�⺻ ����: 10��
	�⺻ ���: 2500
	10�� �ʰ� ���: 2400

	�����: dEa, dP,
	�Էº�: �ֹ�����
	ó����: 1. �ֹ� ������ 10�� ���� ���� 2500 2.
			2. �ֹ� ������ 10�� �̻��̸� 25000+2400 ����
	��º�:
	*/

	int main(int argc, char* argv[]) {
		int dEa = 10, dP = 2500, ea, sum;
		printf("�ֹ� ���ö� ���� �Է�");
		scanf_s("%d", &ea);

		sum = ea * 2500;

		if (ea > dEa) {
			sum = sum - (ea - dEa) * 100;
		}
		printf("�� ���: %d", sum);
	}
/*	
	�⺻ ����: 10��, 100��
	�⺻ ����: 5000
	������: 10%, 12%

	�����: disk, sum, 
	�Էº�: disk ����
	ó����: 1. 10�� ���� disk * 5000
			2. 100�� �̻� disk * 5000 * 0.88
			3. 10�� �̻�, disk *5000 * 0.9
	��º�: 
	*/

int main(int argc, char* argv[]) {
	int disk, sum;
	printf("Disk ���� �Է�");
	scanf_s("%d", &disk);
	sum = disk * 5000;

	if (disk >= 100) sum = sum * 0.88;
	if(disk >= 10) sum = sum * 0.9;
	printf("�� ���: %d", sum);

}
//����
int main(int argc, char* argv[]) {
	int c, java, jsp, sum;
	float avg;
	printf("C, Java, JSP ���� ���� �Է�");
	scanf_s("%d%d%d", &c, &java, &jsp);
	sum = c + java + jsp;
	avg = sum / 3.0;
	if (avg >= 90) printf("A");
	else if (avg >= 80) printf("B");
	else if (avg >= 70) printf("C");
	else if (avg >= 60) printf("D");
	else  printf("F");
}