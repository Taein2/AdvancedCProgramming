#define _CRT_SECURE_NO_WARNINGS
#define MAX_ROWS 5
#define MAX_COLS 4
#include <stdio.h>

void Arr(int *p);
int main() {
	
	int table[MAX_ROWS][MAX_COLS] = { {0,1,2,3}, {10,11,12,13}, {20,21,22,23}, {30,31,32,33},{40,41,42,43} };
	int num;
	for (int i = 0; i < MAX_ROWS; i++) {
		for (int j = 0; j < MAX_COLS; j++) {
			Arr(&table[i][j]);
			printf("%6d", table[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void Arr(int *p) {
	*p = (*p) * (*p);
}