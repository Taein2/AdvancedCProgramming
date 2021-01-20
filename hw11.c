#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int height, width;
	char ch;
	char** arr;
	printf("Enter the size of matrix&alphabet\n");
	scanf("%d %d %c", &width, &height, &ch);

	arr = (char**)malloc(sizeof(char*) * (height+1));
	
	for (int i = 0; i < height; i++) {
		arr[i] = (char*)malloc(sizeof(char) * (width+1));
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == j) {
				arr[i][j] = '0';
			}
			else if (i > j) { // lower
				arr[i][j] = tolower(ch);
			}
			else {	//upper
				arr[i][j] = toupper(ch);
			}
		}
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf(" %c", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < height; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}