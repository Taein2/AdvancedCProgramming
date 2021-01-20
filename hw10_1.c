#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	double max, sum, avg;
	double* arr = NULL;
	while (1) {
		printf("Input array size(exit 0) : ");
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		max = 0, sum = 0;
		arr = (double*)malloc(sizeof(double) * (num+1));
		printf("Input numbers : ");
		for (int i = 0; i < num; i++) {
			scanf("%lf", &arr[i]);
		}
		for (int i = 0; i < num; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
			sum += arr[i];
		}
		printf("Array Size : %d\n", num);
		printf("Maximum element : %0.1f\n", max);
		printf("Average : %0.1f\n", sum/num);
		printf("Sum : %0.1f\n\n", sum);
		free(arr);
	}
	

	return 0;
}
