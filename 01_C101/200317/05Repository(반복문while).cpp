//�ҹ��ڸ� �빮�ڷ� �ٲ��ִ� �ڵ�
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
//1~10������ ���ڸ� �Է� �޾� 1���� �Է� ���� �������� ��
/*
int main(int argc, char* argv[]) {
	int i, sum = 0;
	while (1) {
		printf("���Է�(1~10)");
		scanf_s("%d", &i);
		if(i>=1&&i<=10)
					break;
		printf("�߸� �Է�, �ٽ�");
	}
	for (int j = 1; j<= i; j++)
		sum += j;
	printf("%d", sum);
}
*/
//10~20������ ���ڸ� �Է� �޾� 1���� �Է� ���� �������� ��
int main(int argc, char* argv[]) {
	int i, sum = 0;
	while (1) {
		printf("���Է�(10~20)");
		scanf_s("%d", &i);
		if (i >= 10 && i <= 20)
			break;
		printf("�߸� �Է�, �ٽ�");
	}
	for (int j = 1; j <= i; j++)
		sum += j;
	printf("%d", sum);
}
// ===��=========
/*
//� ���� ����� ���ϴ� ���α׷�
int main(int argc, char* argv[]) {
	int input, i;
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &input);

	printf("%d�� ��� = \n", input);

	for (i = 1; i <= input; i++) {
		if (input % i == 0) {
			printf("%d \n", i);
		}
	}
}
/*
//1�������� �Էµ� � ������ ���� �ִ� �Ҽ��� ã�� ���α׷��� �ۼ��϶�.
int main(int argc, char* argv[]) {
	int a, i, j;
	scanf_s("%d", &a); //������ ���� a�� ������ �Է¹޽��ϴ�.
	i = 2;
	j = a - 1;

	if (a == 1) { //1�� �Ҽ��� �ƴ�
		printf("�Ҽ��ƴ�");
		}

	while (1) { //���ѷ���
		if (i <= j) {
			if (a % i == 0) { //i�� ����������� �Ҽ��� �ƴ�
				printf("�Ҽ��ƴ�");
				break;
			}
			else {
				i++;
			}
		}
		else { //i�� j���� Ŀ�������� ����������� ������ �Ҽ�
			printf("�Ҽ�");
			break;
		}
	}
}
*/
// 
int main(int argc, char* argv[]) {
	int num, i, j, sum;
	printf("������ �Է��غ� ������ ã���ٲ�");
	scanf_s("%d", &num);
	printf("\n 1 ~ %d ���� �������� ã�ƺ���\n", num);

	for (i = 1; i <= num; i++) {
		sum = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0)
				sum += j;
		}

		if (sum == i) printf("\n%d", i);
	}
	printf("��");
}


