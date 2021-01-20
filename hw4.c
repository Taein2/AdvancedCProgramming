#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1, num2, num3 , sum, max;
	double d_num1, d_num2, d_num3, d_max, d_sum, all_avg;
	
	printf("세 정수를 입력하세요 : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	if (num1 > num2) {
		max = num1 > num3 ? num1 : num3;
	}
	else {
		max = num2 > num3 ? num2 : num3;
	}
	sum = num1 + num2 + num3;
	all_avg = (double)sum / 3;
	printf("최대값은 %d 합은 %d 평균은 %0.3f 입니다.\n", max, sum, all_avg);
	printf("세 실수를 입력하세요 : ");
	scanf("%lf %lf %lf", &d_num1, &d_num2, &d_num3);
	if (d_num1 > d_num2) {
		d_max = d_num1 > d_num3 ? d_num1 : d_num3;
	}
	else {
		d_max = d_num2 > d_num3 ? d_num2 : d_num3;
	}
	d_sum = d_num1 + d_num2 + d_num3;
	all_avg = d_sum / 3;
	printf("최대값은 %f 합은 %0.3f 평균은 %0.3f 입니다.\n", d_max, d_sum, all_avg);
	
	return 0;
}