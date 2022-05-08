#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n; 

int even(int n) {
	if ((n % 2) == 0) {
		printf("even()의 결과 : 짝수\n");
	}
}

int absolute(int n) {
	if (n < 0)
		n = n * (-1);
	printf("absolute()의 결과 : %d\n", n);
}

int sign(int n) {
	if (n < 0)
		printf("sign()의 결과 : -1");
	else if (n > 0)
		printf("sign()의 결과 : 1");
	else
		printf("sign()의 결과 : 0");
}

void main() {
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	even(n);
	absolute(n);
	sign(n);
	return 0;
}