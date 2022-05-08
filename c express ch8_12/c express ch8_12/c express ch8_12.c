#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int i = 0;
int a = 0;

int print_value(int a) {

		for (i = 0; i < a; i++) {
			printf("*");
		}
		printf("\n");
	
}

int main() {
	
		printf("값을 입력하세요 (종료는 음수): ");
		scanf("%d", &a);
		print_value(a);
		if (a > 0)
			main();

}