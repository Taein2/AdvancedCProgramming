#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int SecToHours(long long int time, int* hours, int* minutes, int* seconds);
int main() {
	long long int time;
	int hours,minutes, seconds, day = 0, flag = 1;
	printf("Please, input TIME in seconds : ");
	scanf("%lld", &time);
	printf("�Է��� %lld�ʴ� ", time);
	while(flag){
		flag = SecToHours(time, &hours, &minutes, &seconds);
		if (flag == 0 && day != 0) {
			printf("%d�� ", day);
			break;
		}
		else if (flag == 0) {
			break;
		}
		time = time - 86400;
		day++;
	}
	printf("%d�ð� %d�� %d���Դϴ�.\n", hours,minutes,seconds);
	printf("--------------------------------\n");
	return 0;
}
int SecToHours(long long int time, int* hours, int* minutes, int* seconds) {
	
	long long int localTime;
	localTime = time;
	*seconds = localTime % 60;
	localTime = localTime / 60;

	*minutes = localTime % 60;
	*hours = localTime / 60;

	if (*hours >= 24)
		return 1;
	else
		return 0;

}