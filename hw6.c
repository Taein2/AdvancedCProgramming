#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sum(int a, int b, int c); //�� ���� a, b, c�� ���� ���ϴ� �Լ�
double Average(int s, int c); // total s�� ���� c�� ���޹޾� ����� ���ϴ� �Լ�
int Max(int a, int b, int c); //�� ���� a, b, c�� �ִ밪�� ���ϴ� �Լ�
int Min(int a, int b, int c); //�� ���� a, b, c�� �ּҰ��� ���ϴ� �Լ�
int Sum2(int a, int b); //�� ���� a, b�� ���� ���ϴ� �Լ�


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
	printf("���� %d %d %d\n\n",ran1,ran2,ran3);
	printf("�� �������� ��: %d \n", total);
	printf("�� �������� ���: %0.2f \n\n", avg);
	printf("�ִ밪�� �ּҰ��� ��: %d \n", ran_total);
	printf("�ִ밪�� �ּҰ��� ���: %0.2f \n", ran_avg);
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