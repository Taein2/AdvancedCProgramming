#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num1, num2, num3;
	double avg;
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d",&num1);
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &num2);
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &num3);
	avg = (double)(num1 + num2 + num3) / 3;
	printf("평균은 %0.2f 입니다.", avg);

	return 0;
}