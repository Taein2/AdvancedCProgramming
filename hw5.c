#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b, int c);
int sum2(int a, int b);
double average(int s, int c);
int main() {

	int num1, num2, num3, total, max;
	double avg;

	printf("�Է� ");
	scanf("%d %d %d", &num1, &num2, &num3);
	total = sum(num1,num2 ,num3);
	avg = average(total, 3);
	printf("\n�� �������� ��: %d \n",total );
	printf("�� �������� ���: %0.2f \n\n", avg);
	total = sum2(num1, num2);
	avg = average(total, 2);
	printf("ó�� �� �������� ��: %d \n", total);
	printf("�� �������� ���: %0.2f \n",avg);

	return 0;
}
int sum(int a, int b, int c) {
	return a + b + c;
}
int sum2(int a, int b) {
	return a + b;
}

double average(int s, int c) {
	return (double)s / c;
}
