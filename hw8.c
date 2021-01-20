#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {		//sentinel value : \n

	int digits[10] = {0};
	int c;
	int whiteSpace = 0, other=0;
	printf("Input : ");
	while (c = getchar()) {
		if (c == '\n') {
			break;
		}
		if (c >= '0' && c <= '9') {
			digits[c - '0']++;
		}
		else if(c == '\t' || c == ' '){
			whiteSpace++;
		}
		else {
			other++;
		}
	}
	printf("\t# of each digit:\n");
	for (int i = 0; i < sizeof(digits)/sizeof(int); i++) {
		printf("\tdigits[%d] = %d\n", i, digits[i]);
	}
	printf("\n\twhite space = %d, other = %d\n", whiteSpace, other);
	return 0;
}