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
	//����� 0�̸� True, 1�̸� False
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 <= su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 >= su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 == su2);
	printf("���� su1�� su2�� ũ�� �� ���:%d\n", su1 != su2);
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

	printf("������ �Է��ϼ���...");
	scanf_s("%d", &num);
	//if (((num > 0) && (num <= 100)) == false )
	if (!((num > 0) && (num <= 100)))
		printf("�Է� ������ ���� �����ϴ�.\n");
}

int main() {
	// a++,a+=1,a=a+1 �� ���� ��
	//¦�� Ȧ��

	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d:¦��\n", su) :
		printf("%d:Ȧ��\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d:¦��\n", su) :
		printf("%d:Ȧ��\n", su);
}
int main() {

int su;

printf("���ڸ� �Է��ϼ���.\n");
scanf_s("%d", &su);

//(su % 2 == 0) ? printf("%d:¦��\n", su) : printf("%d:Ȧ��\n", su);
printf("%d��");
(su % 2 == 0) ? printf("¦��") : printf("Ȧ��");
printf("�Դϴ�.");
}
/* ����
���� �Է� �޾� ¦, Ȧ���� �����Ͽ� ���
P
I
¦, Ȧ�� ����
O
�Է¹��� ���� ¦ Ȧ�� ���
*/

int main(void) {

	int su;

	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &su);

	printf("%d��");
	(su % 3 == 0) ? printf("3�� ���") : 0;
	printf("�Դϴ�.");
}

//�μ��� �Է� �޾� ū ���� ���
int main(void) {
	int x, y, max;

	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d%d", &x, &y);

	(x > y) ? max = x : max = 2;
	printf("max = %d", max);
}
// ���� �� ���� ū ���� ���
int main(void) {
	int x, y, z, max;

	printf("���� 3���� �Է��ϼ���.\n");
	scanf_s("%d%d%d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("max = %d", max);
}
//�μ��� �Է� �޾� ū ���� ¦���̸� ����Ͻÿ�
int main(void) {
	int x, y, z, max;

	printf("���� 2���� �Է��ϼ���.\n");
	scanf_s("%d%d%d", &x, &y, &z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	(max % 2 == 0) ? printf("¦��") : 0;
	printf("max = %d", max);
}
int main(void) {
	/*�μ��� �Է� �޾� ���� ¦���̰� 3�� ����� ���� ����Ͻÿ�
	p
	������ ���� 2�� ����
	I
	�� ���� �Է�
	p
	1. �� ���� �� ���ϱ�
	2. ���� ¦���̰� 3�� ����� ���� �ᱹ 6�� ��������� 6�� ���� ��
	0
	����� �� ���
	*/
	int x, y, sum;

	scanf_s("%d%d", &x, &y);

	sum = x + y;
	(sum % 6 == 0) ? printf("sum = %d", sum) : 0;
}