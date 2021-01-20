#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, max, sum;
	int** arr = NULL;
	while (1) {
		printf("Input how many students(exit 0) : ");
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		arr = (int**)malloc(sizeof(int*) * (num+1));
		for (int i = 0; i < num; i++) {
			arr[i] = (int*)malloc(sizeof(int) * (3+1));
		}
		for (int i = 0; i < num; i++) {
			printf("%d : ",i+1);
			for (int j = 0; j < 3; j++) {
				scanf("%d", &arr[i][j]);
			}

		}

		printf("NO\tKOR\tENG\tMATH\tTOT\tAVG\n");
		for (int i = 0; i < num; i++) {
			max = 0, sum = 0;
			printf("%d\t", i+1);
			for (int j = 0; j < 3; j++) {
				printf("%d\t", arr[i][j]);
				sum += arr[i][j];
				if (j == 2) {
					printf("%d\t%0.2f",sum,(double)sum/3);
				}
			}
			printf("\n");
		}
		free(arr);
	}


	return 0;
}
