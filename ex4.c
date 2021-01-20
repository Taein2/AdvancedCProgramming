#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int SecToHours(long long int time, int* hours, int* minutes, int* seconds);
int main() {
	long long int time;
	int hours,minutes, seconds, day = 0, flag = 1;
	printf("Please, input TIME in seconds : ");
	scanf("%lld", &time);
	printf("입력한 %lld초는 ", time);
	while(flag){
		flag = SecToHours(time, &hours, &minutes, &seconds);
		if (flag == 0 && day != 0) {
			printf("%d일 ", day);
			break;
		}
		else if (flag == 0) {
			break;
		}
		time = time - 86400;
		day++;
	}
	printf("%d시간 %d분 %d초입니다.\n", hours,minutes,seconds);
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