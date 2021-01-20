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
		printf("���� ������ �� ���� ���� �Ǵ� �������� �Է��ϼ���(�Ҽ��� ��°�ڸ����� ���, 1~4 �̿��� �� �Է½� ����)\n");
		printf("1.�� 2.���簢�� 3.���ﰢ�� 4.��\n");
		printf("�Է� : ");
		scanf("%d %lf", &fig, &len);
		if (fig > 0 && fig < 4) {
			area = AreaOfFig(fig, len);
			printf("��� : ������ ������ ���̴� %0.2f\n\n", area);
		}
		else if (fig == 4) {
			area = AreaOfFig(fig, len);
			volume = VolumeOfFig(fig, len);
			perimeter = PerimeterOfFig(fig, len);
			printf("��� : ������ ������ ���̴� %0.2f\n", area);
			printf("��� : ������ ������ ���Ǵ� %0.2f\n", volume);
			printf("��� : ������ ������ �ѷ��� %0.2f\n\n", perimeter);
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
