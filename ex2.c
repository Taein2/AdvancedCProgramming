#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, sum = 0, cnt = 0;
	printf("1���� 1000������ ���� �߿��� 7�� ����� ������ ��, ����, n��° 7�� ��� ��� ���α׷�\n");
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