#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int year = 0;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);
	is_leap(year);
	return 0;
}
int is_leap(int year) {

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
		printf("%d년은 윤년\n", year);
	}
	
	else 
		printf("%d년는 윤년이 아닙니다.\n", year);
	return 0;
	
}