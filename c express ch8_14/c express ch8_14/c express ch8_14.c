#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double get_distance(double x1, double y1, double x2, double y2) {
	
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

}

 int main(void) {
	 int x1, x2, y1, y2;
	
	printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�(x,y): ");
	scanf("%d %d", &x1, &y1);
	printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�(x,y): ");
	scanf("%d %d", &x2, &y2);

	printf("�� �� ������ �Ÿ��� %f �Դϴ�", get_distance(x1, y1, x2, y2));
	return 0;

}