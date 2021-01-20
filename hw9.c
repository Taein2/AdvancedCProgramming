#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int num, temp, cnt = 0;
	int arr[5] = { 0, };
	printf("입력 : ");
	scanf("%d", &num);
	temp = num;
	while (num != 0) {
		temp = num % 10;
		num = num / 10;
		arr[cnt] = temp;
		cnt++;
	}
	printf("출력 : ");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d", arr[i]);
	}

	return 0;
}