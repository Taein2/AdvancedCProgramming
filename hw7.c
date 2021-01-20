#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

double AreaOfFig(int fig, double len);
double VolumeOfFig(int fig, double len);
double PerimeterOfFig(int fig, double len);
int main() {

	int fig;
	double len, area, volume, perimeter;
	while (1) {
		printf("도형 종류와 한 변의 길이 또는 반지름을 입력하세요(소수점 둘째자리까지 출력, 1~4 이외의 값 입력시 종료)\n");
		printf("1.원 2.정사각형 3.정삼각형 4.구\n");
		printf("입력 : ");
		scanf("%d %lf", &fig, &len);
		if (fig > 0 && fig < 4) {
			area = AreaOfFig(fig, len);
			printf("출력 : 선택한 도형의 넓이는 %0.2f\n\n", area);
		}
		else if (fig == 4) {
			area = AreaOfFig(fig, len);
			volume = VolumeOfFig(fig, len);
			perimeter = PerimeterOfFig(fig, len);
			printf("출력 : 선택한 도형의 넓이는 %0.2f\n", area);
			printf("출력 : 선택한 도형의 부피는 %0.2f\n", volume);
			printf("출력 : 선택한 도형의 둘레는 %0.2f\n\n", perimeter);
		}
		else {
			break;
		}
	}
	
	return 0;
}
double AreaOfFig(int fig, double len) {
	if (fig == 1) {
		return M_PI * pow(len,2);
	}
	else if (fig == 2) {
		return pow(len, 2);
	}
	else if (fig == 3) {
		return sqrt(3) / 4 * pow(len, 2);
	}
	else if(fig == 4){
		return 4*M_PI*pow(len,2);
	}

}
double VolumeOfFig(int fig, double len) {
	if (fig == 4) {
		return 4 / 3 * M_PI * pow(len, 3);
	}
}
double PerimeterOfFig(int fig, double len) {
	if (fig == 4) {
		return M_PI * len * 2;
	}
}
