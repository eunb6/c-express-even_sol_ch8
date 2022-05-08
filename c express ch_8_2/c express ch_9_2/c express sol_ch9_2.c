#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char test;
void check_alpha(void) {
	if (test >= 97 && test <= 122) { //아스키코드 이용
		printf("%c 는 알파벳 문자입니다.");
	}
}

int main(void) {
	printf("문자를 입력하시오: ");
	scanf("%c", &test);
	check_alpha();
	return 0;
}