#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n; 

int even(int n) {
	if ((n % 2) == 0) {
		printf("even()�� ��� : ¦��\n");
	}
}

int absolute(int n) {
	if (n < 0)
		n = n * (-1);
	printf("absolute()�� ��� : %d\n", n);
}

int sign(int n) {
	if (n < 0)
		printf("sign()�� ��� : -1");
	else if (n > 0)
		printf("sign()�� ��� : 1");
	else
		printf("sign()�� ��� : 0");
}

void main() {
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	even(n);
	absolute(n);
	sign(n);
	return 0;
}