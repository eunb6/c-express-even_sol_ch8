#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char test;
void check_alpha(void) {
	if (test >= 97 && test <= 122) { //�ƽ�Ű�ڵ� �̿�
		printf("%c �� ���ĺ� �����Դϴ�.");
	}
}

int main(void) {
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &test);
	check_alpha();
	return 0;
}