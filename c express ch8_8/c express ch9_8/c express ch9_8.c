#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double pi = 3.141592;
double x, y;

double sin_degree(double degree) {

	return sin((pi * degree)/ 180.0);
	
}

int main(void) {

	double angle;

	for (angle = 0; angle <= 180; angle += 10) {

		printf("sin(%f)�� ���� %f�Դϴ�.\n", angle, sin_degree(angle));
	}
	return 0;
}