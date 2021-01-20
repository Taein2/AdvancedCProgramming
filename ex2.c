#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, sum = 0, cnt = 0;
	printf("1부터 1000까지의 정수 중에서 7의 배수인 수들의 합, 개수, n번째 7의 배수 출력 프로그램\n");
	printf("Input : ");
	scanf("%d", &num);

	printf("Output\n");
	for (int i = 1; i < 1000; i++) {
		if (i % 7 == 0) {
			sum += i;
			cnt++;
			if (cnt == num) {
				printf("\tthe %dth number is %d\n", num, i );
			}
		}
	}
	printf("\tsum is %d\n",sum);
	printf("\tnumber is %d\n",cnt);
	return 0;
}