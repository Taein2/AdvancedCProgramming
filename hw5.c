#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b, int c);
int sum2(int a, int b);
double average(int s, int c);
int main() {

	int num1, num2, num3, total, max;
	double avg;

	printf("입력 ");
	scanf("%d %d %d", &num1, &num2, &num3);
	total = sum(num1,num2 ,num3);
	avg = average(total, 3);
	printf("\n세 정수들의 합: %d \n",total );
	printf("세 정수들의 평균: %0.2f \n\n", avg);
	total = sum2(num1, num2);
	avg = average(total, 2);
	printf("처음 두 정수들의 합: %d \n", total);
	printf("두 정수들의 평균: %0.2f \n",avg);

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
