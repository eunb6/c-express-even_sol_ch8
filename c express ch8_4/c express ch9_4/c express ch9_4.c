#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int year = 0;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);
	is_leap(year);
	return 0;
}
int is_leap(int year) {

	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
		printf("%d���� ����\n", year);
	}
	
	else 
		printf("%d��� ������ �ƴմϴ�.\n", year);
	return 0;
	
}