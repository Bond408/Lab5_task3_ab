#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	float x;
	int t = -6;
	setlocale(LC_ALL, "RUS");
	puts("Задайте параметр x");
	scanf_s("%f", &x);
	float a = log(x);
	float b = sqrt(pow(x, 2) + pow(t, 2));
	float y = pow(fabs(a - b * x), 1 / 5.f);
	printf("X = %f, Y = %.4f\n", x, y);

	int A = a;
	int B = b;
	int C = y;
	printf("%d %d %d\n", A, B, C);
	if ((A % 2 == 0 and B % 2 != 0) or (A % 2 != 0 and B % 2 == 0)) {
		printf("Условие выполнено 1\n");
	} else {
		printf("Условие выполнено 0\n");

	}
	if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0) {
		printf("Условие выполнено 1\n");
	} else {
		printf("Условие выполнено 0\n");
	}
		
}

