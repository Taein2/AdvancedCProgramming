#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num1, num2, num3;
	double avg;
	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d",&num1);
	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num2);
	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num3);
	avg = (double)(num1 + num2 + num3) / 3;
	printf("����� %0.2f �Դϴ�.", avg);

	return 0;
}