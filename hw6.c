#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sum(int a, int b, int c); //세 정수 a, b, c의 합을 구하는 함수
double Average(int s, int c); // total s와 개수 c를 전달받아 평균을 구하는 함수
int Max(int a, int b, int c); //세 정수 a, b, c의 최대값을 구하는 함수
int Min(int a, int b, int c); //세 정수 a, b, c의 최소값을 구하는 함수
int Sum2(int a, int b); //두 정수 a, b의 합을 구하는 함수


int main() {
	int ran1, ran2, ran3, total, ran_max,ran_min,ran_total;
	double avg, ran_avg;
	srand(time(NULL));
	ran1 = rand() % 71;
	ran2 = rand() % 71;
	ran3 = rand() % 71;
	total = Sum(ran1, ran2, ran3);
	avg = Average(total, 3);
	ran_max = Max(ran1, ran2, ran3);
	ran_min = Min(ran1, ran2, ran3);
	ran_total = Sum2(ran_max, ran_min);
	ran_avg = Average(ran_total, 2);
	printf("난수 %d %d %d\n\n",ran1,ran2,ran3);
	printf("세 난수들의 합: %d \n", total);
	printf("세 난수들의 평균: %0.2f \n\n", avg);
	printf("최대값과 최소값의 합: %d \n", ran_total);
	printf("최대값과 최소값의 평균: %0.2f \n", ran_avg);
	return 0;
}
int Sum(int a, int b, int c) {
	return a + b + c;
}
double Average(int s, int c) {
	return (double)s / c;
}
int Max(int a, int b, int c) {
	if (a > b) {
		return a > c ? a : c;
	}
	else {
		return b > c ? b : c;
	}
}
int Min(int a, int b, int c) {
	if (a < b) {
		return a < c ? a : c;
	}
	else {
		return b < c ? b : c;
	}

}
int Sum2(int a, int b) {
	return a + b;
}