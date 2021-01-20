#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 80

void str_prn(char**);
int main() {
	int max, swap, i;
	char temp[MAX_SIZE];
	char ch;
	char** str;
	printf("Number of Strings : ");
	scanf("%d", &max);
	str = (char**)malloc(sizeof(char*) * (max + 1));
	i = 0;
	while(1) {
		printf("Input the string : ");
		scanf("%s", temp);
		str[i] = (char*)malloc(strlen(temp)+1);
		strcpy(str[i], temp);

		swap = strlen(temp);
		for (int j = 0; j < swap/2; j++) {
			ch = str[i][swap - (j + 1)];
			str[i][swap - (j + 1)] = str[i][j];
			str[i][j] = ch;
		}
		i++;
		if (i == max) {
			break;
		}
	}
	str[i] = 0;
	str_prn(str);
	i = 0;
	while (str[i] != 0) {
		free(str[i]);
		++i;
	}
	free(str);

	return 0;
}
void str_prn(char** sp) {
	printf("Complete!!\n\n");
	while (*sp != 0) {
		printf("\t%s\n", *sp);
		sp++;
	}
}